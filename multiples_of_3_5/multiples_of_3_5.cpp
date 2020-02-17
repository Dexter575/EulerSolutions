//Problem 1
//Multiples of 3 and 5


// ---Problem Statement
// ---  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// ---  Find the sum of all the multiples of 3 or 5 below 1000.

// ---Solution
// ---Given a Range of integers
// ---Use Modolous to Find Multiples of 3 and 5
// ---Store these Multiples in a (int) vector
// ---Iterate over the vector (multiples) to Calculate sum (accumulate)


#include "bits/stdc++.h"           //is a Header File Includes every SL
#include <iostream>
#include <stdio.h>


using namespace std;


vector<int> find_multiples(int n_1, int n_2, int range)
{
    //Initalize a Vector
   
    vector<int> vect{};            //an array of ints
    
    for(int i = 0; i < range; i++)
    {
        if ((i%n_1 == 0) || (i%n_2 == 0))
        {
            
            vect.insert(vect.end(), 1, i); 

        }
    }
    return vect;
}

int print_vect(vector<int> vect)
{
    //Display the vectors (multiples)
        for(int i = 0; i < vect.size(); i++)
        {
            cout<< vect[i];
        }
    return 0;
}


int sum_multiples(vector<int> vect)
{
    int sum = 0;
    //Sums all the Multiples
    for(int i = 0; i<vect.size(); i++)
    {
        sum = sum + vect[i];
    }
    return sum;
}


int main()
{
    //Storing the Multiples in a Vector
    vector<int> vect = find_multiples(3, 5, 20);
    
    //Print Vectors
    print_vect(vect);

    //Calculate and Print Sum
    cout<< endl << sum_multiples(vect);

    return 0;
}