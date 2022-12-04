#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  int result = 0;
  rep(i, 0, h) {
    string s;
    cin >> s;
    for(auto& si : s) {
      if (si == '#') result++;
    }
  }

  cout << result << endl;
}

