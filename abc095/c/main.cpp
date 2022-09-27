#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int result = 1e9;
  rep(i, 0, 200001) {
    int price = i * c;
    int xi = floor(x - i / 2);
    int yi = floor(y - i / 2);
    if (xi > 0) price += xi * a;
    if (yi > 0) price += yi * b;
    result = min(result, price);
  }
     
  cout << result << endl;
}
