
#include "cmpslib19.h"

#include "easylogging++.h"
INITIALIZE_EASYLOGGINGPP

#ifndef ELEMTYPE  // only do the following define if its not already defined
#define ELEMTYPE  int
#endif

#include "Stack.h"


int main()
{
   InitializeLogger("main2.log");



    // create a stack with no size passed in 
	Stack stack;

    cout << "is the size correct" << endl;


    cout << PF(stack.Capacity() == 4)  <<  endl;
    cout << PF(stack.Size() == 0)  <<  endl;
    cout << PF(stack.Empty() == true) << endl;


    cout << "should only add the first 4 values \n";

	for(int loop=0;loop<6;loop++)
	{ 
		cout << std::boolalpha << "adding "<< loop  << stack.Push(loop) << endl;
	}
    cout << PF(stack.Size() == 4)  <<  endl;
    cout << PF(stack.Full() == true) << endl;

}



