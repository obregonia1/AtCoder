#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  int a[n];
  for(auto& ai : a) cin >> ai;
  int result = 0;
  for(auto& ai : a) result += ai - 1;

  cout << result << endl;
}

