
#include "cmpslib19.h"

#include "easylogging++.h"
INITIALIZE_EASYLOGGINGPP

#ifndef ELEMTYPE  // only do the following define if its not already defined
#define ELEMTYPE  int
#endif

#include "Stack.h"


int main()
{
   InitializeLogger("main3.log");



    // create a stack with size of 8 passed in 
	Stack stack(8);
    cout << "is the size correct" << endl;


    cout << PF(stack.Size() == 0)  <<  endl;
    cout << PF(stack.Capacity() == 8)  <<  endl;


    cout << "should only add the first 8 values \n";

	for(int loop=0;loop<10;loop++)
	{ 
		cout << std::boolalpha << "adding "<< loop  << stack.Push(loop) << endl;
	}

}



