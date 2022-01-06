#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, a, remain;
  cin >> n >> a;
  remain = n % 500;
  
  if (remain <= a) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
