
#include <cmath>
#include <cerrno>
#include <cfenv>
#include <cstring>
#include <cstdio>

#include <iostream>

using namespace std;


int Quadratic(double a, double b, double c, double* m1, double* m2) {
    // Solutions
    double solution1, solution2;
    double unRooted = (b*b) - (4*a*c);
    // Check if can do sqrt
    if (unRooted < 0 || a == 0) {
        cout << "Invalid values\n";
        return 0;
    };
     
    solution1 = ( b - sqrt(unRooted) ) / (2*a);
    solution2 = (-b - sqrt(unRooted) ) / (2*a);

    *m1 = solution1;
    *m2 = solution2;

    return 1;
};

/////////////////////////////////////////////////////////// MAIN //////////////////////////////////////


int main(int argc, char const *argv[]) {
    double x1, x2;
    double* m1 = &x1;
    double* m2 = &x2;

    double a = 2.0; 
    double b = 15.0; 
    double c = 3.0;

    cout << "Before x1: "<< x1 << "\n Memory (x1): " << m1 << "\n";
    cout << "Before x2: "<< x2 << "\n Memory (x2): " << m2 << "\n";

    Quadratic(a,b,c, m1, m2);

    cout << "After x1: "<< x1 << "\n Memory (x1): " << m1 << "\n";
    cout << "After x2: "<< x2 << "\n Memory (x2): " << m2 << "\n";
    
}