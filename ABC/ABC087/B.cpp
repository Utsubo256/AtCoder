#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x, total, counter = 0;

  cin >> a >> b >> c >> x;
  
  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      for (int k = 0; k <= c; k++) {
        total = 500*i + 100*j + 50*k;
        if (total == x) counter++;
      }
    }
  }

  cout << counter << endl;
}
