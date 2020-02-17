//Problem 6
//Sum square difference

// ---Problem Statement
// ---The sum of the squares of the first ten natural numbers is, 385
// ---The square of the sum of the first ten natural numbers is, 3025
// ---Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.
// ---Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

// ---Solution

#include <iostream>
#include <stdio.h>
#include<cmath>

int CalcSumOfSquares(int number);
int CalcSquareOfSums(int number);

int main()
{
    int n = 10;
    std::cout<< "Sum of Squares: "<<CalcSumOfSquares(n);
    std::cout<< "Square of Sums: "<<CalcSquareOfSums(n);
    return 0;
}

int CalcSumOfSquares(int number)
{
    int sum_of_squares = (number+1) * (number + 0.5) * (number/3);
    return sum_of_squares;
}

int CalcSquareOfSums(int number)
{
    int square_of_sums = number * (number +1 );
    square_of_sums /= 2;
    return square_of_sums;
}

int CalcSquare(int num)
{
    pow(num,2);
    return num;
}
