#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  string result = "IMPOSSIBLE";
  vector<vector<int>> abs(m);
  for(auto& ab : abs) {
    int a, b;
    cin >> a >> b;
    ab.push_back(a);
    ab.push_back(b);
  }
  
  vector<int> c;
  set<int> s;
  for(auto& ab : abs) {
    rep(i, 0, 2) {
      if(ab[i] == 1 || ab[i] == n) {
        c.push_back(ab[i ? 0 : 1]);
        s.insert(ab[i ? 0 : 1]);
      }
    }
  }
  if (c.size() != s.size()) result = "POSSIBLE";

  cout << result << endl;
}

