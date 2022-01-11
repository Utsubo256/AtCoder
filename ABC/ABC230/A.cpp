#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  if (n <= 9) cout << "AGC00" << n << endl;
  else if ( n >= 42) cout << "AGC0" << n + 1 << endl;
  else cout << "AGC0" << n << endl;
}
