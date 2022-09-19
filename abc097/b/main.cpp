#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int result = 1;
  rep(i, 2, n) {
    int x = i * i;
    while (x <= n) {
      result = max(result, x);
      x *= i;
    }
  }
  
  cout << result << endl;
}
