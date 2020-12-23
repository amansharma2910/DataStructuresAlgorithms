#include <iostream>
#include <vector>
using namespace std;

//call by reference
int sumByRef(vector<int> &numbers){
    int sum = 0;
    for(int i: numbers)
        sum += i;
    return sum;
}

//call by address
int sumByAdd(vector<int>* numbers){
    int sum = 0;
    for(int i: *numbers)
        sum += i;
    return sum;
}


//call by address
int main(){
    int num;
    vector<int> vecOfNum;
    cout <<"Enter the numbers in the vector:" <<endl;
    for(int i = 0; i < 10; i++){
        cin >> num;
        vecOfNum.push_back(num);
    }
    cout <<"\nThe vector is as follows: ";
    for(int i: vecOfNum)
        cout <<i <<" ";
    
    cout <<"\nSum of all the digits in the vector:" <<endl;
    //passing by reference
    cout <<"Pass by reference = " <<sumByRef(vecOfNum) <<endl;
    //passign by address
    cout <<"Pass by address = " <<sumByAdd(&vecOfNum) <<endl;

}
