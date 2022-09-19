#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  int result = 0;
  rep(i, 0, n - 1) {
    string a = s.substr(0, i + 1);
    string b = s.substr(i + 1, s.size());
    set<char> sa;
    set<char> sb;
    for (auto ai : a) sa.insert(ai);
    for (auto bi : b) sb.insert(bi);
    int count = 0;
    for (auto ai : sa) {
      if (sb.count(ai)) count++;
    }
    result = max(result, count);
  }
  
  cout << result << endl;
}
