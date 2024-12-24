#include<bits/stdc++.h>
using namespace std;

int main(){

    // Arrays are constant in size, which means we cannot modify the size of arr
    // but vectors are dynamic , the size is not constant
    vector<int> v;
    
    // push_back function helps us add elements to an vector
    v.push_back(1);

    // emplace_back is similaar to push_back , it is faster than push_back
    v.emplace_back(2);

    // pairs in vector
    vector<pair<int,int>> vec;

    // this container is already containing 5 instances of 100
    vector<int> v[5,100];

    // this container contains 5 instances of 0 or any garbage value , it depends on the compiler
    vector<int> v[5];
    // as we know that vector is dynamic , so even after the size excedes we can add elements ,
    //it will changes its size automatically

    // we can access the elements of the vector just like the arrays
    cout<<v[0];
    // we can also access element using the at function
    cout<<v.at(0);

    // the other way to access elements of vector is using a iterater
    // this iterator points to the memory location of that element
    vector<int>::iterator it = v.begin();
    // if we try to print v.begin() it will print the memory location of the element
    
    // if we want to print the element add a * to the iterator
    cout<<*(it);

    // to move to the next element we need to ++ the iterator
    it++; 

    // v.end() will not point to the last element, it will point just after the last element  
    vector<int>::iterator it = v.end(); 
    // if we do a iterator -- then only it will move to the last element
    it--;

    // following two functions are not used widely 
    // rend means reverse end , which means it will be pointing one element before the first element
    vector<int>::iterator it = v.rend();
    // rbegin mean reverse begin , which mean it will be pointing to the last element 
    vector<int>::iterator it = v.rbegin();

    // back means the last element
    cout<<v.back;

    // this is how we can iterate in vector using iterator
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*(it);
    }
    // auto automatically asigns to the vector iterator
    for(auto it=v.begin();it != v.end(); it++){
        cout<<it;
    }
    // this is how auto iterator can be used in for each loop
    for(auto it:v){
        cout<<it;
    }

    // delete a element using the erase function
    v.erase(v.begin()+1);
    // delete a portion of the vector, we need to give the start and the end of the portion
    v.erase(v.begin()+1,v.begin()+4);

    // insert function
    vector<int> vec(2,100); // {100,100}
    vec.insert(vec.begin(),300); // {300,100,100}
    vec.insert(vec.begin()+1,2,10); // {300,10,10,100,100}

    vector<int> copy(2,50); // {50,50}
    vec.insert(vec.begin(),copy.begin(),copy.end()); // {50,20,300,10,10,100,100}

    // size of vector, return how many elements are there in the vector 
    cout<<v.size();

    // pop_back() function pop outs the last element
    v.pop_back();

    // swap() function swaps the vector
    v.swap(v2);

    // clear() funtion erases the entire vector
    v.clear();

    // empty() function checks if the vector is empty or not
    v.empty();

    return 0;
}