/***
 * CSE 2010 Fall 2023
 * Lab 3
 * Nathalie Duran 007664638
 * 13 November 2023
 * 
 * This lab will show how to manipulate private variables by using mutator functions. These will be accessed through 
 * accessor functions. 
 * 
 * The most challenging part of this lab was uploading to github. I fixed this problem by redownloading the files
 * and doing the process again.
 *
***/

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

/**
 * The structure of the files are as follows:
 * Lab_3_template.cpp -> calls the class and is considered the "main" program
 * Person.cpp -> implements and contains the functionalities of the class
 * Person.h -> contains the interface, declarations of the class, and  includes 
 * the private variables and member functions
 */

/**
 *  Following the examples below, create your own class objects that calls ALL
 *  the functions. 
 * 
 *  Initialize your objects of type Person.
 *  Use the mutator functions to modify the private variables of your Person.
 *  Display the variables associated with your Person using the accessor functions
 *  and cout or print.
 */

int main()
{
    Person bob = Person("Bob", 100, "retired", true);
    cout << bob.getName() << endl;
    Person unknown = Person(); //Person unknown; // 
    cout << unknown.getName() << endl;
    cout << "Testing Age\n";
    cout << bob.getAge() << endl;
    bob.updateAge(101);
    cout << bob.getAge() << endl;
}

