#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  int h[n];
  for(auto& hi : h) cin >> hi;
  vector<int> result(n, 1);
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    if (h[a - 1] >= h[b - 1]) result[b - 1] = 0; 
    if (h[a - 1] <= h[b - 1]) result[a - 1] = 0; 
  }
  int res = 0;
  for(auto& r : result) res += r;
  cout << res << endl;
}

