#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> l(n);
  rep(i, n) {
    int li;
    cin >> li;
    l[i] = li;
  }
  sort(l.begin(), l.end(), greater<int>{});
  int result = 0;
  rep(i, k) result += l[i];

  cout << result << endl;
}
