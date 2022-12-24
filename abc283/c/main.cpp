#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  ll index = 0;
  ll result = 0;
  while (s[index]) {
    if (s[index] == '0' && s[index + 1] == '0') {
      index += 2;
      result++;
    }
    else {
      index++;
      result++;
    }
  }
  cout << result << endl;
}

