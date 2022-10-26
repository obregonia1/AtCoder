#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int result = 0;
  int a[n];
  for(auto& ai : a) cin >> ai;
  for (int i = 0; i < n;) {
    if (a[i] < a[i + 1]) {
      int j = i;
      while (a[j] <= a[j + 1] && j < n) {
        j++;
      }
      result++;
      i = j + 1;
    }
    else if (a[i] > a[i + 1]){
      int j = i;
      while (a[j] >= a[j + 1] && j < n) {
        j++;
      }
      result++;
      i = j + 1;
    }
    else 
      i++;
  }
  cout << result << endl;
}

