// January 14, 2019
//

/*
Test case generator
*/


#include <bits/stdc++.h>

using namespace std;


struct point {
    int x, y;

    bool operator < (const point &other) const {
        return x < other.x;
    }
};

int rand_int(int a, int b) {
    return rand() % (b - a + 1) + a;
}

point rand_point(int m) {
    m = abs(m);
    return {rand_int(-m, m), rand_int(-m, m)};
}

void print_case(int n, int m) {
    set<point> s;
    cout << n << '\n';
    for (int i = 0; i < n; i++) {
        point p;
        do {
            p = rand_point(m);
        } while (s.count(p));
        cout << p.x << ' ' << p.y << '\n';
        s.insert(p);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    freopen("DATA32.txt", "w", stdout);


    srand(time(0));
    
    print_case(3, 5);
    print_case(10, 10);
    print_case(50, 200);
    print_case(200, 400);
    for (int i = 0; i < 6; i++) {
        print_case(1000, 5000);
    }


    return 0;
}
