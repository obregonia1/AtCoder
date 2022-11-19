#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int cs[100009], ps[100009];
  rep(i, 1, n + 1) cin >> cs[i] >> ps[i];

  int q;
  cin >> q;
  int ls[100009], rs[100009];
  rep(i, 1, q + 1) cin >> ls[i] >> rs[i];

  int sum1[100009];
  int sum2[100009];
  rep(i, 1, n + 1) {
    sum1[i] = sum1[i - 1];
    sum2[i] = sum2[i - 1];
    if (cs[i] == 1) sum1[i] += ps[i];
    if (cs[i] == 2) sum2[i] += ps[i];
  }

  rep(i, 1, q + 1) {
    int a1 = sum1[rs[i]] - sum1[ls[i] - 1];
    int a2 = sum2[rs[i]] - sum2[ls[i] - 1];
    cout << a1 << ' ' << a2 << endl;
  }
}

