#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "AC";
    
    if (s[0] != 'A') { result = "WC"; }
    
    int count = 0;
    int index = 0;
    for (int i = 0; i <= s.size(); ++i) {
        if (i >= 2 && i != s.size() && s[i] == 'C') {
            ++count;
            index =i;
        }
    }
    if (count >= 2 || count == 0) {
        result = "WC";
    }

    for (int i = 1; i <= s.size(); ++i) {
        if (i != index && isupper(s[i])) {
            result = "WC";
        }
    }

    cout << result << endl;
}
