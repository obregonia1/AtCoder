#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  map<char, int> ma;
  string s;
  cin >> s;
  for(auto& si : s) ma[si]++;

  rep(i, 1, n) {
    string s;
    cin >> s;
    map<char, int> mai;
    for(auto& si : s) mai[si]++;
    for(auto& m : ma) {
      if (mai[m.first]) ma[m.first] = min(ma[m.first], mai[m.first]);
      else ma[m.first] = 0;
    }
  }
  string result;
  for(auto& m : ma) {
    rep(i, 0, m.second) result.push_back(m.first);
  }
  if (result.size()) cout << result << endl;
  else printf("\n");
}
