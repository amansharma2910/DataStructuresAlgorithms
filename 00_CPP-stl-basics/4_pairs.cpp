#include <iostream>
#include <string>
using namespace std;

int main(){
    // declaring pairs
    pair<int, int> pair1, pair2; // creating two pairs containing both first and second elements as int
    pair<int, string> pair3;// first element is int, second is string
    
    // assigning values to the pairs
    pair1 = make_pair(1,2);
    pair2 = make_pair(3,4);
    
    // swapping values of pair1 and pair2
    pair2.swap(pair1);
    
    //printing the values of pair1
    cout <<pair1.first <<" " <<pair1.second <<endl; //3 4
    
    //comparison operations
    if(pair1 > pair2)
        cout <<"pair1's values are greater than pair2's." <<endl;
    else
        cout <<"pair2's values are greater than pair1's." <<endl;
}
