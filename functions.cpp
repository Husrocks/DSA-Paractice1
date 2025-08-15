#include <iostream>
using namespace std;

void printName(){
    cout << "Striver" << endl; // Print a greeting message
}

void printNamewithparameters(string name , int age){
    cout << "Hey " << name <<  "my age is"<< age<< endl; // Print a greeting message with the provided name
} // Function prototype declaration


int sum(int a, int b){ // Function to calculate the sum of two integers
    int c = a + b; // Calculate the sum of a and b
    return c; // Return the sum of a and b
}
int main(){
    printName();
    string name; // Call the function to print the name
    int age; // Declare a variable to hold the age
    cout << "Enter your name: ";
    cin>> name; // Read a name from user input
    cout << "Enter your age: ";
    cin >> age;
    printNamewithparameters(name , age); // Call the function with a parameter to print a personalized greeting
    

    int a, b; // Declare two integer variables
    cout << "Enter two numbers: ";  
    cin >> a >> b; // Read two integers from user input
    int c = sum(a, b); // Call the sum function to calculate the sum of a and b
    cout << "The sum is: " << c << endl; // Print the result of the sum 
    
    return 0; // Return 0 to indicate successful execution
}