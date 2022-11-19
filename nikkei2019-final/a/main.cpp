#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  long long a[n];
  for(auto& ai : a) cin >> ai;
  vector<long long> v(n + 1, 0);
  rep(i, 0, n + 1) {
    v[i + 1] = v[i] + a[i]; 
  }

  for(int i = 1; i <= n; i++) {
    long long result = 0;
    for(int k = 0; k + i <= n; k++) {
      result = max(result, v[k + i] - v[k]);
    }
    cout << result << endl;
  }
}

