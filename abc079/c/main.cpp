#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string n;
  cin >> n;
  int a = int(n[0] - '0');
  int b = int(n[1] - '0');
  int c = int(n[2] - '0');
  int d = int(n[3] - '0');
  rep(i, 0, 2) rep(j, 0, 2) rep(k, 0, 2) {
    char bo = '+';
    char co = '+';
    char dop = '+';
    int bi = b;
    int ci = c;
    int di = d;
    if (k == 0) {
      di = d * -1;
      dop = '-';
    }
    if (j == 0) {
      ci = c * -1;
      co = '-';
    }
    if (i == 0) {
       bi = b * -1;
       bo = '-';
    }
    if (a + bi + ci + di == 7) {
      cout << to_string(a) + bo + to_string(b) + co + to_string(c) + dop + to_string(d) + "=7" << endl;;
      return 1;
    }
  }
}
