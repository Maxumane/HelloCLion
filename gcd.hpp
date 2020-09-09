// Created by Max on 2020-09-08.
// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.

#ifndef HELLOCLION2_GCD_HPP
#define HELLOCLION2_GCD_HPP

#include <iostream>

using namespace std;

int gcd(const int a, const int b) {
    int c;
    int max;
    if(a >= b) {
        c = b;
    } else {
        c = a;
    }
    for (int jam = 1; jam <= c; jam++) {
        if((a % jam == 0) && (b % jam == 0)){
            max = jam;

        } else {
            continue;
        }
    }
    cout<<"The GCD of "<< a <<" and "<< b <<" is "<< max <<endl;
    return max;
}

#endif //HELLOCLION2_GCD_HPP

