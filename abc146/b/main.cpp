#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  string result = "";
  for (auto& si : s) {
    if (isupper(si + n)) result += si + n;
    else result += si + n - 26;
  }
  cout << result << endl;
}
