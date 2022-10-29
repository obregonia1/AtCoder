#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  string s;
  cin >> s;
  long long k;
  cin >> k;
  vector<int> v;
  for(int i = 0; i < s.size();) {
    int k = i;
    int count = 1;
    while(k < s.size() && s[k] == s[k + 1]) {
      k++;
      count++;
    }
    v.push_back(count);
    i = k;
    i++;
  }
  long long result = 0;
  if (v.size() == 1) result = s.size() * k / 2;
  else if (s[0] == s[s.size() - 1]) {
    result += v[0] / 2;
    result += v[v.size() - 1] / 2;
    result += (v[0] + v[v.size() - 1]) / 2 * (k - 1);
    rep (i, 1, v.size() - 1) result += v[i] / 2 * k;
  }
  else {
    for(auto& vi : v) result += vi / 2 * k;
  }
  // long long ll = (9 / 2 * 999993333) + (10 / 2 * 999993333);

  cout << result << endl;
}

