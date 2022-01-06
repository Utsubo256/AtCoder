#include <bits/stdc++.h>
using namespace std;
int main(){
  int l, r;
  cin >> l >> r;
  
  string s, first_s, mid_s, last_s, reb_s;
  cin >> s;
  
  mid_s = s.substr(l-1, r-l+1);
  reb_s = string(mid_s.rbegin(), mid_s.rend());
  
  if (l == 0) {
    first_s == "";
  } else {
    first_s = s.substr(0, l-1);
  }
  
  if (r == s.size()) {
    last_s = "";
  } else {
    last_s = s.substr(r, s.size()-r);
  }
  
  cout << first_s << reb_s << last_s << endl;
}
