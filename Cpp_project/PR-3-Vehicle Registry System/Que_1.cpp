#include<iostream>

using namespace std;

class Vehicle{
	
		int vehicleID;
		string manufacturer;
		string model;
		int year;
	
	public:
		
		static  int totalvehicles;
		
		Vehicle(){
			
        	vehicleID = 0;
        	manufacturer = "";
        	model = "";
        	year = 0;
        	
    	}
    	
    	Vehicle(int id, string manu, string mod, int y){
    		
    		vehicleID = id;
    		manufacturer = manu;
    		model = mod;
    		year = y;
    		totalvehicles++;
    		
		}
		
		void input(){
			
			cout << "Enter vehicles ID :- ";
			cin >> vehicleID;
			
			cout << "Enter Manufacturer :- ";
			cin >> manufacturer;
			
			cout << "Model :- ";
			cin >> model;
			
			cout << "Year :- ";
			cin >> year;
			
			totalvehicles++;
			
		}
		
		void display(){
			
			cout << "===========================" << endl;
			cout << "ID :- " << vehicleID << endl;
			cout << "Manufacturer :- " << manufacturer << endl;
			cout << "Model :- " << model << endl;
			cout << "Year :- " << year << endl;	
			cout << "===========================" << endl;
			
		}
		
		int getID(){
			return vehicleID;
		}
		
		virtual ~Vehicle(){ }
	
};

int Vehicle::totalvehicles = 0;

class Car : public Vehicle{
	
	string fueltype;
	
	public:
	
		void input(){
			
			Vehicle::input();
			cout << "Enter Fuel Type :- ";
			cin >> fueltype;
			
		}
		
		void display(){
			
			Vehicle::display();
			cout << "Fuel Type :- " << fueltype << endl;	
			cout << "=====================" << endl;
			
		}
	
};

class ElectricCar : public Car{

    int batteryCapacity;

	public:
	    void input(){
	    	
	        Car::input();
	        cout << "Enter Battery Capacity :- ";
	        cin >> batteryCapacity;
	    
		}
	
	    void display(){
	    	
	        Car::display();
	        cout << "Battery Capacity :- " << batteryCapacity << endl;
			cout << "==========================" << endl;
	        
	    }
	
};

class Aircraft{
	int flightRange;

	public:
	    void inputAircraft(){
	    	
	        cout << "Enter Flight Range :- ";
	        cin >> flightRange;
	        
	    }
	
	    void displayAircraft(){
	    	
	        cout << "Flight Range :- " << flightRange << endl;
			cout << "=====================" << endl;
	        
	    }
	
};

class FlyingCar : public Car, public Aircraft{
	
};

class SportsCar : public ElectricCar{

    int topSpeed;

	public:
	    void input(){
	    	
	        ElectricCar::input();
	        cout << "Enter Top Speed :- ";
	        cin >> topSpeed;
	        
	    }
	
	    void display(){
	    	
	        ElectricCar::display();
	        cout << "Top Speed :- " << topSpeed << endl;
			cout << "===================" << endl;
	        
	    }
	
};

class Sedan : public Car{ };

class SUV : public Car{ };

class VehicleRegistry{
	
	Vehicle *vehicles[100];
	int count;
	
	public:
		
		VehicleRegistry(){
        	count = 0;
    	}
    	
    	void addVehicle(){
    		
    		int type;
    		
    		cout << "1. Car" << endl;
    		cout << "2. ElectricCar" << endl;
    		cout << "3. FlyingCar" << endl;
    		cout << "4. SportsCar" << endl;
    		cout << "5. Sedan" << endl;
    		cout << "6. SUV" << endl;
    		
    		cout << "Select Vehivle Type :- ";
    		cin >> type;
    		
    		switch(type){
    			
    			case 1:
    				
    				vehicles[count] = new Car();
    				break;
    				
    			case 2:
    				
    				vehicles[count] = new ElectricCar();
    				break;
    				
    			case 3:
    				
    				vehicles[count] = new FlyingCar();
    				break;
    				
    			case 4:
    				
    				vehicles[count] = new SportsCar();
    				break;
    				
    			case 5:
    				
    				vehicles[count] = new Sedan();
    				break;
    				
    			case 6:
    			
    				vehicles[count] = new SUV();
    				break;
    				
    			default:
    				
					cout << "Invalid Type!" << endl;			
    				break;
    			
			}
			
			vehicles[count]->input();
        	count++;
    		
		}
		
		void searchVehicle(){
			
			int id;
			cout << "Enter ID to search: "; 
			cin >> id;
			for(int i=0 ; i<count ; i++){
		
				count++;
			}
		}
		
		void displayVehicles(){
        	for(int i=0 ; i<count ; i++){
            	vehicles[i]->display();
        	}
    	}
    	
    	~VehicleRegistry(){
        	for(int i=0 ; i<count ; i++){
				delete vehicles[i];
        	}
    	}
		
};

int main(){
	
	VehicleRegistry vr;
	int choice;
	
	do{
		
		cout << "===========================================" << endl;
		cout << "|  1.Add a vehicle (of a different type)  |" << endl;
		cout << "|  2.View all vehicles                    |" << endl;
		cout << "|  3.Search by vehicle Id                 |" << endl;
		cout << "|  4.Exit                                 |" << endl;
		cout << "===========================================" << endl;
		
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;	
			
		switch(choice){
			
			case 1:{
				vr.addVehicle();
				break;	
			}
				
			case 2:{
				vr.displayVehicles();
				break;	
			}
				
			case 3:{
				vr.searchVehicle();
				break;	
			}
					
			case 4:{
				cout << "------------------------" << endl;
            	cout << "Exit the programm.... " << endl;
        		cout << "------------------------" << endl;
            	break;
			}
				
			default:{
				cout << "----------------------------" << endl;
				cout << "Invalid choice! Try again." << endl;
        		cout << "----------------------------" << endl;
				break;
			}
				
		}
		
	}while(choice != 4);
	
	return 0;
}
