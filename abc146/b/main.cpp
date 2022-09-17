#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  string result = "";
  for (auto& si : s) {
    int x = si - 'A';
    x = (x + n) % 26;
    result += 'A' + x;
  }
  cout << result << endl;
}
