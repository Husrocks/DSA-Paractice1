#include <iostream>
using namespace std;    
int main() {

  /*  FOr LOOp

    int i;
    for(i=5 ; i>=0;  i =  i-1){   // Initialize i to 5 and decrement it until it is less than 0
        cout << "Hey" << i<<endl;  // Print the value of i
    }

   While Loop

    int i=1; // Initialize i to 1

    while(i<=5) {           //check if i is less than or equal to 5
        cout << "Hey" << i << endl;     // Print the value of i
        i = i + 1;                           // Increment i by 1
    }
        */

    // Do While Loop
    int i = 2; // Initialize i to 2
    do{
        cout << "Hey" << i << endl; // Print the value of i
        i = i + 1; // Increment i by 1
    }
    while(i <= 1); // Continue the loop while i is less than or equal to 1 but it is not so

    cout << i << endl; // Print the final value of i after the loop

    // The output will be:
    // Hey 2
    // 3

    
    return 0;
}