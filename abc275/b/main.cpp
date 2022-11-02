#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  const int p = 998244353;
  vector<long long> a(6);
  rep(i, 0, 6) {
    cin >> a[i];
    a[i] %= p;
  }
  
  long long abc = (a[0] * a[1] % p) * a[2] % p;
  long long def = (a[3] * a[4] % p) * a[5] % p;
  long long result = (abc - def + p) % p;
  cout << result << endl;
}

