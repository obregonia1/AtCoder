#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); ++i)

int main() {
  int n;
  cin >> n;
  string result = "No";
  rep(i, 9) {
    rep(j, 9) {
      if ((i * j) == n) result = "Yes";
    }
  }
  cout << result << endl;
}
