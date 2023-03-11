#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  set<int> s;
  rep(i, 0, n) {
    int a;
    cin >> a;
    if (s.count(i + 1) == 0) s.insert(a);
  }
  int count = 0;
  vector<int> r;
  rep(i, 0, n) {
    if (s.count(i + 1) == 0) {
      count++;
      r.push_back(i + 1);
    }
  }

  cout << count << endl;
  for(auto& ri : r) cout << ri << ' ';
}

