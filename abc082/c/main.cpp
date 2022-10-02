#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int n;
  cin >> n;
  map<int, int> a;
  rep(i, 0, n) {
    int ai;
    cin >> ai;
    a[ai]++;
  }
  int result = 0;
  for(auto& ai: a) {
    if (ai.first != ai.second) {
      if (ai.second > ai.first) result += ai.second - ai.first;
      else result += ai.second;
    }
  }
  
  cout << result << endl;
}
