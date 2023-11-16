//DisplayVec.cpp
#include "DisplayVec.h"

/**
 * @brief Construct a new Display Vec:: Display Vec object
 * 
 */
DisplayVec::DisplayVec(){

}

/**
 * @brief prints the integers in v
 * 
 * @param v 
 */
void DisplayVec::printVector(const vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v [i] << endl;
    }
}


int DisplayVec::getVectMemSize(const vector<int> v){

}

DisplayVec::printMetaVector(const vector<int> v){

}
const int * DisplayVec::getAddress(vector<int> v, int index){

}