#include <iostream>
using namespace std;
 
int main() {
  int n, num_cake, num_donut;
  bool f_yes = false;
  cin >> n;
  
  num_cake = n / 4;
  num_donut = n / 7;
  
  if (n % 4 == 0 || n % 7 == 0) {
    cout << "Yes" << endl;
  } else {
    //i:ケーキの数、j:ドーナツの数
    for (int i = 0; i <= num_cake; i++) {
      for (int j = 0; j <= num_donut; j++) {
        if (i*4 + j*7 == n) {
          cout << "Yes" << endl;
          f_yes = true;
          break;
        }
      }
      if (f_yes == true) break;
    }
    if (f_yes == false) cout << "No" << endl;
  }
}
