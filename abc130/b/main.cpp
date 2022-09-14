#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, x;
  cin >> n >> x;
  int count = 0;
  int position = 0;
  rep(i, n) {
    int l;
    cin >> l;
    if (position <= x) count++;
    position += l;
  }

  cout << count << endl;
}
