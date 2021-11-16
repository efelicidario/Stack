
#include "cmpslib19.h"
#include "easylogging++.h"
INITIALIZE_EASYLOGGINGPP

#ifndef ELEMTYPE  // only do the following define if its not already defined
#define ELEMTYPE  int
#endif

#include "Stack.h"


int main()
{
   InitializeLogger("main4.log");



	Stack stack(8000);
	for(int loop=0;loop<7000;loop++)
		{ 
			 cout << std::boolalpha << "adding "<< loop  << stack.Push(loop) << endl;
		}


    cout << PF(stack.Capacity() == 8000) << endl;
    cout << PF(stack.Size() == 7000) << endl;


	for(int loop=0;loop<1000;loop++)
		stack.Pop();

    cout << PF(stack.Size() == 6000) << endl;
}



