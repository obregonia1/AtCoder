#include <iostream>
#include <vector>

using namespace std;

int m = 101;

int main() {
  int n;
  cin >> n;

  vector<int> exist(m, 0);

  for (int i = 0; i < n; ++i) {
    int d;
    cin >> d;

    exist[d] = 1;
  }

  int result = 0;
  for (auto val : exist) {
    result += val;
  }

  cout << result << endl;
}