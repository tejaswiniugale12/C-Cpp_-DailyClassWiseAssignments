//#include <iostream>
//#include "spointer.h"
//
//template <class T>
//
//    // Constructor
//SmartPtr::SmartPtr(T* p = NULL) { ptr = p; }
//void SmartPtr::show() { cout << *ptr; }
//    // Destructor
//SmartPtr::~SmartPtr() { delete (ptr); }
//
//
//    // Overloading dereferencing operator
// T& SmartPtr::SmartPtr::operator*() { return *ptr; }
//    // Overloading = operator
// T& SmartPtr::operator=(T* p) { ptr = p; return *ptr; }
//    // Overloading arrow operator so that
//   
//    T* operator->() { return ptr; }
