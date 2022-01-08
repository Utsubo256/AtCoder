#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
  int t, total1, total2, total3, total4, total5;
  cin >> t;
  //f(t)
  total1 = pow(t, 2) + 2 * t + 3;
  //f(t) + t
  total2 = total1 + t;
  //f(f(t) + t)
  total3 = pow(total2, 2) + 2 * total2 + 3;
  //f(f(t))
  total4 = pow(total1, 2) + 2 * total1 + 3;
  //f(f(f(t) + t) + f(f(t)))
  total5 = pow((total3 + total4), 2) + 2 * (total3 + total4) + 3;
  cout << total5 << endl;
}
