#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  ll a[n];
  for(auto& ai : a) cin >> ai;
  int result = 0;
  for(auto& ai : a) {
    while (ai % 2 == 0) {
      result++;
      ai /= 2;
    }
  }

  cout << result << endl;
}

