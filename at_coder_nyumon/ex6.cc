#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int time = 0;
    
    bool flag = true;

    while (true) {
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 1) {
                flag = false;
            } else {
                a[i] /= 2;
                continue;
            }
        }

        if (flag == false) {
            break;
        }
        ++time;
    }
    cout << time << endl;
}

