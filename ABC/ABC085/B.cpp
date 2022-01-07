#include <bits/stdc++.h>
using namespace std;

int main() {    
  int n;
  int d[100];
  cin >> n;
  for (int i = 0; i < n; i++) cin >> d[i];
  
  // バケット
  int num[101] = {0};
  for (int i = 0; i < n; i++) num[d[i]]++;
  
  int counter = 0;
  for (int i = 1; i <= 100; i++) {
    if (num[i] > 0) counter++;
  }
  
  cout << counter << endl;
}
