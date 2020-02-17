//Problem 4
//Largest palindrome product



// ---Problem Statement
// --- A palindromic number reads the same both ways.
// --- The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// --- Find the largest palindrome made from the product of two 3-digit numbers.
// ---

// ---Solution
// ---Given an 'n' numbers of 'm' digits each. Find 'Product' of them
// ---Find the Palindrome numbers made from the 'Product' and store in a vector
// ---Find the largest palindrome number via iterating

#include "bits/stdc++.h"           //is a Header File Includes every SL
#include <iostream>
#include <stdio.h>


using namespace std;


bool palindrome_check(int number)
{
    int divisor = 1;
    //Calculating Highest Divisor
    while (number / divisor >= 10)
        divisor = divisor * 10;
    //Finding out First and Last Digit
    while (number != 0)
    {
        int lead_digit = number / divisor;
        int trail_digit = number % 10;
        
        //Checking
        if (lead_digit != trail_digit)
        {
            return false;
        }
        else
        {
            number = number % divisor;
            number = number / 10;
            //Cutting off the Divisor
            divisor = divisor / 100;
        }

    }
    return true;
}




int find_palindrome()
{
    for (int p = 1; p <= 9; p++)
    {
        int n, a, b, test;
        n = 9 * p + 1;

        // This could be vastly optimized further.
        for (int j = 1; j <= n; j++)
        {
            if (n % j == 0)
            {
                a = 1001 - n / j;
                b = 1001 - 11 * j;
                test = a * b;
                if (palindrome_check(test) == true)
                {
                    cout<< "a . b : "  << a * b << "\n";
                }
            }
        }
    }
}



int main()
{

    find_palindrome();

    return 0;
}