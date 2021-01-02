//vectors in C++ stl
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers;
    int num;
    //inserting elements in the vector
    cout <<"Enter the elements in the vector array:" <<endl;
    for(int i = 0; i < 10; i++){
        cin >> num;
        numbers.push_back(num);
    }
    
    //printing the vector elements
    cout <<"The vector elements are as follows: [ ";
    for(int i = 0; i < numbers.size(); i++)
        cout <<numbers[i] <<" ";
    cout <<"]";

    // declaring vectors
    vector<int> v1 {12, 23, 34, 45, 56, 67, 78, 89}; // initializing with declaration
    vector<int> v2; // only declaration
    
    // pushing back (inserting elements from the back) in the vector
    for(vector<int>::iterator i = v1.begin()+1; i != v1.end()-2; i++)
        v2.push_back(*i);
    
    // priting elements of v2
    for(auto j: v2)
        cout <<j <<" ";
    
    // printing size & max_size of v2
    cout <<"\nSize: " <<v2.size() <<" | Max-size: " <<v2.max_size() <<endl;
    
    // swapping elements of vectors
    v2.swap(v1);
    
    // priting updated elements of v2
    for(auto j: v2)
        cout <<j <<" ";

}


