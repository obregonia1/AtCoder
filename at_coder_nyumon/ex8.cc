#include <iostream>

using namespace std;

bool isAC(string s) {
    if (s[0] != 'A') { return false; }

    int count = 0;
    int index = 0;
    for (int i = 2; i +1 < s.size(); ++i) {
        if (i >= 2 && i != s.size() && s[i] == 'C') {
            ++count;
        }
    }
    if (count != 1) {
        return false;
    }

    int num_big = 0;
    for (auto c : s) {
        if (isupper(c)) {
            ++num_big;
        }
    }
    if (num_big != 2) { return false; }

    return true;
}

int main() {
    string s;
    cin >> s;

    if (isAC(s)) { cout << "AC" << endl; }
    else { cout << "WA" << endl; }
}
