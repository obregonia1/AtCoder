#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> h(n + 2);
  rep(i, 0, n) cin >> h[i + 1];
  int result = 0;
  rep(i, 0, n + 1) result += abs(h[i + 1] - h[i]);
  
  cout << result / 2 << endl;
}

