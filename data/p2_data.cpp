// January 10, 2019
//

/*

*/


#include <bits/stdc++.h>

using namespace std;


int rand_int(int a, int b) {
    return rand() % (b - a + 1) + a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifdef _DEBUG
    freopen("DATA22.txt", "w", stdout);
#endif


    srand(time(0));

    vector<int> sizes = {2, 5, 10, 20, 100, 1000, 10000, 100000, 100000, 100000};
    for (int i = 0; i < 5; i++) {
        int N = sizes[i], K = rand_int(0, N);
        cout << N << ' ' << K << '\n';
        for (int j = 0; j < N; j++) {
            cout << rand_int(0, 1000);
            if (j != N - 1) cout << ' ';
        }
        cout << '\n';
    }
    for (int i = 5; i < 10; i++) {
        int N = sizes[i], K = rand_int(0, N);
        cout << N << ' ' << K << '\n';
        for (int j = 0; j < N; j++) {
            cout << rand_int(-1000, 1000);
            if (j != N - 1) cout << ' ';
        }
        cout << '\n';
    }


    return 0;
}
