#include <iostream>
#include <stdio.h>
#include <vector>

template <class T>
class Prime
{
    private:
        //Initalize a Vector
        vector<T> vect{};            //an array of ints
        T largest = 0;
    public:
        //Prime();
        std::vector<T> PrimeFactors(T number);
        T PrintVect(std::vector<T> vect);
        T FindLargestPrimeFactor(std::vector<T> vect);
};

template <class T>
std::vector<T> PrimeFactors(T number) //put number on stack
{
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
    vect.insert(vect.end(), 1, number);
    return vect;
}

template <class T>
T Prime<T>::PrintVect(std::vector<T> vect)
{
    //Display the vectors (multiples)
    for(int i = 0; i < vect.size(); i++)
    {
        cout<<' '<<vect[i];
    }
    return 0;
}

template <class T>
T Prime<T>::FindLargestPrimeFactor(std::vector<T> vect)
//Finds the largest prime factor (given a vector array) of prime factors for respective number
{
    for(int i=1; i<vect.size(); i++)
    {
        if(vect[i]>vect[i-1])
        {
            largest = vect[i];
        }
    }
    return largest;
}