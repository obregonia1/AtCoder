#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  map<int, vector<int>> to;
  rep(i, 0 ,n) {
    int a, b;
    cin >> a >> b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  set<int> reach;
  queue<int> q;
  q.push(1); reach.insert(1);
  while (!q.empty()) {
    int v = q.front(); q.pop();
    for (int u : to[v]) {
      if (reach.count(u)) continue;
      reach.insert(u);
      q.push(u);
    }
  }
  cout <<(*reach.rbegin()) << endl;
}

