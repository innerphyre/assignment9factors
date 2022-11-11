// find the factorial of a number using the for loop//

#include <iostream>
using namespace std;
//factor function
int factorial(int);

int main() {
    int n;
    long factorial = 1.0;

    //what to display to the user//
        cout << "Please enter a positive integer or number: ";
        //what the user inputs//
    cin >> n;

    if (n < 0)
        //display if user inputs a number less than 0//
        cout << "Error! No such factorial. Please enter a positive number.A number greater than zero.";
    else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        //displays the function factors
        cout << "Here is the factorial of " << n << " = " << factorial;
    }

    return 0;
}
int factorial(int f)
{
    int fact;
    //factor calculation

    return fact;
}