#include <iostream>
using namespace std;

int main(){
    //declaring arrays: arrays are heterogeneous
    array<int, 10> arr1 = {1,2,3,4,5,6,7,8,9,10};
    array<string, 4> arr2, arr3;
    arr2 = {"this", "is", "an", "array"};
    
    //printing values at a certain index
    cout <<arr1.at(5) <<" " <<arr2.at(0) <<" " <<arr1[2] <<endl;
    
    // cheching if an array is empty
    cout <<arr1.empty() <<endl;
    
    // filling an array with a single value
    arr2.fill("filled");
    
    // swapping the values of arrays
    arr2.swap(arr3);
    
    // size of an array
    cout <<arr1.size() <<endl;
    
    // first and last elements of an array
    cout <<arr1.front() <<" " <<arr1.back() <<endl;
}
