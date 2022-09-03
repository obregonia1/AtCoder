#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;
  vector<string> wdays = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

  int index = 0;
  for (int i = 0; i < 5; ++i) {
    if (wdays[i] == s) index = i;
  }

  cout << 5 - index << endl;
}