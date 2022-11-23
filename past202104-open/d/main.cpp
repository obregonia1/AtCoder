#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  long long a[n];
  for(auto& ai : a) cin >> ai;
  vector<long long> v(n + 1, 0);
  rep(i, 0, n) {
    v[i + 1] = v[i] + a[i];
  }
  rep(i, 0, n - k + 1) {
    long long result = v[i + k] - v[i];
    cout << result << endl;
  }
}

