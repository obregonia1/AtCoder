#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;

  ll result = 0;
  ll wi = 0;
  for (ll i = 0; i < s.size(); i++) {
    if (s[i] == 'W') {
      result += i - wi;
      wi++;
    }
  }
  cout << result << endl;
}

