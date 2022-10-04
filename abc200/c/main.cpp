#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int a[201010];
  rep(i, 0, n) cin >> a[i];
  int count[202];
  long long result = 0;
  rep(i, 0, n) {
    int mo = a[i] % 200;
    result += count[mo];
    count[mo]++;
  }
  
  cout << result << endl;
}
