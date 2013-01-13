#include <cassert>  // assert
#include <iostream> // boolalpha, cout, endl

using namespace std;

struct B;

struct A {
     A& operator = (A&)  {
        return *this;}

     A& f (B&)  {
        return *this;}};

struct B : A {};

int main () {
    A x;
    x.operator=(A());
    cout << "Done." << endl;
    return 0;}
