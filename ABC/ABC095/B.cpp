#include <iostream>
using namespace std;
 
int main() {
  int n, x;
  int m[1000];
  cin >> n >> x;
  for (int i = 0; i < n; i++) cin >> m[i];
  int sum_num = 0, min_num = m[0], remain, total_num;
  for (int i = 0; i < n; i++) {
    sum_num += m[i];
    if (m[i] < min_num) min_num = m[i];
  }
  remain = x - sum_num;
  total_num = n + (remain / min_num);
  
  cout << total_num << endl;
}
