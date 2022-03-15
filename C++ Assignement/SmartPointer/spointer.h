//#include <iostream>
//using namespace std;
//
//// A generic smart pointer class
//template <class T>
//class SmartPtr 
//{
//    T* ptr; // Actual pointer
//public:
//    // Constructor
//    explicit SmartPtr(T* p);
//
//    void show();
//    // Destructor
//    ~SmartPtr();
//
//
//    // Overloading dereferencing operator
//    T& operator*();
//    // Overloading = operator
//    T& operator=(T* p);
//    // Overloading arrow operator so that
//
//    T* operator->();
//};