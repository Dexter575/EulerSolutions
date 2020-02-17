//Problem 5
//Smallest multiple

// ---Problem Statement
// ---2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// ---What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

// ---Solution

#include "bits/stdc++.h"           //is a Header File Includes every SL
#include <iostream>
#include <stdio.h>

int PrintVect(std::vector<int> vect);
int CalculateSmallestPositiveNumber(int low, int high);

int main()
{
    int lowest_range = 1;
    int highest_range = 10;
    std::cout<<"Smallest Possible Integer is: "<<std::endl;
    std::cout<< CalculateSmallestPositiveNumber(lowest_range, highest_range);
}

int CalculateSmallestPositiveNumber(int low, int high)
{
    //Initalize a vector
    std::vector<int> vect(high);
    iota(begin(vect), end(vect), 1);
    PrintVect(vect);
    bool check_i = false;
    int integer = 0;
    for(int i = 1; check_i == false; i++)
    {
        for(int j =1; j <= high; j++)
        {
            if(i%j==0)
            {
                check_i = true;
                //continue;
            }
            else
            {
                check_i = false;
                break;
            }
        }
        if (check_i==true)
        {   
            integer = i;
            //break;
        }
    }
    return integer;
}

int PrintVect(std::vector<int> vect)
{
    //Display the vectors (multiples)
    for(int i = 0; i < vect.size(); i++)
        std::cout<<vect[i]<<' ';
    std::cout<<std::endl;
    return 0;
}