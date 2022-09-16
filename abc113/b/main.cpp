#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, t, a;
  cin >> n >> t >> a;
  int result = 0;
  double min = 10000;
  rep(i, n) {
    double x;
    cin >> x;
    double diff = abs(t - (x * 0.006) - a);
    if (diff < min) {
      min = diff;
      result = i + 1;
    }
  }

  cout << result << endl;
}
