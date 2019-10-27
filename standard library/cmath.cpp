/*
 * The cmath header provides many useful numeric functions.
 * Here we look at some of what cmath has to offer.
 */

#include <iostream>
#include <cmath>

#define OUT(x) std::cout << x << std::endl
#define PI 3.14159265

int main()
{
    /*
     * TRIGONOMETRIC FUNCTIONS
     */
    // cos returns the cosine of x radians:
    OUT(cos(60*PI/180));
    // sin returns the sine of x radians:
    OUT(sin(90*PI/180));
    // tan returns the tangent of x radians:
    OUT(tan(45*PI/180));
    // cmath also provides inverse operation (arc) of all three by prefixing them with 'a' (eg atan)
    // Hyperbolic functions can be postfixed with 'h' (eg sinh)
    
    /*
     * EXPONENTIAL AND LOGARITHMIC FUNCTIONS
     */
    // exp computes e to the power of its parameter:
    OUT(exp(6.0)); // => e 'to the power of 6.0'... 403.429
    
}