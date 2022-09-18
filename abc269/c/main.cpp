#include <bits/stdc++.h>
using namespace std;
#define rep(i,a, b) for (int i = a; i < (b); ++i)
using ll = long long;

int main() {
  ll n;
  cin >> n;
  vector<ll> ans;
  for(ll s = n;; s = (s - 1)&n) {
    cout << s << endl;
    ans.push_back(s);
    if (s == 0) break;
  }
  reverse(ans.begin(), ans.end());
  for (ll s : ans) cout << s << endl;
}