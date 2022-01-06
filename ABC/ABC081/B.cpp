#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  int A[200];
  cin >> n;
  
  for (int i = 0; i < n; i++) cin >> A[i];
  
  int counter = 0;
  bool flag = false;
    
  while (true) {
    if (flag == true) break;
    
    for (int i = 0; i < n; i++) {
      if (A[i] % 2 == 1) flag = true;
    }
    
    if (flag == true) break;
    
    for (int i = 0; i < n; i++) {
      A[i] /= 2;
    }
    
    counter++;
  }
  cout << counter << endl;
}
