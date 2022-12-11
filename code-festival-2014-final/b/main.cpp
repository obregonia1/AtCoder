#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string n;
  cin >> n;
  int result = 0;
  rep(i, 0, n.size()) {
    if (i % 2 == 0) result += (n[i] - '0');
    else result -= (n[i] - '0');
  }
  cout << result << endl;
}
