#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, counter = 0;
  cin >> n;
  bool flag = false;
    
  while (true) {
    if (flag == true) break;
    if (n >= 2) {
      n/= 2;
    } else {
      flag = true;
    }
    if (flag == true) break;
    counter++;
  }
    
  cout << pow(2, counter) << endl;
}
