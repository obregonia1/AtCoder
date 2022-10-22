#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto& ai : a) cin >> ai;
  vector<int> result(2 * n, 0);
  rep(i, 0, n) {
    result[2 * i] += result[a[i] - 2] + 1;
    result[2 * i + 1] += result[a[i] - 2] + 1;

  }
  cout << 0 << endl;
  for (auto& r : result) {
    cout << r << endl;
  } 
}

