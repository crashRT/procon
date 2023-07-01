# AtCoder Beginner Contest 308

https://atcoder.jp/contests/abc308

## memo

### C
浮動小数点数の誤差に注意する。→ 割り算は使わない
`from fractions import Fraction` で有理数が使える
分母を払った状態で比較するのもあり

### D
深さ優先のとき、一度訪れた場所にはいかないようにする
解答例の `seen[i][j] = true;` の部分みたいな感じで