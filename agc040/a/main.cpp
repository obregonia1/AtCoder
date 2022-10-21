#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  vector<int> a(s.size() + 1);
  rep(i, 0, s.size()) {
    if (s[i] == '<') a[i + 1] = max(a[i + 1], a[i] + 1);
  }
  for(int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '>') a[i] = max(a[i], a[i + 1] + 1);
  }
  long long result = 0;
  for (auto& ai : a) result += ai;
  cout << result << endl;
}

