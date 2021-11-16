#include "cmpslib19.h"
#include "easylogging++.h"
INITIALIZE_EASYLOGGINGPP

#ifndef ELEMTYPE  // only do the following define if its not already defined

#define ELEMTYPE  int
#endif

#include "fraction.h"
#include "Stack.h"

void ShowMenu()
{

	cout << "  Stack Menu \n";
	cout << "  ===============================================\n";
	
	cout << "  m  Show this menu \n";
	cout << "  x  Exit \n";
	cout << "  ===============================================\n";

}



int main()
{
	// set up the logger 

  InitializeLogger("main1.log");



	Stack stack;
	ELEMTYPE   elem;

	char selection;


	ShowMenu();
	do
	{
		Prompt("  Enter selection: ",selection);
		cout << "\nOption " << selection << " chosen\n";
		try{
			switch(selection)
			{
				

				case 'm':
					ShowMenu();
					break;

				case 'x':
					cout << "Goodbye.\n";
					break;


				default:
					cout << "Invalid menu option!\n";
			}
		}
		catch (const char * exc )
		{
			cout <<"Exception:"<< exc << endl;

		}

	}
	while(selection != 'x');

	
}



