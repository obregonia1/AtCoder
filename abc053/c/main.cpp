#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  ll x;
  cin >> x;

  ll y = x / 11 * 2;
  if (x % 11 >= 7) y += 2;
  else if (x % 11 == 0);
  else y++;
  cout << y << endl;
}

