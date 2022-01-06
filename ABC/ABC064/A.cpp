#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string r, g, b, str_num;
  int int_num;
  cin >> r >> g >> b;
  
  str_num = r + g + b;
  int_num = stoi(str_num);
  
  if (int_num % 4 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
