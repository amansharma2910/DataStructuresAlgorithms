#include <iostream>
#include <vector>
using namespace std;

int main(){
    // declaring tuples
    tuple<int, int, int> tuple1, tuple2; // all int tuple
    tuple<int, string, pair<int, int>, vector<int>> tuple3; // heterogenous tuple
    
    // inserting values into the tuples
    tuple1 = make_tuple(1, 2, 3);
    tuple2 = make_tuple(4, 5, 6);
    
    int i = 0;
    string j = "amansharma2910";
    pair<int, int> k = make_pair(1,2);
    vector<int> l = {3};
    
    tuple3 = make_tuple(i, j, k, l);
    
    // swapping values of both the tuples
    tuple1.swap(tuple2);
    
    // printing values of tuple 1
    int a, b, c;
    tie(a, b, c) = tuple1;
    
    cout <<a <<" " <<b <<" " <<c <<endl;
}



