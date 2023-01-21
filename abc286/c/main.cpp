#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

constexpr ll INF = pow(10, 15);

bool isKaibun(string str) {
  int size = str.size();
  rep(i, 0, size / 2) {
    if (str[i] != str[size - 1 - i]) {
      return false;
    }
  }
  return true;
}

int diff(string str) {
  int size = str.size();
  int count = 0;
  rep(i, 0, size / 2) {
    if (str[i] != str[size - 1 - i]) count++;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  ll a, b;
  cin >> a >> b;
  string s;
  cin >> s;

  ll result = INF;

  rep(i, 0, n) {
    ll tmp = diff(s) * b + i * a;
    result = min(result, tmp);
    char head = s[0];
    s = s.substr(1, s.size() - 1) + head;
  }

  cout << result << endl;
}

