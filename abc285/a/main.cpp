#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  string result = "No";
  if (a == 1) {
    if (b == 2 || b == 3) result = "Yes";
  }
   if (a == 2) {
    if (b == 4 || b == 5) result = "Yes";
  }
   if (a == 3) {
    if (b == 6 || b == 7) result = "Yes";
  }
   if (a == 4) {
    if (b == 8 || b == 9) result = "Yes";
  }
   if (a == 5) {
    if (b == 10 || b == 11) result = "Yes";
  }
   if (a == 6) {
    if (b == 12 || b == 13) result = "Yes";
  }
   if (a == 7) {
    if (b == 14 || b == 15) result = "Yes";
  }

  cout << result << endl;
}

