#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  string result;
  if (a % 2 != 0 && b % 2 != 0) result = "Yes";
  else result = "No";

  cout << result << endl;
}

