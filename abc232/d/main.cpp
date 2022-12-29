#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, 0, h) cin >> s[i];

  vector dp(h, vector<int>(w, 0));
  for(int i = h - 1; i >= 0; i--) {
    for(int j = w - 1; j >= 0; j--) {
      if (s[i][j] == '#') continue;
      dp[i][j] = 1;
      if (i + 1 < h) dp[i][j] = max(dp[i][j], dp[i + 1][j] + 1);
      if (j + 1 < w) dp[i][j] = max(dp[i][j], dp[i][j + 1] + 1); 
    }
  }
  cout << dp[0][0] << endl;
}

