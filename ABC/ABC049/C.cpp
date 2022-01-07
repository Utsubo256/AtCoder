#include <bits/stdc++.h>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string s;
  cin >> s;
  
  // 入力文字列sを反転させる
  reverse(s.begin(), s.end());
  // 配列divideの各要素の文字列を反転させる
  for (int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());
  
  // 左端からdivideの要素で切れるか確認していく
  bool f_all_ok = true;
  for (int i = 0; i < s.size();) {
    bool f_has_divide_element = false;
    for (int j = 0; j < 4; j++) {
      if (s.substr(i, divide[j].size()) == divide[j]) {
        i += divide[j].size();
        f_has_divide_element = true;
      }
    }
    if (f_has_divide_element == false) {
      f_all_ok = false;
      break;
    }
  }
  
  if (f_all_ok == true) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
