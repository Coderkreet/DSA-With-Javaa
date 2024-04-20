#include <iostream>
#include <cmath> // Include cmath for fmod
using namespace std;

int main() {
    double a = 5;
    double b = 15;

    double ans = fmod(a, b); // Use fmod instead of %

    cout << ans << endl;

    return 0;
}

