/*******************************************************************************
 *
 *  Workshop 6 example 1
 *
 * 1) Create a function called printDblArray() that prints a given array of doubles
 * as a row of elements. Use comma (,) as a delimiter. Enclose the output seq in
 * curly brackets.
 *
 * 2) Create a function called calcAvg() that obtains on its input a c-style
 * array of double, calculates an average of array elements and returns it.
 * Put the function definition before main().
 *
 ******************************************************************************/

#include <iostream>
#include <string>
//#include <cassert>              // for assert macro

using std::cout;

void printDblArray(double arr[], ssize_t size)
{
    cout << '{';
    bool firstEl = true;

    for(size_t i = 0; i < size; ++i)
    {
        if(!firstEl)                // all but the first
            cout << ", ";
        else
            firstEl = false;

        cout << arr[i];
    }
    cout << '}';
}

double calcAvg(double arr[], ssize_t size)
{
    double avg = 0;
    for(size_t i = 0; i < size; ++i)
        avg += arr[i];

    avg /= size;

    return avg;
}


int main()
{
    using std::cout;
    using std::cin;

    cout << "Workshop 6 Example 1\n\n";

    double e1[5] = {1, 2, 3, 4, 5.1 };
    size_t e1Sz = sizeof(e1) / sizeof(e1[0]);
    double e1Avg = calcAvg(e1, e1Sz);

    // prints it
    cout << "Arr1: ";
    printDblArray(e1, e1Sz);
    cout << "; its avg = " << e1Avg;

    cout << "\n";

    double e2[5] = {10.1, 2.1e2, 3.3e-1, 40.4}; // different forms of float consts
    size_t e2Sz = sizeof(e2) / sizeof(e2[0]);
    double e2Avg = calcAvg(e2, e2Sz);

    // prints it
    cout << "Arr2: ";
    printDblArray(e2, e2Sz);
    cout << "; its avg = " << e2Avg;

    // TODO: HW: here we have the same pattern for both arrays.
    // Refactor the program (create a function if needed) to generalize cases.


    cout << "\n\n";

    return 0;
}
