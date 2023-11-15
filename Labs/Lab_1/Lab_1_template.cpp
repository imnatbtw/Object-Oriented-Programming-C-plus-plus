/***
 * CSE 2010 Fall 2023
 * Lab #1
 * Nathalie Duran 007664638
 * 18 September 2023
 *
 * This lab will compile and execute programs in C++, including executing input and output
 * commands, put in application if/else statements to certain arithmetic operations. This
 * lab will also show descriptions/graphs to describe the following programs.
 *
 * The most challenging aspect of this lab was understanding the process on how to compile.
 * I solved this problem by asking the professor for more understanding on why the program
 * itself was still not functioning. After reviewing her response, I was able to compile the
 * program correctly and understand where my mistake was.
 *
***/

#include <iostream>
#include <cmath>


using namespace std;

int main() {
    cout << "Select a number from 1-6.\n \
            1) sqrt(x)\n \
            2) pow(x,y)\n \
            3) ceil(x/y)\n \
            4) floor(x/y)\n \
            5) x/y\n \
            6) x%y\n";


    // instantiate your variables, x and y as int of value 0  
    // make modifications from int to doubles for section 5.2 here
    int x = 1;
    int y = 2.4;
    int user_selection = 0;


    cin >> user_selection;


    if (cin.fail()) {
        cerr << "Invalid\n";
        return -1;
    } else {
        cout << "You selected " << user_selection << endl;
        if (user_selection == 1){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 0;
            }
            cout << "sqrt(" << x << ") is " << sqrt(x) << endl;
   


        } else if (user_selection == 2){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "pow(" << x << "," << y << ") is " << pow(x,y) << endl;
       


       
        } else if (user_selection == 3){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "ceil(" << x << "," << y << ") is " << ceil(x/y) << endl;
       


        } else if (user_selection == 4){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "floor(" << x << "," << y << ") is " << floor(x/y) << endl;
         


       } else if (user_selection == 5){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "division between" << x << "," << " is " << x/y << endl;
         
       
        } else if (user_selection == 6){
            cout << "Requesting x\n";
            // the reason we created distinct x and y variables (mod_x, mod_y)
            // is because '%' only expects int and never doubles.
            int mod_x = 0;
            int mod_y = 0;
            cin >> mod_x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }
            cout << "Requesting y\n";
            cin >> mod_y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }  


        cout << mod_x << "/ " << mod_y  << " is " << mod_x%mod_y << endl;
        } else {
            printf("Invalid selection\n");
        }


    }
   
    return 0;
}