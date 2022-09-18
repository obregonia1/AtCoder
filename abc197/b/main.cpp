#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<string> s(h);
  for (auto& si : s) cin >> si;
  int result = -3;
  for (int i = x - 1; i < h && s[i][y - 1] != '#'; i++) result++;
  for (int i = x - 1; i >= 0 && s[i][y - 1] != '#'; i--) result++;
  for (int j  = y - 1; j < w && s[x - 1][j] != '#'; j++) result++;
  for (int j = y - 1; j >= 0 && s[x - 1][j] != '#'; j--) result++;
  cout << result << endl;
}
