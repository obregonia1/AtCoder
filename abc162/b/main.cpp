#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); ++i)

int main() {
  int n;
  cin >> n;
  long long result = 0;
  rep(i, n) {
    if (i % 3 != 0 && i % 5 != 0) result += i;
  }

  cout << result << endl;
}
