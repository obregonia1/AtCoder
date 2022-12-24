#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  const int now = 735369;
  int y, m, d;
  cin >> y >> m >> d;
  if (m == 1 || m == 2) {
    y--;
    m += 12;
  }
  int old = 365 * y + (y / 4) - (y / 100) + (y / 400) + ((306 * (m + 1)) / 10) + d - 429;
  
  cout << now - old << endl;
}

