// January 14, 2019
//

/*
Test case generator
*/


#include <bits/stdc++.h>

using namespace std;


class test_case {
public:
    int N;
    vector<int> a;
    long long answer;

    static int rand_int(int a, int b) {
        return rand() % (b - a + 1) + a;
    }

    test_case() {
        answer = 0;
    }

    test_case(int _N) : N(_N) {
        a.resize(N);
        for (int i = 0; i < N; i++) {
            a[i] = rand_int(0, 180);
        }
        answer = solve();
    }

    test_case(const vector<int> _a) : a(_a) {
        N = (int) a.size();
        answer = solve();
    }

    void print() {
        cout << N << '\n';
        for (int i = 0; i < N; i++) {
            cout << a[i];
            if (i != N - 1) cout << ' ';
        }
        cout << '\n';
    }

    long long solve() {
        vector< vector<long long> > dp(N + 1, vector<long long>(360));
        dp[0][0] = 1;
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < 360; j++) {
                int x = (j - a[i - 1] + 360) % 360; // run clockwise
                int y = (j + a[i - 1]) % 360; // run counterclockwise
                dp[i][j] = dp[i - 1][x] + dp[i - 1][y];
            }
        }
        return dp[N][180];
    }
};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    freopen("DATA41.txt", "w", stdout);
    ofstream ans_file("ANSWERS41.txt");

    srand(time(0));


    const int MAX_ZEROS = 2; // max number of zeros in answers

    test_case c1({95, 85});
    c1.print();
    ans_file << c1.answer << '\n';
    test_case c2({180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180});
    c2.print();
    ans_file << c2.answer << '\n';
    vector<int> sizes = {15, 20, 20, 20, 40, 50, 55, 60};
    int zero_cnt = 0;
    for (int s : sizes) {
        test_case c;
        do {
            c = test_case(s);
        } while (c.answer == 0 && zero_cnt == MAX_ZEROS);
        if (c.answer == 0) {
            zero_cnt++;
        }
        c.print();
        ans_file << c.answer << '\n';
    }


    return 0;
}
