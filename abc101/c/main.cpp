#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  int a[n];
  for(auto& ai : a) cin >> ai;
  int result = 0;
  
  while (true) {
    n -= k;
    result++;
    if (n <= 0) {
      cout << result << endl;
      return 0;
    }
    n++;
  }
}

