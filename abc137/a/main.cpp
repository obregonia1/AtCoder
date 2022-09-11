#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  
  int result = max({(a + b), (a - b), (a * b)});
  cout << result << endl;
}