#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  vector<pair<char, int>> chars;
  int count = 1;
  rep(i, 0, s.size()) {
    if (s[i] == s[i + 1]) {
      count++;
    }
    else if (i == s.size()){
      chars.push_back({s[i], count});
    } 
    else {
      chars.push_back({s[i], count});
      count = 1;
    }
  }
  for(auto& c : chars) cout << c.first << c.second;
  printf("\n");
}
