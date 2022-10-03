#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  long long n;
  cin >> n;
  int a[300000];
  rep(i, 0, n) cin >> a[i];
  map<int, int> mp;
  long long result = 0;
  rep(j, 0, n) {
    result += j - mp[a[j]];
    mp[a[j]]++;
  }
  
  cout << result << endl;
}
