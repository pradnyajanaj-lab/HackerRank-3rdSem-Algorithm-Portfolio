#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    long long total = 0;
    long long minVal = arr[0];
    long long maxVal = arr[0];

    for (int i = 0; i < 5; i++) {
        total += arr[i];

        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    cout << total - maxVal << " " << total - minVal << endl;

    return 0;
}