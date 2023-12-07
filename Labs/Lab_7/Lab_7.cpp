/***
* CSE 2010 Fall 2023
* Lab #7
* Nathalie Duran 007664638
* 8 December 2023
* 
* This lab will use generic programs and it expand on previous classes to have members 
* which can hold different data types. It will explain the difference in implicit and explicit 
* instantiations.
*
* What I found challenging was compiling the files together. I solved this problem by
* redownloading the files and trying again.
*
***/
#include <iostream>
#include "ArrayVec.h"
#include "DisplayArr.h"
using namespace std;
int main()
{
    // initialize arr
    const int CAPACITY = 10;
    int test_arr[CAPACITY];

    //initialize ArrayVec and DisplayArr
    DisplayArr disp = DisplayArr();
    ArrayVec av = ArrayVec();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenArr(test_arr, num_elem, range);

    // display contents
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    cout << "Array Elements\n";
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize\n";
    disp.printMetaArray(test_arr, test_arr_size);
}
