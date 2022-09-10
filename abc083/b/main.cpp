#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); ++i)

int calc_sum_digits(int n){
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int sum = 0; 
  rep(i, n) {
    if (calc_sum_digits(i) >= a && calc_sum_digits(i) <= b) sum += i;
  }
  cout << sum << endl;
}