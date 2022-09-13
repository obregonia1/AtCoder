#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int is_kaibun(int n) {
  vector<int> nums;
  while (n > 0) {
    nums.push_back(n % 10);
    n /= 10;
  }
  if (nums[0] == nums[4] && nums[1] == nums[3]) return true;
  else return false;
}

int main() {
  int a, b;
  cin >> a >> b;
  int count = 0;
  for (int i = a; i <= b; ++i) {
    if (is_kaibun(i)) count++;
  }
  cout << count << endl;
}
