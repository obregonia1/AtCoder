#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int findIndex(vector<int> arr, int item) {
        vector<int>::iterator itr;
        itr = find(arr.begin(), arr.end(), item);
        if (itr == arr.end()) cout << "search failed" << endl;
        const int wanted_index = distance(arr.begin(), itr);
        return wanted_index;
}

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  vector<int> cnt(n);
  rep(i, n) {
    int j = (p[i] - i + n) % n;
    rep(k, 3) cnt[(j + k) % n]++;
  }
  int ans = 0;
  rep(i, n) ans = max(ans, cnt[i]);
  cout << ans << endl;
  return 0;
}