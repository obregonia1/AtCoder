#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  map<string, int> s;
  rep(i, 0, n) {
   string si;
   cin >> si;
   s[si]++;
  }
  int ma = 0;
  for(auto& si : s) {
    ma = max(ma, si.second);
  }
  vector<string> vec;
  
  for(auto& si : s) {
    if (si.second == ma) vec.push_back(si.first);
  }
  for (auto& vi : vec) cout << vi << endl;
}
