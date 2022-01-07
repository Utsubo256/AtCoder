#include <bits/stdc++.h>
using namespace std;

int main() {    
  int n, y;
  cin >> n >> y;
  
  int c, total, bill10000 = -1, bill5000 = -1, bill1000 = -1;
  for (int a = 0; a <= n; a++) {
    for (int b = 0; b <= n - a; b++) {
      c = n - a - b;
      total = 10000*a + 5000*b + 1000*c;
      if (total == y) {
        bill10000 = a;
        bill5000 = b;
        bill1000 = c;
        break;
      }
    }
  }
  
  cout << bill10000 << " " << bill5000 << " " << bill1000 << endl;
}
