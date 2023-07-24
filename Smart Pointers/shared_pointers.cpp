#include <iostream>
#include <memory>
using namespace std;

int main ()
{
    // creating shared pointer
    shared_ptr<string> ptr1 = make_shared<string>();
    *ptr1 = "Educative";
    // Only one pointer points to string object
    cout << "ptr1 count = " << ptr1.use_count() << endl;
    // Now second pointer points to the same int object
    shared_ptr<string> ptr2(ptr1);
    cout << "ptr2 is pointing to the ssame object as ptr1. Now counts are : " << endl;
    //Shows the count after two pointer points to the same object.
    cout << "ptr2 count = " << ptr2.use_count() << endl;
    cout << "ptr1 count = " << ptr1.use_count() << endl;
}