#include<iostream>

using namespace std;

int main() {



    // Primer juego
    // N Goles archimedians F.C
    // K goles pythagoreans F.C
    int N; cin >> N; 
    int K; cin >> K;


    // Segundo juego
    // N goles archimedians F.C
    // K goles pythagoreans F.C
    int n; cin >> n;
    int k; cin >> k;

    int Pythagoreans_goles = K + k;
    int  Archimedians_goles = N + n;

    if(Pythagoreans_goles > Archimedians_goles) {
        cout << "P" << endl;
    } else if (Pythagoreans_goles < Archimedians_goles) {
        cout << "A" << endl;
    } else {
        cout << "D" << endl;}

    return 0;
    }