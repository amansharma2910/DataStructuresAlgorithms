#include <iostream>
#include <list>
using namespace std;

// function to print list
void print_list(list<int> *l){
    cout <<endl;
    for(auto i = l->begin(); i != l->end(); i++)
        cout <<*i <<" ";
}

int main(){
    // declaring and initializing a list
    list<int> list1 {5, 6, 6, 7, 9, 1, 3, 5, 2};
    print_list(&list1);
    
    // reversing a list
    list1.reverse();
    print_list(&list1);
    
    // sorting a list
    list1.sort();
    print_list(&list1);
    
    // merging two lists
    list<int> list2 {12, 23, 34, 45, 56};
    list1.merge(list2); //merging list2 into list1
    print_list(&list1);
    
    // inserting elements in front and back of list
    list1.push_front(100);
    list1.push_back(120);
    print_list(&list1);
    
    // advance(itr, count) -> moves forward itr count number of times
    // next(itr, count) or prev(itr, count) -> returns a new iterator after moving itr by count number of values
    
    // inserting using insert method in list
    auto i = list1.begin();
    list1.insert(i, 123); // insert(iterator position, value)
    list1.insert(next(i, 3), list2.begin(), list2.end()); // insert(iterator position, iterator begin, iterator end)
    list1.insert(i, 2, 8); // insert(iterator position, count, value)
    
    print_list(&list1);   
}
