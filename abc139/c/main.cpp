#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int h[n];
  for(auto& hi : h) cin >> hi;
  int result = 0;
  int count = 0;
  rep(i, 0, n - 1) {
    if (h[i + 1] <= h[i]) count++;
    else count = 0;
    result = max(result, count);
  }
  cout << result << endl;
}
