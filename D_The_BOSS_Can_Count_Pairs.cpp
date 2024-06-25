#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int countPairs(vector<int>& a, vector<int>& b) {
    int n = a.size();
    unordered_map<int, int> freq;
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = a[i] * a[j] - b[i];
            if (freq.count(diff) > 0) {
                count += freq[diff];
            }
        }
        freq[a[i]]++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int result = countPairs(a, b);
    cout << result << endl;

    return 0;
}
