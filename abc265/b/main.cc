#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m; long long t;

  cin >> n >> m >> t;

  vector<int> as(n - 1);
  for (int i = 1; i < n; ++i) {
    int a;
    cin >> a;
    as[i - 1] = a;
  }

  vector<int> xy(m);
  for (int i = 1; i < m + 1; ++i) {
    int x, y;
    cin >> x >> y;
    xy[x - 1] = y;
  }

  string result = "Yes";
  
  for (int i = 1; i < n - 1; ++i) {
    t += xy[i];
    t -= as[i];
    
    if (t <= 0) {
      cout << "No" << endl;
      return 0;
    }

  }
  
  cout << result << endl;
}