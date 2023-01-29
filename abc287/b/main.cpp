#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for(auto& si : s) cin >> si;

  set<string> ts;
  rep(i, 0, m) {
    string t;
    cin >> t;
    ts.insert(t);
  }

  int result = 0;
  for(auto& si : s) {
    if (ts.count(si.substr(3)) == 1) result++;

  }

  cout << result << endl;
}
