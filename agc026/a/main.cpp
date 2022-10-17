#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto& ai : a) cin >> ai;
  vector<int> b;
  for(int i = 0; i < n;) {
    int k = i;
    int count = 0;
    while (k < n && a[i] == a[k]) {
      count++;
      k++;
    }
    b.push_back(count);
    i = k;
  }
  int result = 0;
  for(auto& bi : b) {
    result += floor(bi / 2);
  }

  cout << result << endl;
}

