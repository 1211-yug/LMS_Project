#include<iostream>

using namespace std;

class Train{
	
	private:
		int trainNumber;
		char trainName[50];
		char source[50];
		char destination[50];
		char trainTime[10];
		static int trainCount;
		
	public:
		Train(){}
		
		Train(int no, const char name[], const char src[], const char dest[], const char time[]) {
        	trainNumber = no;
        	strcpy(trainName, name);
        	strcpy(source, src);
        	strcpy(destination, dest);
        	strcpy(trainTime, time);
        	trainCount++;
    	}
		
		void inputTrainDetails(){
   			cout << "Enter Train Number :- ";
    		cin >> trainNumber;

    		cout << "Enter Train Name :- ";
    		cin >> trainName;

    		cout << "Enter Source :- ";
    		cin >> source;

    		cout << "Enter Destination :- ";
    		cin >> destination;

    		cout << "Enter Train Time :- ";
    		cin >> trainTime;
    		cout << endl;
		}
		
		void displayTrainDetails(){
        	cout << "Train Number :- " << trainNumber << endl;
        	cout << "Train Name :- " << trainName << endl;
        	cout << "Source :- " << source << endl;
        	cout << "Destination :- " << destination << endl;
        	cout << "Train Time :- " << trainTime << endl;
        	cout << "------------------------------" << endl;
		}
	
};

class RailwaySystem{   
	private:
    	Train trains[100];
    	int totalTrains;

	public:
		void searchTrainByNumber(int number){
        bool found = false;

        for (int i = 0; i < totalTrains; i++){
            if (trains[i].getTrainNumber() == number){
                trains[i].displayTrainDetails();
                found = true;
                break;
            }
        }

        if(!found){
            	cout << "Train with number " << number << " not found!\n";
        	}
    	}
				
};
    
int main(){
		
		RailwaySystem systems;
		Train system;
		int choice,number;
		
		do{
			
			cout << "--- Railway Reservation System Menu ---" << endl;
			cout << "1. Add New Train Record" << endl;
			cout << "2. Display All Train Records" << endl;
			cout << "3. Search Train by Number" << endl;
			cout << "4. Exit" << endl << endl;
			cout << "Enter your choice :- ";
			cin >> choice;
			
			switch(choice){
				
				case 1:
					system.inputTrainDetails();
					break;
					
				case 2:
					system.displayTrainDetails();
					break;
					
				case 3:
					cout << "Enter Train Number to search :- ";
					cin >> number;
					systems.searchTrainByNumber();
					cout << endl;
					break;
					
				case 4:
					cout << "Exiting the system. Goodbye!";
					break;
					
				default:
					cout << "Invalid choice! Try again.";
					break;
			
			}
	
		} while (choice != 4);
	
	
	return 0;
}
