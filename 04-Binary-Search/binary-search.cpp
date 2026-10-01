#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, n;
    cin >> V;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == V) {
            cout << mid << endl;
            return 0;
        }
        else if (arr[mid] < V) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return 0;
}