#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (auto& ai : a) {
    cin >> ai;
  }

  int num_minus;

  long long sum_abs = 0;
  long long min_abs = 1LL << 60;

  rep(i, n) {
    if (a[i] < 0) {
      ++num_minus;
    }
    sum_abs += abs(a[i]);
    min_abs = min(min_abs, abs(a[i]));
  }

  if (num_minus % 2 == 0) {
    cout << sum_abs << endl;
  }
  else {
    cout << sum_abs - min_abs * 2 << endl;
  }
}