#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, min, max;
  int A[100];
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  
  min = A[0];
  max = A[0];
  
  for (int i = 1; i < n; i++) {
    if (min > A[i]) {
      min = A[i];
    } else if (max < A[i]) {
      max = A[i];
    }
  }
  cout << max - min << endl;
}
