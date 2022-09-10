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

  vector<int> h(n);
  rep(i, n) h[i] = i;

  vector<int> p(n);

  rep(i, n) {
    cin >> p[i];
  }

  int result = 0;
  int count = 0;
  rep(i, n) {
    for (auto hi : h) hi += i;
    for (auto pi : p) {
      int index = findIndex(h, pi);
      if (pi == 0) ++count;
      else if (((index - 1) % pi == 0) || ((index + 1) % pi == 0) || index == pi) ++count;
    }
    result = max(result, count);
    count = 0;
  }
  cout << result << endl;
}