#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b;
  string s;
  cin >> a >> b >> s;
  string result = "Yes";
  rep(i, s.size()) {
    if (i == a) {
      if (s[i] != '-') result = "No"; 
    }
    else if (s[i] == '-') result = "No";
  }
  cout << result << endl;
}
