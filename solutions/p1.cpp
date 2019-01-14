// January 14, 2019
//

/*
*/


#include <bits/stdc++.h>

using namespace std;


void run() {
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += s[i] - '0';
    }
    if (s[0] - '0' >= 5 && sum < 18) {
        cout << "So cute!\n";
    }
    else {
        cout << "Sorry\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("DATA11.txt", "r", stdin);


    int TC = 10;
    while (TC--) {
        run();
    }


    return 0;
}
