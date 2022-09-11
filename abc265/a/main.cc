#include <iostream>

using namespace std;

int main() {
  int x, y ,n;

  cin >> x >> y >> n;

  int result = x * n;

  if (3 * x > y) {
    result = (n / 3 * y) + (n % 3 * x);
  }

  cout << result << endl;
}