# ライブラリの取り込み方

**まず最初にzipをダウンロード↓**

[Monocon.zip](https://github.com/Nfolio567/ArduinoMonocon/releases/download/v1.2.0/Monocon.zip) 

> # Arduino IDE

IDEに取り込む方法は各バージョン、OSによって違うので各自調べてください。

ただzipを取り込むということは、すべて共通です。

> # PlatformIO(VSCode, CLion etc...)

1. zipを解凍
   
   各々解凍ツールなんでもいいから使って解凍してね

2. libディレクトリの中に移動
   
   CLionだけか知らないが、libに移動させただけじゃ#includeで認識されないと思うので、↓の方法でプロジェクトを再ロードしてください。
   
   ツール → PlatformIO → PlatformIO プロジェクトの再ロード


