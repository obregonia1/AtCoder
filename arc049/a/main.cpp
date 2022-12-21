#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  s.insert(a, "\"");
  s.insert(b + 1, "\"");
  s.insert(c + 2, "\"");
  s.insert(d + 3, "\"");

  cout << s << endl;
}

