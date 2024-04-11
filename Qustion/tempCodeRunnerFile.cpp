#include <iostream>
using namespace std;

int main() {
    long long n; // Number of friends
    cin >> n;

    // Calculate the number of cakes
    long long small_cakes = (n + 11) / 12; // Ceiling division
    long long medium_cakes = (n + 15) / 16; // Ceiling division
    long long large_cakes = (n + 29) / 30; // Ceiling division

    // Calculate the total time
    long long total_time = small_cakes * 30 + medium_cakes * 40 + large_cakes * 50;

    cout << "Minimum number of cakes: " << small_cakes + medium_cakes + large_cakes << endl;
    cout << "Total time to cut cakes: " << total_time << " minutes" << endl;

    return 0;
}
