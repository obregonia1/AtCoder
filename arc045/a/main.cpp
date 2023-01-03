#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  vector<string> s;
  while (cin) {
    string si;
    cin >> si;
    s.push_back(si);
  }

  rep(i, 0, s.size() - 1) {
    if (s[i] == "Left") cout << "<";
    if (s[i] == "Right") cout << ">";
    if (s[i] == "AtCoder") cout << "A";
    if (i != s.size() - 2) cout << ' ';
    }
  cout << "\n";
}

