#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<string> s;
  rep(i, 0, k) {
    string si;
    cin >> si;
    s.push_back(si);
  }
  sort(s.begin(), s.end());
  rep(i, 0, k) {
    cout << s[i] << endl;
  }
}

