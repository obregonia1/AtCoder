#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  ll k;
  cin >> k;
  vector<int> a(n), b(n);
  rep(i, 0, n) {
    int ai;
    cin >> ai;
    a[i] = ai;
  }
  rep(i, 0, n) {
    int bi;
    cin >> bi;
    b[i] = bi;
  }
  int diff = 0;
  rep(i, 0, n) {
    diff += abs(a[i] - b[i]);
  }
  if (diff <= k && (diff % 2 == k % 2)) cout << "Yes" << endl;
  else cout << "No" << endl;
}

