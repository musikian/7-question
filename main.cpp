#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    
    vector<int> v;
    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    cout << "Sorted ascending: ";
    for (int num : v) cout << num << " ";
    
    cout << endl;
    
    sort(v.rbegin(), v.rend());
    cout << "Sorted descending: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    return 0;
}
