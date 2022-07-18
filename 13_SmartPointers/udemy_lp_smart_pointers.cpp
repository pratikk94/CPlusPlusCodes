// run command : g++ -std=c++14 udemy_lp_smart_pointers.cpp 


// issues with raw pointers
// Absolute flexibility with memory management
// Allocation
// Deallocation
// Life time management


// Some potentialy serious problems
// 1. Uninitialized or raw pointers
// 2. Memory leaks
// 3. Dangling pointers
// 4. Not exception safe

// Ownership?
// 1. who owns the pointer?
// 2. when should a pointer be deleted?

// Smart pointers?
// 1. Objects
// 2. Can only point to heal allocated memory
// 3. Automatically call delete when no longer 
//    needed
// 4. Adhere to RAII principles.

// RAII resource acquisition is initialization

// Types of c++ smart pointers
// 1. unique pointer 
// 2. shared pointer
// 3. weak pointer
// 4. auto pointer (Deprecated)


// 1. UNIQUE POINTER:
//    
//    Declaration():
//  
//    std::unique_ptr<T> obj = std::make_unqiue<T>(constructor call)
//
//    Features :   
//        1. points to an object of type T on the heap
//        2. Unique. There can only be one 
//           unique_ptr<t> pointing to the object on
//           heap.        
//        3. Owns whta it points to
//        4. Cannot be assigned or copied.
//        5. Can be moved.
//        6. When pointer is destroyed what it point to
//           is also destroyed.  

// 2. Shared POINTER:
//    
//    Declaration():
//  
//    std::shared_ptr<T> obj = std::make_unqiue<T>(constructor call)
//
//    Features :   
//        1. points to an object of type T on the heap
//        2. Not Unique. There can be many shared 
//           pointers to the same object on the heap
//           unique_ptr<t> pointing to the object on
//           heap.        
//        3. Establishes shared ownership.
//        4. Can be assigned or copied.
//        5. Can be moved.
//        6. When pointer is destroyed what it point to
//           is also destroyed.  
//        7. use_count method returns the number of 
//           shared_ptr objects managing the heap 
//           object when it returns 0 managed object on
//           the heap is destroyed.                   
//

#include<iostream>
#include<memory>

using namespace std;

class Base{

    public:
        Base();
        Base(string hello){
            cout<<hello<<endl;
        }
        void basicMethod(){
            cout<<"Basic method called"<<endl;
        }
};


int main(){
    std::unique_ptr<Base> ptr = std::make_unique<Base>("Hello");
    ptr->basicMethod();

    std::shared_ptr<int> ptr2 = std::make_shared<int>(100);
    cout<<ptr2.use_count()<<endl;

    std::shared_ptr<int> ptr3 {ptr2};
    cout<<ptr2.use_count()<<endl;

    ptr2.reset();

    cout<<ptr2.use_count()<<endl;
    cout<<ptr3.use_count()<<endl;

    return 0;
}