//Problem 5
//Smallest multiple


// ---Problem Statement
// ---2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// ---What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

// ---Solution



#include "bits/stdc++.h"           //is a Header File Includes every SL
#include <iostream>
#include <stdio.h>


using namespace std;

int print_vect(vector<int> vect);
int calculate_smallest_positive_number(int low, int high);

int main()
{
    int lowest_range = 1;
    int highest_range = 10;

    cout<<"Smallest Possible Integer is: "<<endl;
    cout<< calculate_smallest_positive_number(lowest_range, highest_range);


}

int calculate_smallest_positive_number(int low, int high)
{
    //Initalize a Vector
    vector<int> vect(high);
    iota(begin(vect), end(vect), 1);

    print_vect(vect);

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



int print_vect(vector<int> vect)
{
    //Display the vectors (multiples)
        for(int i = 0; i < vect.size(); i++)
        {
            cout<<vect[i]<<' ';
        }
        cout<<endl;
    return 0;
}
