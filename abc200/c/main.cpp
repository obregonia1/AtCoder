#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int a[n];
  for(auto& ai : a) cin >> ai;
  map<int, int> mp;
  for(auto& ai : a) {
    mp[ai % 200]++; 
  }
  long long result = 0;
  for(auto& mi : mp) {
    result += mi.second * (mi.second - 1) / 2;
  }
  
  cout << result << endl;
}
