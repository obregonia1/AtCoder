#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i <= (b); ++i)

int main() {
  int k, s;
  cin >> k >> s;
  int result = 0;
  // rep(i, 0, k) rep(j, 0, k) rep(l, 0, k) {
  //   if (i + j + l == s) result++;
  // }
  rep(i, 0, k) rep(j, 0, k) {
    int l = s - i -  j;
    if (l <= k && l >= 0) result++;
  } 
  cout << result << endl;
}
