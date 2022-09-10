#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;

  int index = 0;
  string result = "Yes";
  for (auto si : s) {
    if (si != t[index]) {
      result = "No";
    }
    ++index;
  }
  cout << result << endl;
}