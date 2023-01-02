#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    cout << "element->are" << d.at(2) << endl;

    return 0;
}