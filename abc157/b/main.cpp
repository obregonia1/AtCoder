#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  vector<vector<int>> a(3, vector<int>(3));
  rep(i, 0, 3) rep(j, 0, 3) {
    cin >> a.at(i).at(j);
  }
  int n;
  cin >> n;
  vector<int> b(n);
  for (auto& bi : b) cin >> bi;
  rep(i, 0, 3) rep(j, 0, 3) {
    for (auto& bi : b) if (bi == a[i][j]) a[i][j] = 0;
  }
  string result = "No";
  rep(i, 0, 3) {
    if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0) result = "Yes";
    if (a[0][i] == 0 && a[1][i] == 0 && a[2][i] == 0) result = "Yes";
  
  }
  if (a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0) result = "Yes";
  if (a[2][0] == 0 && a[1][1] == 0 && a[2][0] == 0) result = "Yes";
  
  cout << result << endl;
}