// January 10, 2019
//

/*

*/


#include <bits/stdc++.h>

using namespace std;


bool taken[20001][20001];

int rand_int(int a, int b) {
    return rand() % (b - a + 1) + a;
}

void init_taken() {
    for (int i = 0; i < 20001; i++) {
        for (int j = 0; j < 20001; j++) {
            taken[i][j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifdef _DEBUG
    freopen("DATA42.txt", "w", stdout);
#endif


    srand(time(0));

    init_taken();
    int N = 2000;
    cout << N << '\n';
    for (int i = 0; i < N; i++) {
        int x, y;
        do {
            x = rand_int(-10000, 10000);
            y = rand_int(-10000, 10000);
        } while (taken[x + 10000][y + 10000]);
        taken[x + 10000][y + 10000] = true;
        cout << x << ' ' << y << '\n';
        if (i != N - 1) cout << ' ';
    }


    return 0;
}
