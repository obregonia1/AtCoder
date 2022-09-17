#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string o, e;
  cin >> o >> e;
  string result;
  rep(i, e.size()) {
    result += o[i];
    result += e[i];
  }
  if (o.size() > e.size()) result += o[o.size() - 1];
  cout << result << endl;
}
