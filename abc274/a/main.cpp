#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < (b); ++i)

int main() {
  double a, b;
  cin >> a >> b;
  double result = (b / a) * pow(10, 3);
  result = round(result);
  result /= pow(10, 3);
  
  printf("%03.3f", result);
  printf("\n");
  // cout << setprecision(4) << result << endl;
  // cout << result << endl;
}

