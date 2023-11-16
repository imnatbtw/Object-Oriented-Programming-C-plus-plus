/***
 * CSE 2010 Fall 2023
 * Lab 4
 * Nathalie Duran 007664638
 * 30 October 2023
 *
 * This lab will show how to organize data by using arrays and vectors. It will display 
 * the way both contain, access, and update elements and how to pass them into functions.
 * These data structures allocate memory and their relation to pointers which will also be shown in this lab.
 *
 * The most challenging aspect was having many different file and understanding what each one does.
 * After reviewing, I was able to understand why many files are necessary and what they individually mean.
 *
***/

#include <iostream>
#include "ArrayVec.h"
#include "DisplayVec.h"
using namespace std;

int main()
{
    // initialize vec
    const int CAPACITY = 10;
    vector<int> test_vec(CAPACITY);

    //initialize ArrayVec and DisplayArr
    DisplayVec disp = DisplayVec();
    ArrayVec av = ArrayVec();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenVec(test_vec, num_elem, range);

    // display contents
    int test_vec_size = test_vec.size();
    cout << "Vector Elements\n";
    disp.printVector(test_vec);
    cout << "Array Memsize\n";
    disp.printMetaVector(test_vec);
}