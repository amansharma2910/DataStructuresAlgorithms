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
}


