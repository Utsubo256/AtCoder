#include <iostream>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  int start_A, end_Z;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A') {
      start_A = i;
      break;
    }
  }
  for (int i = s.size()-1; i >= 0; i--) {
    if (s[i] == 'Z') {
      end_Z = i;
      break;
    }
  }
  cout << end_Z - start_A + 1 << endl;
}
