#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  for(auto& si : s) cin >> si;
  int f = 0;
  for(auto& si : s) {
    if (si == "For") f++;
  }
  if (f > (n / 2)) cout << "Yes" << endl;
  else cout << "No" << endl;
}

