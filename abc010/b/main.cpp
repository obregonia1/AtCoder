#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto& ai : a) cin >> ai;
  int result = 0;
  for(auto& ai : a) {
    if (ai == 6) result += 3;
    if (ai == 5) result += 2;
    if (ai == 8 || ai == 4 || ai == 2) result++;
  }

  cout << result << endl;
}

