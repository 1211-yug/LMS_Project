#include<iostream>

using namespace std;

class BankAccount{

    public:

        int accno;
        string name;
        double balance;

        BankAccount(int a, string n, double b) {
            accno = a;
            name = n;
            balance = b;
        }

        void deposit(){
            double amount;
            cout << "Enter amount to deposit :- ";
            cin >> amount;

            balance = balance + amount;
            cout << "Amount deposited Successfully!" << endl;
        }

        void withdraw(){
            double amount;
            cout << "Enter amount to withdraw :- ";
            cin >> amount;            

            if(amount > balance){
                cout << "Insufficient Balance!" << endl;;
            }else{
                balance = balance - amount;
                cout << "Withdrawal Successful!" << endl;
            }
        }

        void display(){
            cout << "============================" << endl;
            cout << "Account No :- " << accno << endl;
            cout << "Name :- " << name << endl;
            cout << "Balance :- " << balance << endl;
            cout << "============================" << endl;
        }

        void calculateInterest(){
            cout << "No Interest for this account" << endl;
        }

        virtual ~BankAccount(){ }
        
};

class SavingsAccount : public BankAccount{

    double rate;

    public:

        SavingsAccount(int a, string n, double b, double r) : BankAccount(a,n,b) {
            rate = r;
        }

        void calculateInterest(){ 
            double interest = balance * rate;
            balance = balance + interest;
            cout << "Interest added to the account!" << endl;
        }

};

class CheckingAccount : public BankAccount{

    double overdraft;

    public:

       CheckingAccount(int a, string n, double b, double o) : BankAccount(a,n,b) {
            overdraft = o;
        }

        void withdraw(double amount) {
            if(amount <= balance + overdraft) {
                balance = balance - amount;
                cout << "Withdraw with overdraft allowed" << endl;
            }else{
                cout << "Overdraft limit exceeded" << endl;
            }
        }

};

class FixedDepositAccount : public BankAccount {
    
    int months;
    double rate;

    public:
        FixedDepositAccount(int a, string n, double b, int m, double r) : BankAccount(a,n,b) {
            months = m;
            rate = r;
        }

        void calculateInterest(){
            double interest = balance * ( rate / 100) * (months / 12.0);
            balance = balance + interest;
            cout << "Interest added to the Fixed Deposit account!" << endl;
        }
        
};

int main(){

    
    BankAccount *arr[10];
    int choice;
    int count = 0;

    do{

        cout << "=====================================" << endl;
        cout << "| 1. Create savings Account         |" << endl;
        cout << "| 2. Create Checking Account        |" << endl;
        cout << "| 3. Create Fixed Deposit Account   |" << endl;
        cout << "| 4. Display Account                |" << endl;
        cout << "| 5. Deposit                        |" << endl;
        cout << "| 6. Withdraw                       |" << endl;
        cout << "| 7.Calculate Interest              |" << endl;
        cout << "| 8. Exit                           |" << endl;
        cout << "=====================================" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:{

                int a;
                string n;
                double b;
                
                cout << endl;
                cout << "Enter Account Number :- ";
                cin >> a;
                
                cout << "Enter Account Holder Name :- ";
                cin >> n;
                
                cout << "Enter Initial Balance :- ";
                cin >> b;
                cout << endl;

                arr[count++] = new SavingsAccount(a, n, b , 0.05);
                cout << "Savings Account Created" << endl;
                break;
            }

            case 2:{

                int a;
                string n;
                double b, o;
                
                cout << endl;
                cout << "Enter Account Number :- ";
                cin >> a;
                
                cout << "Enter Account Holder Name :- ";
                cin >> n;
                
                cout << "Enter Initial Balance :- ";
                cin >> b;
                
                cout << "Enter Overdraft Limit :- ";
                cin >> o;
                cout << endl;


                arr[count++] = new CheckingAccount(a,n,b,o);
                cout << "Checking Account Created" << endl;
                break;
            }
                
            case 3:{

                int a,m;
                string n;
                double b,r;

                cout << endl;
                cout << "Enter Account Number :- ";
                cin >> a;
                
                cout << "Enter Account Holder Name :- ";
                cin >> n;
                
                cout << "Enter Initial Balance :- ";
                cin >> b;
                
                cout << "Enter Interest Rate :- ";
                cin >> r;
                cout << endl;

                arr[count++] = new FixedDepositAccount(a,n,b,m,r);
                cout << "FD Account Created" << endl;
                break;
            }
                
            case 4:{

                for(int i=0 ; i<count; i++){
                    arr[i]->display();
                }
                break;
            }
            
            case 5:{
                
                int a;
                for(int i=0 ; i<count; i++){
                    cout << "Enter Account Number :- ";
                    cin >> arr[i]->accno;
                    arr[i]->deposit();
                }
                break;
            }
            
            case 6:{
                
                int a;
                for(int i=0 ; i<count; i++){
                    cout << "Enter Account Number :- ";
                    cin >> arr[i]->accno;
                    arr[i]->withdraw();
                }
                break;
            }
                
            case 7:{

                int a;
                for(int i=0 ; i<count; i++){
                    cout << "Enter Account Number :- ";
                    cin >> arr[i]->accno;
                    arr[i]->calculateInterest();
                }
                break;
            }

            case 8:{
                cout << "Exiting...." << endl;
                break;
            }

            default:{
                cout << "Invalid Choice!" << endl;
            }

        }


    }while(choice != 8);

    return 0;
}
