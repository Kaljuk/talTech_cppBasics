/**
 * 
 * @
 * 
*/

#include <iostream>
#include <cmath>
#include <cerrno>
#include <cfenv>
#include <cstring>

#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

    // ABC
    double a = 2.0; 
    double b = 15.0; 
    double c = 3.0;
    // Solutions
    double solution1, solution2;
    double unRooted = (b*b) - (4*a*c);

    // Check if can do sqrt
    if (unRooted < 0 || a == 0) {
        cout << "Invalid values\n";
        throw;// throw "";
    };
     
    solution1 = ( b - sqrt(unRooted) ) / (2*a);
    solution2 = (-b - sqrt(unRooted) ) / (2*a);

    cout << "x1: " << solution1 << "\n";
    cout << "x2: " << solution2 << "\n";

    return 0;
}

