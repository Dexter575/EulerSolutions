//Problem 3
//Largest prime factor

// ---Problem Statement
// ---The prime factors of 13195 are 5, 7, 13 and 29.
// ---What is the largest prime factor of the number 600851475143 ?

// ---Solution_1
// ---Given an Integer Number
// ---Find Prime Factors of the number and store it in a vector
// ---Find largest prime factor

// ---Solution_2
// ---Given an Integer Number
// ---Find Prime Factors and if it's maximum save it

// ---Introduction
// ---Prime Numbers
// ---A whole number greater than 1 that can not be made by multiplying other whole numbers.
// ---Example
// ---5 is a prime number. We cannot multiply 2, 3 or 4 together to make 5. (Only 1×5 works but we said to use other whole numbers).
// ---Note: All whole numbers above 1 are either composite or prime.

// ---The Fundamental Theorem of Arithmetic
// ---Let us start with the definition:
// ---Any integer greater than 1 is either a prime number, or can be written as a unique product of prime numbers (ignoring the order).

#include "largest_prime_number_factors.h"
#include <iostream>
#include <stdio.h>

int main()
{
    int alpha = 5454;
    //Creating a (prime class) object
    Prime<int> prime_object;
    std::vector<int> vect_alpha=prime_object.PrimeFactors(alpha);
    //Print prime factors of a given number
    std::cout<<"Prime Factors of the given number "<<alpha<<" : "<<std::endl;
    prime_object.PrintVect(vect_alpha);
    //Print largest prime factor
    std::cout<<"\nLargest Prime factor is : "<<std::endl;
    std::cout<< prime_object.FindLargestPrimeFactor(vect_alpha);
    return 0;
}