#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(w);
  rep(i, 0, h) {
    string r;
    cin >> r;
    rep(k, 0, w) {
      s[k] += r[k];
    }
  } 

  vector<string> t(w);
  rep(i, 0, h) {
    string r;
    cin >> r;
    rep(k, 0, w) {
      t[k] += r[k];
    }
  } 

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  string result = "Yes";
  rep(i, 0, w) {
    if(s[i] != t[i]) result = "No";
  }

  // set<int> ti;
  // rep(i, 0, w) {
  //   bool flag = false;
  //   rep(k, 0, w) {
  //     if(s[i] == t[k] && ti.count(k) == 0) {
  //       ti.insert(k);
  //       flag = true;
  //       break;
  //     }
  //   }
  //   if (flag == false) {
  //     cout << "No" << endl;
  //     return 0;
  //   }
  // }

  // cout << "Yes" << endl;
  cout << result << endl;
}

