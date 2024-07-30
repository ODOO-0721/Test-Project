#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> myMap;
    myMap.insert(std::map<int, int>::value_type(1, 2));
    myMap.insert(std::map<int, int>::value_type(2, 4));
    myMap.insert(std::map<int, int>::value_type(3, 6));
    myMap.insert(std::map<int, int>::value_type(4, 8));
    myMap.insert(std::map<int, int>::value_type(5, 10));
    map<int, int>myMap2; 
    myMap2.insert(std::map<int, int>::value_type(5, 12));
    //copy(myMap.begin(), myMap.end(), inserter(myMap2, myMap2.begin()));
    myMap2 = myMap;
    cout << myMap2.size() << endl;
    cout << myMap2.find(5)->second << endl;
}