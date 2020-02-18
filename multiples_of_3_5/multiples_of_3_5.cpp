//Problem 1
//Multiples of 3 and 5

// ---Problem Statement
// ---  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// ---  Find the sum of all the multiples of 3 or 5 below 1000.

// ---Solution
// ---Given a range of integers
// ---Use mod to find multiples of 3 and 5
// ---Store these multiples in a (int) vector
// ---Iterate over the vector (multiples) to calculate sum (accumulate)

#include <iostream>
#include <stdio.h>
#include <vector>

std::vector<int> FindMultiples(int n_1, int n_2, int range)
{
    //Initalize a Vector
    std::vector<int> vect{};           //an array of ints
    for(int i = 0; i < range; i++)
    {
        if ((i%n_1 == 0) || (i%n_2 == 0))
            vect.insert(vect.end(), 1, i);
    }
    return vect;
}

int PrintVect(std::vector<int> vect)
{
    //Display the vectors (multiples)
        for(int i = 0; i < vect.size(); i++)
        {
            std::cout<< vect[i];
        }
    return 0;
}

int SumMultiples(std::vector<int> vect)
{
    int sum = 0;
    //Sums all the multiples
    for(int i = 0; i<vect.size(); i++)
        sum = sum + vect[i];
    return sum;
}

int main()
{
    //Storing the multiples in a vector
    std::vector<int> vect = FindMultiples(3, 5, 20);
    //Print vectors
    PrintVect(vect);
    //Calculate and print sum
    std::cout<< std::endl << SumMultiples(vect);
    return 0;
}