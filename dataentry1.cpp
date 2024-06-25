#include <iostream>                                                    //Standard input-output library
#include <stdlib.h>                                                    //Standard library
#include <chrono>                                                      // Time Library
#include <thread>                                                      //Delay Library
#include <fstream>                                                     // File Storage Library
#include <iomanip>                                                     // Formatting Manipulator library
#include <string>                                                      // String function library
using namespace std;                                                   // namespace library file
// ----------------------------User Define function -----------------------------//


void Celsius(double Temp) {                                               // Temperature convering function

 	
	double Temperature;                                                   // variable declaration
	Temperature = 5 * (Temp -32) / 9;									// formular: convert fahrenheits to celsius
	cout << Temperature << "Celsius" << endl;                           // printing out functions output
}


void Miles(double Dist){                                                // Distance convering function
	 
	
	double Distance;                                                    // variable declartion
	Distance = Dist / 1.6;                                              // formular: kilomteres to miles
	cout << Distance << "Miles" << endl;                                // printing out functions input
	

}


void task()                                                              // Delay function
{
	for(int i = 1; i <= 5; i++)
	{
		
		std::cout <<"Loading ... " <<std::endl;
		//wait for 2 seconds
		std::this_thread::sleep_for(std::chrono::seconds(2));
	}
}
// ---------------------User defined functions end-----------------------//


int main() {
	string Operator;                                                        // variable declaration
	bool found = false;                                                     // variable declaration
	int counter = 0;                                                        // variable declaration
	
	
	string adminName[5] = {"Ama", "Kofi", "John", "Luffy", "Kaido"};
	
	
	system("CLS");
	cout << "|-----------------------------Welcome-------------------------------|" << endl;
	app : cout << "                	Tobias Medical Center					" << endl;
	cout << "                     ----------------------------------		    " << endl;
	cout << "Admin's firstname is required to Access System \n = ";
				cin >> Operator;
	
	// ------For Loop to circle through names in Array :adminName
	
	for(const std::string &admin : adminName){
		
		// ----- checking if name entered exist in arrayName through pointer variable admin
		if(admin == Operator)
		{		
		
			found = true;	
    	}
		
	}	
	
	//If statement 
	if(found)
	
	
{
	
		cout << "-------------------Admin Authentication Successful-------------------" << endl;
		
		std::thread taskThread(task);                                      // Calling the task function in a separate thread
		
		// ---- Waiting for 10 seconds (5 iteartions * 2 sconds each)
		std::this_thread::sleep_for(std::chrono::seconds(10));
		
		// -----Join the task thread
		taskThread.join();
		
		// clearing console
		system("CLS");
		
	}
	else
	{
	
	cout << endl;
	cout <<"--------------------Error !! Error!! --------------------- "   << endl;
	cout << "-----------------Admin Authentication Failed-------------"    << endl;
	
	
	//-- While loop
	while
	(counter <= 2)
		{
			counter++;                                                               // updating counter
			goto app;                                                                // Goto statement
			
			
		}
		cout << endl;
		cout << "----------Program will terminate in 5 seconds ----------" <<endl;
		cout << "-----------------Too Many Tried Attempts------------------" << endl;
		cout << "                ------------------------                   " << endl;
		cout << endl;
		
		sleep(5);                                                          // delaying console for 5 seconds
	
		return 0;	
	}


		cout << "|-----------------------------------------------------------|" << endl;
		cout << "|----------------------Tobias Data Center-------------------|" << endl;
		cout << "|----Please fill out the following page for each patient----|" << endl;
		cout << endl;
		cout << "|-------------------------- FORM ---------------------------|" << endl;
		
		int patientID[5];                                                                 // creating arrays to hold patient ID
  		
		// CREATING ARRAY TO HOLD PATIENT DETAILS
		std::string Fullname[100];
		std::string Gender[100];
			int Age[100];
			double BodyTemp[100];
			double Distance[100];
			
		// ------- creating a string to display Patient Information
		string Information = "PatID \t Patient Fullname \t Gender \t Age \t BodyTemp \t Distance \t";
		
		
		                                                          //  Terminating program
		// ---- 	Initialization Patient iD array with the values of 1 through 5                                                          
		for(int count = 0; count < 5; count++)
		{
			
		patientID[count] = count +1;                                                          	
		}
		  
		  for(int count = 0; count < 5; count++)
		  {
		  	cout <<"Patient ID"  <<patientID[count] << endl;
		  	cout <<"Enter Patient fullname \n = ";
		  	cin.ignore();
			  std::getline(std::cin,Fullname[count]);
			  cout<< endl;		  
		  
		  	cout <<"Enter Patient Gender \n = ";
		  	cin >> Gender[count];
		  	cout << endl;
		  	
		  	cout << "Enter Patient Age \n = ";
		  	cin >> Age[count];
		  	cout << endl;
		
		
		
			cout <<"Enter Patient Body Temperature ------- Fahreinheit --- \n = " << endl;
			cin >> BodyTemp[count];
			Celsius(BodyTemp[count]);
			cout << endl;
		
			cout <<"Enter Patient Distance of Travel --Kilometers ------- \n = " << endl;
			cin >> Distance[count];
			Miles(Distance[count]);                                                   // -- Calling the Mile function
			cout << endl;
			cout << endl;
			
			
			                                                // --- delaying console for 5 seconds

		   }
		   		sleep(5);                                                // --- delaying console for 5 seconds

		system("CLS");                                           // --- Clearing console
		cout << "----------------Processing all Data------------------" << endl;
		cout << "--------------------Please Wait----------------------" << endl;	
		sleep(5);                                                // --- delaying console for 5 seconds
		system("CLS");
		//Displaying Patient 
		
	// Displaying the details f the patients entered
	for(int count = 0; count < 5; count++){
		
		
		cout << "\n " <<patientID[count];
		cout << fixed << showpoint << setprecision(2);
		
		cout << "\t " <<Fullname[count];
		cout << "\t " <<Gender[count];	
		cout << "\t " <<Age[count];
		cout << "\t " <<BodyTemp[count];
		cout << "\t " <<Distance[count];
		
		
		cout << "\n " ;
		if(count == 4)
		cout << "Daily Input Limit Reached " << endl;
	}
		  
	return 0;

}

