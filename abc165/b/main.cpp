#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  long long x;
  cin >> x;
  int result = 0;
  long long money = 100;
  while (money < x) {
    money += money / 100;
    result++;
  }

  cout << result << endl;
}
