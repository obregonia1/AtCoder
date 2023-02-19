#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(auto& ai : a) cin >> ai;
  map<int, bool> b;
  for(auto& ai : a) {
    b[ai] = true;
  }
  int result = 0;
  rep(i, 0, k) {
    if(b[i]) result++;
    else break;
  }

  cout << result << endl;
}

