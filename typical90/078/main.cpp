#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  map<int, vector<int>> g;
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  int result = 0;
  
  rep(i, 0, m + 1) {
    int count = 0;
    rep(k, 0, g[i + 1].size()) {
      if (g[i + 1][k] < i + 1) count++;
    }
    if (count == 1) result++;
  }

  cout << result << endl;
}

