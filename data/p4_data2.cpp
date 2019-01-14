// January 14, 2019
//

/*
Test case generator
*/


#include <bits/stdc++.h>

using namespace std;


int rand_int(int a, int b) {
    return rand() % (b - a + 1) + a;
}

void print_case(int N) {
    cout << N << '\n';
    for (int i = 0; i < N; i++) {
        cout << rand_int(0, 180);
        if (i != N - 1) cout << ' ';
    }
    cout << '\n';
}

void print_case(vector<int> a) {
    int N = (int) a.size();
    cout << N << '\n';
    for (int i = 0; i < N; i++) {
        cout << a[i];
        if (i != N - 1) cout << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    freopen("DATA42.txt", "w", stdout);


    srand(time(0));

    
    print_case({95, 95});
    print_case({180, 180, 180, 180, 180, 180, 180, 180, 180});
    vector<int> sizes = {20, 20, 25, 25, 30, 30, 30, 30};
    for (int s : sizes) {
        print_case(s);
    }


    return 0;
}
