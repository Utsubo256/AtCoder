#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int counter = 0;
  string s;
  cin >> s;
  
  if (s[0] == '1') {
    counter++;
  }
  
  if (s[1] == '1') {
    counter++;
  }
  
  if (s[2] == '1') {
    counter++;
  }
  
  cout << counter << endl;
}
