#include<iostream>

using namespace std;

class LibraryItem{

    public:

    string title;
    string author;
    bool issued;

    LibraryItem(string t, string a){
        title = t;
        author = a;
        issued = false;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {}

};

class Book : public LibraryItem{

    public:

        Book(string t, string a) : LibraryItem(t,a){ }

        void checkOut(){

        }

        void returnItem(){

        }
        
        void displayDetails(){
            cout << "||----------- Book -----------||" << endl;
            cout << "  Title :- " << title << endl;
            cout << "  Author :- " << author << endl;
            cout << "||----------------------------||" << endl << endl;
        }
        
        
    };
    
class DVD : public LibraryItem{
        
    public:

        DVD(string t, string a) : LibraryItem(t,a){ }

        void checkOut(){

        }

        void returnItem(){

        }

        void displayDetails(){
            cout << "||------------ DVD -----------||" << endl;
            cout << "  Title :- " << title << endl;
            cout << "  Author :- " << author << endl;
            cout << "||----------------------------||" << endl << endl;
        }
        
};
    
class Magazine : public LibraryItem{
        
    public:

        Magazine(string t, string a) : LibraryItem(t,a){ }
        
        void checkOut(){

        }

        void returnItem(){

        }

        void displayDetails(){
            cout << "||--------- Magazine ---------||" << endl;
            cout << "  Title :- " << title << endl;
            cout << "  Author :- " << author << endl;
            cout << "||----------------------------||" << endl << endl;
        }
        
};


int main(){

    LibraryItem *items[10];
    int count = 0;
    int choice;

    do{

        cout << "===========================" << endl;
        cout << "| 1. Add Book             |" << endl;
        cout << "| 2. Add DVD              |" << endl;
        cout << "| 3. Add Magazine         |" << endl;
        cout << "| 4. Display All Items    |" << endl;
        cout << "| 5. Issue Item           |" << endl;
        cout << "| 6. Return Item          |" << endl;
        cout << "| 7. Exit                 |" << endl;
        cout << "===========================" << endl;

        cout << "Enter your choice :- ";
        cin >> choice;

        switch(choice){

            case 1:{
            
                string t,a;
                
                cout << "Enter book title :- ";
                cin >> t;

                cout << "Enter Author :- ";
                cin >> a;

                items[count++] = new Book(t,a);
                cout << "Book added Successfully!" << endl;
                break;
            }

            case 2:{
  
                string t,a;
                
                cout << "Enter DVD title :- ";
                cin >> t;

                cout << "Enter Author :- ";
                cin >> a;
                
                items[count++] = new DVD(t,a);
                cout << "DVD added Successfully!" << endl;
                break;
            }
            
            case 3:{
            
                string t,a;

                cout << "Enter Magazine title :- ";
                cin >> t;

                cout << "Enter Author :- ";
                cin >> a;
                
                items[count++] = new Magazine(t,a);
                cout << "Magazine added Successfully!" << endl;
                break;
            }
            
            case 4:{
                
                for(int i=0 ; i<count ; i++){
                    cout << "Item Index :- " << i << endl;
                    items[i]->displayDetails();
                }
                
                break;
            }
            
            case 5:{

                int index;

                cout << "Enter item index to issue :- ";
                cin >> index;

                items[index]->checkOut();
                cout << "Item Issued Successfully!" << endl;
                
                break;
            }
            
            case 6:{

                int index;

                cout << "Enter item index to return :- ";
                cin >> index;

                items[index]->returnItem();
                cout << "Item Returned Successfully!" << endl;
                
                break;
            }
        
            case 7:{
                
                cout << "Exit the program......" << endl;
                break;
            }

            default:{
                
                cout << "Invalid choice. please try again." << endl;
                break;
            }

        }
    
    } while(choice != 7);

   return 0;

}
