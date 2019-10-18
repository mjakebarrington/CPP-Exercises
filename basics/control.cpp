/*
 * Basic Control Flow
 */

#include <iostream>
#include <string>

int main()
{
    // If/Else statements are useful for choosing between two or maybe 3 choices.
    // For more choices its usually better to use a switch case statement.
    int a = 51;
    if (a > 50) {
        // Note: Even though I enclosed this statement in brackets,
        // brackets are only REQUIRED if there is more than one statement.
        std::cout << "a is greater than 50" << std::endl;
    }
    else {
        std::cout << "a is less than or equal to 50" << std::endl;
    }
    
    /*
     * LOOPS
     */
    // The most basic loop is a while loop:
    
    int b = 10;
    while (b>0) {
        std::cout << b << std::endl;
        // Decrements b, so we break out of the loop after b is 1. Remember b was init to 10 so will count down from 10.
        --b;
    }
    std::cout << "Liftoff!" << std::endl;
    /*
     * IMPORTANT:
     * Loops must have a terminating condition. In this case the loop terminates
     * when b is no longer greater than 0. Otherwise, the loop will continue forever
     * (called an infinite loop). while(cin) is fine, because the terminating condition is
     * when standard input is terminated with control-d,z or the inserting a character such
     * as pipe.
     */
    
    // What if we want a loop to continue until a certain specified action is taken?
    // The do-while loop will execute at least once until the while condition is no longer met.
    std::string user_string;
    do {
        std::cout << "Enter something (type exit to continue): ";
        getline(std::cin,user_string);
        std::cout << "You entered: " << user_string << std::endl;
    } while (user_string != "exit");
    // The exit condition for the above loop is when the user enters exit.
    
    // THE FOR LOOP
    // The for loop is very similar to the while loop, but initializer, condition, and modifier
    // are all on one line (separated by semicolons):
    
    // i is simply convention, but any valid name can be used
    for (int i=0;i<=10;++i) {
        std::cout << i << std::endl;
    }
    
    // Methods of control flow can be nested:
    for (int i=1;i<=10;++i) {
        if(i%2==0) {
            std::cout << "Number is even (" << i << ")\n";
        }
        else {
            std::cout << "Number is odd (" << i << ")\n";
        }
    }
    
    // THE FOR LOOP (RANGES)
    // The for loop can also be used to iterate over ranges (anything with funcs begin and end)
    // Remember: strings are simply containers of characters:
    std::string cpp = "C++";
    // for every character in the container (string) cpp...
    for(char y : cpp) {
        // print that character surrounded by tildes
        std::cout << "~" << y << "~ ";
    }
    std::cout << std::endl;
    
    /*
     * JUMPS
     */
    
    // The keyword break exits a loop, regardless of if the exit condition has been met:
    int counter = 0;
    while (counter<=10) {
        if (counter == 3) {
            // Will terminate loop when counter == 3 instead of 10.
            break;
        }
        std::cout << counter << '\n';
        ++counter;
    }
    
    // The keyword continue moves the loop to the next iteration:
    int xyz = 0;
    while (xyz <= 10) {
        ++xyz;
        if (xyz == 5) {
            // "Skips" number 5.
            continue;
        }
        std::cout << xyz << std::endl;
    }
    // goto allows you to jump to a label in your program:
    goto my_label;
    std::cout << "THIS WILL BE SKIPPED" << std::endl;
    my_label:
    std::cout << "I skipped the previous std output!" << std::endl;
   return 0;
}