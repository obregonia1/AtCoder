#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  ll a, b;
  cin >> a >> b;
  
  if (a > 0) cout << "Positive" << endl;
  else if (b < 0) {
    if ((b - a) % 2 == 0) cout << "Negative" << endl;
    else cout << "Positive" << endl;
  }
  else cout << "Zero" << endl;
}

