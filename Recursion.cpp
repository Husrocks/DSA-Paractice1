#include <bits/stdc++.h>
using namespace std;

void print(int i, int n) {
    if (i > n)  // Base case: stop when i > n
        return;

    cout << i << " Raj "; // Print current number
    i++;  
    print(i , n);       // Recursive call with next number
}

int main() {
    int n;
    int i = 1;
    cin >> n;
    print(i, n);
    return 0;
}