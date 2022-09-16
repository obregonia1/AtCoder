#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int hi = 0;
  int count = 0;
  rep(i, n) {
    int h;
    cin >> h;
    if (h >= hi) count++;
    hi = max(hi, h);
  }
  cout << count << endl;
}
