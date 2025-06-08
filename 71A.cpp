#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    string output = "";

    for (int i = 1; i <= n; i++) {
        string palabra;
        cin >> palabra;

        if (palabra.length() > 10) {
            output += palabra[0] + to_string(palabra.length() - 2) + palabra[palabra.length() - 1] + "\n";
        } else {
            output += palabra + "\n";
        }
    }

    cout << output;

    return 0;
}