#include <bits/stdc++.h>   //取り敢えず書く
using namespace std;      //取り敢えず書く
int main(){               //取り敢えず書く
    int a, b, c;
    cin >> a >> b >> c;
    if (a<b) {
        if(b<c) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }
}

//if (a<b<c) {} とかはだめ
//(a < b) < c って書いてるのと同じで、a < b の部分を、 a < b の値を計算した結果 ( 0 か 1)  で置き換えて 0 < c などを計算する仕組みです 