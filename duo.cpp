#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int A; cin >> A; 
    int B; cin >> B;
    int C; cin >> C;

    if ((B + C) <= A || (A + C) <= B || (A + B) <= C) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}