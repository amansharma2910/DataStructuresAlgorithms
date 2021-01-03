#include <iostream>
#include <map>
using namespace std;

int main(){
    // creating maps in c++
    map<string, int> map1 {{"this", 0}, {"is", 1}, {"a", 2}, {"map", 3}}; // declaration + initialization
    map<int, int> map2;
    
    //inserting values into map
    map2[1] = 9;
    map2[2] = 10;
    map2[3] = 11;
    map2[4] = 12;
    
    cout <<map1["this"] <<endl; // printing value for key 'this'
    cout <<map2[10] <<endl; // trying to fetch a non-existing key's value will return 0
    
    // inserting using insert method
    map1.insert(pair<string, int> ("added", 4)); //insert(pair)
    map2.insert(make_pair(5, 11));
    
    cout <<map1["added"] <<endl;    
    cout <<map2[5] <<endl;
}
