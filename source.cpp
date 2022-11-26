#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    map <int, int> b;
    int a[n];
    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
        if (b[a[i]] > max)
            max = b[a[i]];
    }
    
    for (int i = 0; i < n; i++)
        if (max == b[a[i]]) {
            cout << a[i] << " " << max;
            return 0;
        }
}