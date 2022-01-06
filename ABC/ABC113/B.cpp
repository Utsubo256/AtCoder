#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, a, best_place_index;
  double best_degree;
  int H[1000];
  
  cin >> n >> t >> a;
  
  for (int i = 0; i < n; i++) {
    cin >> H[i];
  }
  
  best_degree = abs(a - (t - H[0] * 0.006));
  best_place_index = 0;
  
  for (int i = 1; i < n; i++) {
    if (abs(a - (t - H[i] * 0.006)) < best_degree) {
      best_degree = abs(a - (t - H[i] * 0.006));
      best_place_index = i;
    }
  }
  
  cout << best_place_index + 1 << endl;
}
