#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a;
  rep(i, 0, n) {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }
  rep(i, 0, k) {
    a.erase(a.begin());
    a.push_back(0);
  }

  for(auto& ai : a) cout << ai << ' ';

}

