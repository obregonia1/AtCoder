#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  int digits = 0;
  int size = s.size();
  ll result = 0;
  rep(i, 0, size) {
    ll add = pow(26, digits) * (s[size - i - 1] - 'A' + 1);
    result += add;
    digits++;
  }
  cout << result << endl;
}

