#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  long long n, d;
  cin >> n >> d;
  int count = 0;
  rep(i, n) {
    long long x, y;
    cin >> x >> y;
    if (x * x + y * y <= d * d) count++;
  }

  cout << count << endl;
}
