#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> result(n, 0);
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    result[a - 1]++;
    result[b - 1]++;
  }
  for(auto& r : result) cout << r << endl;
}

