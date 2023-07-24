#ifndef __MYSTRING_H_
#define __MYSTRING_H_

class Mystring
{
    private:
        char *str; // pointer to a char[] that holds a C-style string
    public:
        Mystring();                             // No-args constructor
        Mystring(const char *s);                // Overloaded contsructor
        Mystring(const Mystring &source);       // Copy constructor
        ~Mystring();                            // Destructor    
        void display() const;                 
        int get_length() const;                 // getters
        const char *get_str() const;
};

#endif