#include <iostream>
using namespace std;

class SmartPtr {
    int* ptr; // Actual pointer
        public:
        // for use of expllicit keyword
        explicit SmartPtr(int* p = NULL ) { ptr = p; }

        // Destructor
        ~SmartPtr() { delete (ptr); }

        // Overloading dereferencing operator
        int& operator*() { return *ptr; }
};

int main()
{
    SmartPtr ptr(new int());
    *ptr = 20;
    cout << *ptr;

    return 0;
}