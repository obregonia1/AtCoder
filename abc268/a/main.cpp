#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  set<int> st = {a, b, c, d, e};
  
  int result = 0;

  for (auto s : st) {
    ++result;
  }

  cout << result << endl;
}