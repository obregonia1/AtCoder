#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int a[n];
  for(auto& ai : a) cin >> ai;
  int result = 0;
  rep(i, 0, n) rep(j, i + 1, n) {
    if (a[i] != a[j]) result++;
  }
  
  cout << result << endl;
}
