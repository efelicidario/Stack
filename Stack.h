#pragma once
#include "cmpslib19.h"
#include "easylogging++.h"


#ifndef ELEMTYPE  // only do the following define if its not already defined, we may have already defined it to be string or fraction when we compile

#define ELEMTYPE  int
#endif

class Stack
{
	private:
		ELEMTYPE * arr;
		int TopIndex;
		int capacity;


        public:
        Stack()
        {
            LOG(INFO) << "Start " <<  __PRETTY_FUNCTION__ << endl;
            capacity = 4;
            arr = new ELEMTYPE[capacity];
            counter = 0;
            LOG(INFO) << "End " <<  __PRETTY_FUNCTION__ << endl;
        }
        // you will need a constructor it will allow the user to pass in the size/capacity of the container as the only parameter
        // have this default to the value of 4
        Stack(int val)
        {
            LOG(INFO) << "Start " <<  __PRETTY_FUNCTION__ << endl;
            capacity = val;
            arr = new ELEMTYPE[capacity];
            counter = 0;
            LOG(INFO) << "End " <<  __PRETTY_FUNCTION__ << endl;
        }

        // a public function that returns true or false if the container is empty
        bool empty()
        {
            LOG(INFO) << "Start " <<  __PRETTY_FUNCTION__ << endl;
            bool confirm;
            if (counter == 0)
                confirm = true;
            else
                confirm = false;
            LOG(INFO) << "End " <<  __PRETTY_FUNCTION__ << endl;
            LOG(INFO) << "Returning " << confirm <<  __PRETTY_FUNCTION__ << endl;
            return confirm;
        }

        // a public function that returns true or false if the container is full
        bool full()
        {
            LOG(INFO) << "Start " <<  __PRETTY_FUNCTION__ << endl;
            bool confirm;
            if (counter == capacity)
                confirm = true;
            else
                confirm = false;
            LOG(INFO) << "End " <<  __PRETTY_FUNCTION__ << endl;
            LOG(INFO) << "Returning " << confirm <<  __PRETTY_FUNCTION__ << endl;
            return confirm;
        }

        // a public function that returns the capacity of the stack
        int getCap()
        {
            LOG(INFO) << "Start " <<  __PRETTY_FUNCTION__ << endl;
            LOG(INFO) << "End " <<  __PRETTY_FUNCTION__ << endl;
            LOG(INFO) << "Returning " << capacity <<  __PRETTY_FUNCTION__ << endl;
            return capacity;
        }

        // a function that returns the number of elements currently in the stack
        int size()
        {
            LOG(INFO) << "Start " <<  __PRETTY_FUNCTION__ << endl;
            LOG(INFO) << "End " <<  __PRETTY_FUNCTION__ << endl;
            return counter;
        }

        // a public function that allows a value to be added or  "pushed" into the stack, returns
        // true or false if push operation was successful
        bool push(ELEMTYPE val)
        {
            LOG(INFO) << "Start " <<  __PRETTY_FUNCTION__ << endl;
            bool confirm = false;
            if (!full())
            {
                arr[counter] = val;
                counter++;
                confirm = true;
            }
            LOG(INFO) << "End " <<  __PRETTY_FUNCTION__ << endl;
            LOG(INFO) << "Returning " << confirm <<  __PRETTY_FUNCTION__ << endl;
            return confirm;
        }

        // a public function that will remove or "pop' a value from the stack
        // true or false if pop operation was successful
        bool pop()
        {
            LOG(INFO) << "Start " <<  __PRETTY_FUNCTION__ << endl;
            bool confirm = false;
            if (!empty())
            {
                //arr[counter-1] = NULL;
                counter--;
                confirm = true;
            }
            LOG(INFO) << "End " <<  __PRETTY_FUNCTION__ << endl;
            LOG(INFO) << "Returning " << confirm <<  __PRETTY_FUNCTION__ << endl;
            return confirm;
        }

        // a public function that returns a reference to the top value on the stack
        // if the stack is empty return the value at index 0
        // blankline
        ELEMTYPE top()
        {
            LOG(INFO) << "Start " <<  __PRETTY_FUNCTION__ << endl;
            ELEMTYPE val = arr[0];
            if (!empty())
                val = arr[counter-1];
            LOG(INFO) << "End " <<  __PRETTY_FUNCTION__ << endl;
            LOG(INFO) << "Returning " << val <<  __PRETTY_FUNCTION__ << endl;
            return val;
        }

        // a public ToString() function that matches the examples output
        string ToString();





};


