#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, 0, n) {
    int ai;
    cin >> ai;
    a[i] = ai;
  }
  int result = 0;
  rep(i, 0, m) {
    int bi;
    cin >> bi;
    result += a[bi - 1];
  }
  cout << result << endl;
}

