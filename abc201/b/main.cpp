#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<pair<int, string>> p(n);
  rep(i, n) cin >> p[i].second >> p[i].first;
  sort(p.begin(), p.end());
  cout << p[p.size() - 2].second << endl;
}
