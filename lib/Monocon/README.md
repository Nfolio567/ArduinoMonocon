# Library for ものづくりコンテスト(神奈川県大会）

> # What is this

ものコンで組むプログラムをもっと簡潔に、もっと効率よく書きたいから作りました。

社内ライブラリ的なニュアンスなので2025年度ものコンでは動きますが、それ以降は知らん。

> # How to use

## インスタンス化

```cpp
Actuator actuator(clockPin, buzzerPin, segmentPin, segmentVcc, motorPin, stMotor);
```

## 各引数の説明
- clockPin: 出力基板のフリップフロップIC[^1]に入れるクロック。
- buzzerPin: 