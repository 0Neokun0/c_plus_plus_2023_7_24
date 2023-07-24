// Unique Pointers
#include <iostream>
#include <memory>

using namespace std;

int main ()
{
    unique_ptr<int> Obj1 (new int(65));
    unique_ptr<int> Obj2 (new int(90));

    cout << "Before Swapping" << '\n';
    cout << "Obj1: " << *Obj1 << '\n';
    cout << "Obj2: " << *Obj2 << '\n';

    swap(Obj1, Obj2);

    cout << "After Swapping" << '\n';
    cout << "Obj1: " << *Obj1 << '\n';
    cout << "Obj2: " << *Obj2 << '\n';

    return 0;
}