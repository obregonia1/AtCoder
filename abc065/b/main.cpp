#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  map<int, int> a;
  rep(i, 0, n) {
    int ai;
    cin >> ai;
    a[i + 1] = ai;
  }

  int count = 0;
  int now = 1;
  rep(i, 1, n + 1) {
    now = a[now];
    count++;
    if (now == 2) {
      cout << count << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}

