#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  ll n;
  cin >> n;
  ll result = 0;
  if (n >= 1000) result += n - 999;
  if (n >= 1000000) result += n - 999999;
  if (n >= 1000000000) result += n - 999999999;
  if (n >= 1000000000000) result += n - 999999999999;
  if (n >= 1000000000000000) result += n - 999999999999999;
  cout << result << endl;
}

