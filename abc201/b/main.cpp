#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> t(n);
  rep(i, n) {
    string si;
    int ti;
    cin >> si >> ti;
    s[i] = si;
    t[i] = ti;
  } 
  vector<int> tcopy(n);
  copy(t.begin(), t.end(), back_inserter(tcopy));
  sort(tcopy.begin(), tcopy.end(), greater<int>());
  int hi = tcopy[1];
  int index = 0;
  rep(i, n) {
    if (t[i] == hi) index = i;
  }

  cout << s[index] << endl;
}
