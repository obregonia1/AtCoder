#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  set<int> se;
  rep(i, 0, n) {
    int a;
    cin >> a;
    int ex = se.erase(a);
    if (!ex) se.insert(a);
  }
  
  cout << se.size() << endl;
}
