#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for(auto& ai : a) {
    cin >> ai;
  }
  sort(a.begin(), a.end());
  int result = 0;
  int count = 0;
  rep(i, 0, n) {
    if (a.size() - i > count && a[i] == i + 1) {
      result = i + 1;
    }
    else if (a.size() - count - 1 >= 2) {
      result = i + 1;
      count += 2;
    }
    else {
      cout << result << endl;
      return 0;
    }
  }
}