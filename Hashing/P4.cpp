#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int arr[n];

    unordered_map<int, int> mpp;

    // input array and count frequency
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // iterate in the map (print element -> frequency)
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // queries
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch frequency
        cout << mpp[number] << endl;
    }

    return 0;
}

