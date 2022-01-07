#include <bits/stdc++.h>
using namespace std;

int main() {    
  int n, Alice = 0, Bob = 0;
  int a[100];
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  
  sort(a, a + n, greater<int>());
  
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      Alice += a[i];
    } else {
      Bob += a[i];
    }
  }
  
  cout << Alice - Bob << endl;
}
