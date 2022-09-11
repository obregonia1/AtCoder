#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;
  
  vector<string> col(7);
  col[0] = s[6];
  col[1] = s[3];
  col[2] = s[1];
  col[2] += s[7];

  string result = "No";
  string foo = "111";
  // cout << to_string(s[1]) + to_string(s[7]) << endl;
  // cout << int('1' - '0') + int('1' - '0') << endl;
  string a = foo[0];
  a += foo[1];
  cout << col[2] << endl;
}