#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> as(n);
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    as[a - 1].push_back(b);
    as[b - 1].push_back(a);
  }
  rep(i, 0, n) {
    cout << size(as[i]);
    sort(as[i].begin(), as[i].end());
    for(int a : as[i]) {
      cout << ' ' << a;
    }
    cout << "\n";
  }
}

