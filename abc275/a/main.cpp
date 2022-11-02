#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int h[n];
  for (auto& hi : h) cin >> hi;
  int result = 0;
  int temp = 0;
  rep(i, 0, n) {
    if (temp <= h[i]) {
      temp = h[i];
      result = i;
    }
  }

  cout << result + 1 << endl;
}

