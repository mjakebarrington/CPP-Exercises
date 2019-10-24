/*
 * A theoretical model of the average yearly cost of tuition and fees at 4-year public universities
 * in the United States.
 * 4x2+330x+3310
 */

#include <iostream>
#include <cmath>
#include <exception>

int calc_tuition(int y)
{
    if(y>2000)
    {
        int ytk = y-2000;
        int tuition = 4*(pow(ytk,2))+330*ytk+3310;
        return tuition;
    }
    else
    {
        return -1;
    }
}

int main()
{
    std::cout << "Please enter a year after the year 2000: ";
    int year;
    std::cin >> year;
    std::cout << "\nTheoretically, average yearly tuition at 4 year public colleges in year " << year << " would be $" << calc_tuition(year) << std::endl;
}