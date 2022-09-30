#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  set<string> se;
  rep(i, 0, n) {
    string str;
    cin >> str;
    se.insert(str);
  }
  
  cout << se.size() << endl;
}
