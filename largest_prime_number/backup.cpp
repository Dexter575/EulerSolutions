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


#include "bits/stdc++.h"           //is a Header File Includes every SL
#include <iostream>
#include <stdio.h>

using namespace std;


vector<int> prime_factors(int number)
{
    //Initalize a Vector
    vector<int> vect{};            //an array of ints

    while(number%2 == 0)
    {
        number /= 2;
        vect.insert(vect.end(), 1, 2);
    }

    while(number%3 == 0)
    {
        number /= 3;
        vect.insert(vect.end(), 1, 3);
    }
    while(number%5 == 0)
    {
        number /= 5;
        vect.insert(vect.end(), 1, 5);
    }
    return vect;
}


int print_vect(vector<int> vect)
    {
    //Display the vectors (multiples)
        for(int i = 0; i < vect.size(); i++)
        {
            cout<<' '<<vect[i];
        }
    return 0;
    }


int find_largest_prime_factor(vector<int> vect)
//Finds the largest prime factor (given a vector array) of prime factors for respective number
{
    int largest = 0;
    for(int i=1; i<vect.size(); i++)
    {
        if(vect[i]>vect[i-1])
        {
            largest = vect[i];
        }
    }
    return largest;
}




int main()
{
    //Initalize a vector container
    long num = 600851475143;
    vector<int> vect = prime_factors(num);
    
    //Print Prime Factors of a given number
    cout<<"Prime Factors of the given number "<<num<<" : "<<endl;
    print_vect(vect);

    //Print Largest Prime Factor
    cout<<"\nLargest Prime factor is : "<<endl;
    cout<< find_largest_prime_factor(vect);

    return 0;
}



