#include <bits/stdc++.h>
using namespace std;
int fpb(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return fpb(b, a % b);
}

int main() {
	int a, b, n, uwu;
	cin >> a >> b >> n;
	uwu = fpb(a, b);
	for (int i=0;i<n;i++) {
		int win;
		cin >> win;
		if(win%uwu==0) {
			cout << "YA" << endl;
		}
		else {
			cout << "TIDAK" << endl;
		}
	}
}
