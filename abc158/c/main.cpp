#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  string result = "-1";
  vector<int> x;
  int start = floor(a / 0.08);
  int end = floor((a + 1) / 0.08);
  // cout << start << endl;
  // cout << end << endl;
  for(int i = start; i <= 100; ++i) {
    if (floor(i * 0.08) >= (a + 1) || floor(i * 0.1) >= (b + 1)) {
      cout << "-1" << endl;
      return 0;
    }
    if (floor(i * 0.1) == b) {
      cout << i << endl;
      return 0;
    }
  }
  cout << result << endl;
  // cout << floor(3 / 0.08) << endl;
}
