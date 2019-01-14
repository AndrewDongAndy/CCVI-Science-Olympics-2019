// January 14, 2019
//

/*

*/


#include <bits/stdc++.h>

using namespace std;


int rand_int(int a, int b) {
    return rand() % (b - a + 1) + a;
}

void print_case(int N, int K, int m) {
    cout << N << ' ' << K << '\n';
    for (int i = 0; i < N; i++) {
        cout << rand_int(-m, m);
        if (i != N - 1) cout << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    freopen("DATA22.txt", "w", stdout);


    srand(time(0));

    vector<int> Ns = {2, 5, 10, 20, 100, 1000, 10000, 100000, 100000, 100000};
    vector<int> ms = {5, 10, 30, 100, 200, 500, 1000, 1000, 1000, 1000};
    for (int i = 0; i < 10; i++) {
        int N = Ns[i], m = ms[i];
        int K = (i == 2 ? 0 : rand_int(1, N));
        print_case(N, K, m);
    }


    return 0;
}
