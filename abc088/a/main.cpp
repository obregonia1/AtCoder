#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, a;
  cin >> n >> a;
  string result = "No";
  int mod = n % 500;
  if (mod <= a) result = "Yes";

  cout << result << endl;
}
