#include <bits/stdc++.h>
using namespace std;

void print(int i, int n) {
    if (i > n)  // Base case: stop when i > n
        return;

    cout << i << " Raj "; // Print current number
    i++;  
    print(i , n);       // Recursive call with next number
}

void print2(int i , int n){
    if(i > n)
    return;
    cout << i <<endl;
    print2(i+1 , n);
}

void print3(int i , int n){
    if(i < 1)
    return;
    cout << i <<endl;
    print3(i-1 , n);
}

void print4(int i , int n){
    if(i <1)
    return;
    
    print4(i-1 , n);
    cout << i <<endl;
}

void print5(int i , int n){
    if(i >n)
    return;
    
    print5(i+1 , n);
    cout << i <<endl;
}


int main() {
    int n;
    int  i ;
    cin >> n;
    // print(i, n);
    // print2(i,n);
    print5(1,n);
    return 0;
}