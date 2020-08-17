//test program in C++

//need to ad gcc compiler first


#include<iostream>


int main()
{
    std::cout << "This is a test text" << std::endl;

    int counterOne = 0;
    int counterTwo = 0;

    for (int x = 0; x < 10; x++)
    {
        //These are two ints
        counterOne = -x;
        counterTwo = +x;
    }

    //array of ints. 300 allocated
    //int heapAddresses[300];

    for (int x = 0; x < 100; x++)
    {
        int loaderOne = x;
        //This is a pointer
        int* intPTR = &loaderOne;


        std::cout << "Value: " << *intPTR << std::endl;
        std::cout << "Address: " <<  &intPTR << std::endl;

        int loaderTwo = x;
        //This is a pointer
        int* heapIntPTR = new int(loaderTwo);

        std::cout << "heapIntPTR Value: " << *heapIntPTR << std::endl;
        std::cout << "heapIntPTR Address: " << &heapIntPTR << std::endl;

        std::cout << std::endl;
        
    }

    return 0;
}




/*


// operator delete[] example
#include <iostream>     // std::cout

using namespace std;

class MyClass
{
   public:
    MyClass() 
    { 
        cout << "MyClass constructed\n";
    }

    ~MyClass() 
    { 
        cout << "MyClass destroyed\n"; 
    }
};


int main()
{
    MyClass* pt = nullptr;

    for (int i = 0; i < 100000; i++)
    {
        pt = new MyClass[10];
        //delete[] pt;
                //correct place to delete
    }

    //pt = new MyClass[3];
    //delete[] pt;
        //incorrect place to delete

    return 0;
}


*/