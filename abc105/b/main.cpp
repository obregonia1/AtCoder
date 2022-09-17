#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  string result = "No";
  rep(i, 25) {
    rep(j, 13) {
      if (i * 4 + j * 7 == n) result = "Yes";
    }
  }
  cout << result << endl;
}
