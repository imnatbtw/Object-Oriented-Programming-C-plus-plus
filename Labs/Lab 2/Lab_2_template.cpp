/***
 * CSE 2010 Fall 2023
 * Lab #2
 * Nathalie Duran 007664638
 * 09/29/2023
 * 
 * - Organize code into a function and apply them to different data types and objects
 * - Using these functions, this lab will pass by reference calls and values
 * 
 * The most challenging part of this lab was fixing "not declared" errors in the code
 * I solved this problem by reviewing the differences in my code to the Lab 2 Final int main() 
 * and by understanding the importance of when to use 'string'
 * 
***/

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

/**
 * @brief power(): calculates and returns the base to the power of exponent
 * 
 * @param base int: base number that is positive
 * @param exponent int: exponent that is positive that the base is raised to
 * @return int 
 */
int power(int base, int exponent){
    assert(base >= 0);
    assert(exponent >= 0);
    int power_output = 1;
    for(int i = 0; i < exponent; i++){
        power_output *= base;
    }
    return power_output;
}

/**
 * @brief floorDivision(): calculates and returns the dividend / divisor using for loops
 * 
 * @param dividend int: whole number to be dividend that is positive
 * @param divisor int: whole number that is positive to divide the dividend by 
 * @return int 
 */
// write floorDivision function here
int floorDivision(int & dividend, int & divisor){
    int floor_div_output = 0;
    while (dividend - divisor >= 0) {
        dividend -= divisor; // dividend = dividend - divisor;
        floor_div_output += 1;
    }
    return floor_div_output;
}

/**
 * @brief modDivision(): returns the remainder from dividend / divisor
 * 
 * @param dividend int: whole number to be dividend that is positive
 * @param divisor int: whole number that is positive to divide the dividend by 
 * @return int 
 */
int modDivision(int dividend, int divisor){
  int mod_output = dividend;
    while (mod_output - divisor >= 0) {
        mod_output -= divisor; // dividend = dividend - divisor;
    }  
    return mod_output;
}

/**
 * @brief print(): prints out the statement "Output of {operation} between {x} 
 *        and {y} is {output}"
 * 
 * @param operation string: which should be any of the following: power, floorDivision, 
 *                  modDivision
 * @param x int: first variable that is positive
 * @param y int: second variable that is positive
 * @param output int: output of the operation
 */
void print(string operation, double output,int x, int y){
    cout << "Output of " << operation << " between " << x << " and " << \
    y <<  " is : " << output << endl;  
}


/**
 * @brief op(): returns the name of the operation based on the following cases:
 *              1 : power
 *              2 : floorDivision 
 *              3 : modDivision
 *              All other cases: invalid
 *              This function supplies the operation to print()
 * @param selection int: ranging from 1 to 3 that specifies the operation. All other cases results
 *              in "invalid"
 * @return string 
 */
string  operation(int selection){
    if (selection ==1){
        return "power";
    } else if (selection == 2){
        return "floorDivision";
    } else if (selection == 3){
        return "modDivision";
    } else {
        return "invalid";
    }
}

int main()
{   
    // test input for power
    int x = 2;
    int y = 5;

    int base = x;
    int exponent = y;
    // power 
    int power_output = power(base, exponent);
    // print
   string op = operation(1);
   print(op ,power_output, base, exponent);

    // test input for floor and modulos
    x = 65;
    y = 11;

    // floor division
    int dividend = x;
    int divisor = y;
    int floor_div_output = floorDivision(dividend, divisor);
    //print
    op = operation(2);
    print(op ,floor_div_output, dividend, divisor);

    // reset test input for modulos division
    // The outputs did not differ when doing Pass by reference and Pass by Value. What did change was
    // the range in which the output would be in, from 65 to 10.
    // dividend = x;
    // divisor = y;
    // modulos division
    int mod_output = modDivision(dividend, divisor);
    //print
    op = operation(3);
    print(op, mod_output, dividend, divisor);

}