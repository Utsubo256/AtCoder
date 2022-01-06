#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, y, remain;
  cin >> x >> y;
  
  remain = y - x;
  
  if (remain < 0) {
    cout << 0 << endl;
  } else if (remain % 10 > 0) {
    cout << remain / 10 + 1 << endl;
  } else {
    cout << remain / 10 << endl;
  }
}
