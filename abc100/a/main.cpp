#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  string result;
  if (a <= 8 && b <= 8) result = "Yay!";
  else result = ":(";

  cout << result << endl;
}

