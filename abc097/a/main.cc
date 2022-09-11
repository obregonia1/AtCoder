#include <iostream>

using namespace std;

int main() {
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  string result = "No";

  if (abs(a - b) <= d && abs(c - b) <= d || abs(a -c) <= d) {
    result = "Yes";
  }

  cout << result << endl;
}