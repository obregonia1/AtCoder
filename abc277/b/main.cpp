#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  for(auto& si : s) cin >> si;
  int flag = 1;
  set<string> se;
  for(auto& si : s) {
    if (si[0] != 'H' && si[0] != 'D' && si[0] != 'C' && si[0] != 'S') flag = 0;
    if (si[1] != 'A' && si[1] != '2' && si[1] != '3' && si[1] != '4' && si[1] != '5' && si[1] != '6' && si[1] != '7' && si[1] != '8' && si[1] != '9' && si[1] != 'T' && si[1] != 'J' && si[1] != 'Q' && si[1] != 'K') flag = 0;
    se.insert(si);
  }
  if (se.size() != n) flag = 0;
  
  string result = flag ? "Yes" : "No";
  cout << result << endl;
}

