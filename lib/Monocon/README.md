# Library for ものづくりコンテスト(神奈川県大会）

> # What is this

ものコンで組むプログラムをもっと簡潔に、もっと効率よく書きたいから作りました。

社内ライブラリ的なニュアンスなので2025年度ものコンでは動きますが、それ以降は知らん。

> # How to use

## インスタンス化

```cpp
Actuator actuator(int clockPin, int buzzerPin, int segmentPin[8], int segmentVcc[2], int motorPin[2], int stMotor[4]);
```

## 各引数の説明

- clockPin: 出力基板のフリップフロップIC [^1] に入れるクロック。
- buzzerPin: ブザーのピン
- segmentPin: ７セグメントLEDのピン
- segmentVcc: 7セグメントLEDのVCC
- motorPin: モーターのピン
- stMotor: ステッピングモーターのピン

[^1]: Dフリップフロップ、よくわからない人は<a href="https://analogista.jp/flipflop/#:~:text=%E3%81%8B%E3%82%8A%E3%81%BE%E3%81%99%E3%80%82-,D%E3%83%95%E3%83%AA%E3%83%83%E3%83%97%E3%83%95%E3%83%AD%E3%83%83%E3%83%97(D%2DFF),-D%E3%83%95%E3%83%AA%E3%83%83%E3%83%97%E3%83%95%E3%83%AD%E3%83%83%E3%83%97%E3%81%AF" target="_blank">このサイト</a>がオヌヌメ

## 用意されてる定数

- Actuator::Side
  
  LEFT or RIGHT

- Actuator::Content
  
  Number: Num0, Num1, Num2, Num3, Num4, Num5, Num6, Num7, Num8, Num9

  Alphabet: A, b, C, d, E, F, G, H, K, L, M, n, r, S, W

  No content: None
  
  

## 各メソッドの説明

> ### actuator.segment(Side side, Content content, bool displayDots = false)

#### 引数

- side: 左右どっちが光るか（Actuator::Side::LEFT, Actuator::Side::RIGHT)

- content: 光らせる文字、数字（Actuator::Content::Num0, Actuator::Content::H etc...)

- displayDots: 7セグメントLEDの右下の点を表示するか否か、何も指定しなければfalse(表示しない)になる

#### 説明

制御基板にある7セグメントLEDを光らせるメソッド



> ### actuator.segmentStop()

#### 引数

なし

#### 説明

7セグメントLEDを全て消灯させて、VCCもLOWにするメソッド



> ### actuator.motor(Side side, int pmw, unsigned long ms)

#### 引数

- side: 左右どっち回すか

- pmw: 回す速度（0~255）

- ms: 回す時間（ミリ秒単位で指定）

#### 説明

制御基板にあるDCモーターを指定した速度、時間で回すメソッド



> ### actuator.motorStop()

#### 引数

なし

#### 説明

モーターピンと繋がっているモータドライバの入力ピン両方にHIGHを入力し、モーターを停止状態にさせるメソッド



> ### actuator.buzzer(int hertz, unsigned long ms)

#### 引数

- hertz: 周波数

- ms: 鳴らす時間

#### 説明

※非推奨[^2]

制御基板にあるブザーを指定時間鳴らすメソッド



> ### actuator.steppingMotor(Side side, int step)

#### 引数

- side: 左右どっちに回すか

- step: どのステップを入力するか（1~4）[^3]

#### 説明

制御基板にあるステッピングモーターを指定した方向に回すメソッド



## 注釈

[^1]: Dフリップフロップ、よくわからない人は<a href="https://analogista.jp/flipflop/#:~:text=%E3%81%8B%E3%82%8A%E3%81%BE%E3%81%99%E3%80%82-,D%E3%83%95%E3%83%AA%E3%83%83%E3%83%97%E3%83%95%E3%83%AD%E3%83%83%E3%83%97(D%2DFF),-D%E3%83%95%E3%83%AA%E3%83%83%E3%83%97%E3%83%95%E3%83%AD%E3%83%83%E3%83%97%E3%81%AF" target="_blank">このサイト</a>がオヌヌメ

[^2]: toneメソッドを使ったほうが柔軟性あるから
本番で一回も使わなかったのであまり必要性を感じていない

[^3]: （前提として、制御基板にあるステッピングモーターは４ステップ区切りの一周120ステップ）回すステップ数ではなく、４ステップのうちどのステップを入力するか
この方が柔軟性が高くて良い