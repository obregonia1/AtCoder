#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, 0, n) {
    ll ai;
    cin >> ai;
    a[i] = ai;
  }

  int q;
  cin >> q;
  rep(i, 0, q) {
    int head;
    cin >> head;
    if (head == 1) {
      int k, x;
      cin >> k >> x;
      a[k - 1] = x;
    }
    if (head == 2) {
      int k;
      cin >> k;
      cout << a[k - 1] << endl;
    }
  }
}

