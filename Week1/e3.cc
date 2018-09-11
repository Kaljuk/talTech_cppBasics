
#include <cmath>
#include <cerrno>
#include <cfenv>
#include <cstring>
#include <cstdio>

#include <iostream>

using namespace std;


double Mean(int length, int *arrayPointer) {
    int sum = 0;

    for(int i=0; i<length; i++) {
        sum += (int) *(arrayPointer + i);
    }

    return (sum/length);
}

/////////////////////////////////////////////////////////// MAIN //////////////////////////////////////


int main(int argc, char const *argv[]) {
    int leng = 10;
    int kala[leng] = {5,4,3,2,1,0,9,8,7, 6};
    int *p = kala;
    cout << "1: " << Mean(leng, p) << "\n";

    int leng2 = 3;
    int kala2[leng2] = {5,5,6};
    int *p2 = kala2;
    cout << "2: " << Mean(leng2, kala2) << "\n";
}