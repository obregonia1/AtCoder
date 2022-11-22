#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int h, m;
  cin >> h >> m;
  while (true) {
    if (h <= 5 || (h >= 10 && h < 16) || (h >= 20 && h < 24 && m < 40)) {
      cout << h << ' ' << m << endl;
      break;
    }
    if (m != 59) m++;
    else {
      m = 0;
      if (h != 23) h++;
      else h = 0;
    }
  }
}

