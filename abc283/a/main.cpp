#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  ll result = 1;
  rep(i, 0, b) result *= a;

  cout << result << endl;
}

