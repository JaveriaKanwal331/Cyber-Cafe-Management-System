#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>
#include<fstream>
using namespace std;

void menue();           
void user();              
void login();           
void header();              
void changepassword();    
void login_page();          
void show_record();            
void search_record();      
void update_record();     
void registration();
void mainmenue();

 string  username ,password,admin, change,
           str1="admin",                          
           str2="admin",                      
           str3="user",                          
           str4="user",                     
           update="new",
           upd="update",
           again="again",
           javeria;

string comp_data[]={"HAIER","DELL","HP","LENOVO","ACER"};    
string comp_loc[]={"A1","B1","C1","D1","E1"};               
string comp_number[]={"789","906","985","456","843"};         

int bill=0,charges=5,input,serial_number,search,comp_num;
int temp=1;


int main(){
 
   header();
   system("cls");
   mainmenue();
 return 0;

}

void menue(){
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t  ===================================================="<<endl;
    cout<<"\t\t\t\t\t             SELECT AN OPTION FROM 1 TO 6             "<<endl;
    cout<<"\t\t\t\t\t  ===================================================="<<endl;
    cout<<"\t\t\t\t\t  1. SHOW COMPUTERS" << endl;            
    cout<<"\t\t\t\t\t  2. UPDATE RECORDS" << endl;           
    cout<<"\t\t\t\t\t  3. SEARCH RECORDS" << endl;           
    cout<<"\t\t\t\t\t  4. RETURN TO LOGIN" << endl;        
    cout<<"\t\t\t\t\t  5. RETURN TO MAIN MENU" << endl;
    cout<<"\t\t\t\t\t  6. EXIT" << endl << endl;             
    cout<<"\t\t\t\t\t  Enter your choice: ";
    cin >> input;
switch(input){

     case 1:
    {
    	system("cls");
    	cout<<"\n\n\n\n\n\n\n\n";
    	cout<<"\t\t\t\t\t  ===================================================="<<endl;
    	cout<<"\t\t\t\t\t               The Records Of Computer Are            "<<endl;
    	cout<<"\t\t\t\t\t  ===================================================="<<endl;
    
       show_record();
	   char c;                            
       cout<<"\t\t\t\t\t  Do YOU WANT TO GO BACK ENTER (Y,y) and TO EXIT Enter (N,n)\n\t\t\t\t\t  Enter: ";
            cin>>c;
         switch (c) 
		 {
        
		case 'y':
        case 'Y':
            menue();
            break;

        case 'n':
        case 'N':
            exit(0);
            break;

        default:
            exit(0);
            break;
        }
         temp=0;


    }
    break;
     case 2:
    {   system("cls");
    	cout<<"\n\n\n\n\n\n\n\n";
    	cout<<"\t\t\t\t\t  ===================================================="<<endl;
    	cout<<"\t\t\t\t\t                    Update records                    "<<endl;
    	cout<<"\t\t\t\t\t  ===================================================="<<endl;
    
        update_record();

    }
    break;
    case 3:
    {   system("cls");
    	cout<<"\n\n\n\n\n\n\n\n";
    	cout<<"\t\t\t\t\t  ===================================================="<<endl;
    	cout<<"\t\t\t\t\t                    Search Record                    "<<endl;
    	cout<<"\t\t\t\t\t  ===================================================="<<endl;
    	search_record();                
    	temp=0;
    }
    break;

   case 4:
    {   system("cls");
        login_page();                                
        temp=0;
    }
    break;
        case 5:
    {
        system("cls");
        mainmenue();                                  
        temp=0;
    }        
    
	break;
    case 6:
    {
        cout<<"\t\t\t\t\t  PRESS 'ENTER' KEY TO EXIT THE PROGRAM"<<endl;
        return;
        temp=0;         
    }


}
if(temp!=0)
  {
    menue();                   
  } 
}


void user()
{


int time;

    system("cls");
    cout << endl << "\t\t\t\t\tCHARGES DETAILS" << endl << endl;
    cout << "\t\t\tFOR 01 MIN, CHARGES ARE 5 RS." << endl << endl;
    cout << "\t\t\tENTER THE TIME YOU WANT TO USE IN MINUTES: ";
    cin >> time;
    cout << endl << "\t\t\tYOU CAN USE COMPUTER NUMBER 1 AT LOCATION A1" << endl << endl;
    cout << "\t\t\t\t\t\tYOUR BILL IS" << endl;
    bill = time * charges;

    cout << "\t\t\t_____________________________________________________" << endl;
    cout << "\t\t\t| Charges per minute |   TIME (min)  |   BILL (Rs.)   |" << endl;
    cout << fixed << setprecision(2);
    cout << "\t\t\t|          "<< charges << "         |        " << time <<"      |       "<< bill << "       |" << endl;
    cout << "\t\t\t______________________________________________________" << endl << endl;

    cout << "\t\t\t  PLEASE PAY THE BILL AT THE COUNTER\n" << endl;
    cout << "\t\t\t******* THANK YOU FOR COMING *******" << endl;





}
void login(){



 cout<<endl<<"\t\t\t\t\t\t\t\t LOGIN PAGE \n\n"<<endl;
 cout<<"\t \t\t\t\t\t ENTER USERNAME & PASSWORD BELOW \n"<<endl;
 cout<<" \t \t\t\t\t\tUSERNAME : ";
 cin>>username;
 cout<<" \t\t\t\t\t\tPASSWORD : ";
 cin>>password;

 if(username==str1 && password==str2)
 {
     menue();

 }
 else if(username==str3 && password==str4)
 {
 user();
 }
else
{
     cout<<" ALERT!"<<endl;
     cout<<endl<<"        YOU ENTER INVALID USERNAME & PASSWORD   "<<endl;
     changepassword();

}


}
void header(){

cout << "\033[1;32m";
    cout <<"\n\n\n";
    cout << "\t\t\t\t\t    ###   #      #  ###    ######  ####              \n";
    cout << "\t\t\t\t\t   #   #   #    #   #  #   #       #   #            \n";
    cout << "\t\t\t\t\t   #         # #    ####   #####   ###             \n";
    cout << "\t\t\t\t\t   #          #     #   #  #       #  #            \n";
    cout << "\t\t\t\t\t   #   #      #     #   #  #       #   #           \n";
    cout << "\t\t\t\t\t    ###       #     ####   ######  #    #           \n";
    cout << "\n";
    cout << "\t\t#         #      #      #      #      #       ####    #####  #         #  #####  #      #  #######   \n";
    cout << "\t\t# #     # #     # #     # #    #     # #     #    #   #      # #     # #  #      # #    #     #      \n";
    cout << "\t\t#  #   #  #    #####    #  #   #    #####    #        ###    #  #   #  #  ####   #  #   #     #      \n";
    cout << "\t\t#   # #   #   #     #   #   #  #   #     #   #  ###   #      #   # #   #  #      #   #  #     #      \n";
    cout << "\t\t#    #    #  #       #  #    # #  #       #   #### #  #####  #    #    #  #####  #    # #     #      \n";
    cout << "\n";
    cout << "\t\t\t\t      #####  #     #   #####   #######  ######  #         # \n";
    cout << "\t\t\t\t     #     #  #   #   #     #     #     #       # #     # # \n";
    cout << "\t\t\t\t     #         # #    #           #     #       # #     # # \n";
    cout << "\t\t\t\t      ####      #      ####       #     #####   #  #   #  # \n";
    cout << "\t\t\t\t          #     #          #      #     #       #   # #   # \n";
    cout << "\t\t\t\t    #     #     #    #     #      #     #       #    #    # \n";
    cout << "\t\t\t\t     #####      #     #####       #     ######  #         # \n";
    
    cout << "\033[0m";
    cout << "\nPress Enter to continue...";
    cin.get();

}
void changepassword(){
     cout<<endl<<"\t\t\t\t\t  TYPE 'update' TO CHANGE USERNAME AND PASSWORD OR TYPE 'again' to LOGIN again\n";
     cout<<"\t\t\t\t\t  Enter: ";
    cin>>change;
 if(change==upd)
 {   system("cls");
        cout<<"\n\n\n\n\n\n\n\n";
    	cout<<"\t\t\t\t\t  ===================================================="<<endl;
    	cout<<"\t\t\t\t\t                    Change Password                   "<<endl;
    	cout<<"\t\t\t\t\t  ===================================================="<<endl;
     cout<<"\t\t\t\t\t  ENTER YOUR NEW USERNAME: ";
     cin>>str1;
     cout<<"\t\t\t\t\t  ENTER YOUR NEW PASSWORD: ";
     cin>>str2;

     cout<<"\t\t\t\t\t  CONGRAGULATIONS YOUR USERNAME & PASSWORD CHANGED SUCESSFULLY "<<endl;
     login();
 }
 else if(change==again)
 {
     system("cls");
     login_page();

 }
 else
    {
    cout<<endl<<"YOU ENTER INVALID ENTRY\n"<<endl;
    exit(0);

 }

}
void login_page(){
string rusername,rpassword;

    cout<<"\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t  ===================================================="<<endl;
    cout<<"\t\t\t\t\t                        Welcome                       "<<endl;
    cout<<"\t\t\t\t\t  ===================================================="<<endl;
    cout<<"\t\t\t\t\t  ENTER USERNAME & PASSWORD BELOW \n"<<endl;
    cout<<"\t\t\t\t\t  USERNAME : ";
    cin>>username;
    cout<<"\t\t\t\t\t  PASSWORD : ";
    cin>>password;

 ifstream read("credentials.txt");
 read>>rusername>>rpassword;
 if(username==rusername && password==rpassword)
 {
     menue();

 }
 else if(username==str3 && password==str4)
 {
 user();
 }
else
{
     cout<<"\t\t\t\t\t  ALERT!"<<endl;
     cout<<endl<<"\t\t\t\t\t  YOU ENTER INVALID USERNAME & PASSWORD   "<<endl;


     changepassword();


  }

}
void show_record(){

        char c;
            cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        	cout<<"\t\t\t\t     |  | Computer Name | Computer Location |   Computer Number   | "<<endl;
        	cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        	cout<<"\t\t\t\t     | 1|\t"<<comp_data[0]<<"\t| \t"<<comp_loc[0]<<"\t    |         " <<comp_number[0] <<"         |"<<endl;
        	cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        	cout<<"\t\t\t\t     | 2|\t"<<comp_data[1]<<"\t|    \t"<<comp_loc[1]<<"\t    |         "<<comp_number[1] <<"         |"<<endl;
        	cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        	cout<<"\t\t\t\t     | 3|\t"<<comp_data[2]<<"\t|    \t"<<comp_loc[2]<<"\t    |         "<<comp_number[2] <<"         |"<<endl;
        	cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        	cout<<"\t\t\t\t     | 4|\t"<<comp_data[3]<<"\t|    \t"<<comp_loc[3]<<"\t    |         " <<comp_number[3] <<"         |"<<endl;
        	cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        	cout<<"\t\t\t\t     | 5|\t"<<comp_data[4]<<"\t|   \t"<<comp_loc[4]<<"\t    |          " <<comp_number[4] <<"        |"<<endl;
        	cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        	cout<<"\t\t\t\t     ***********************THANKYOU FOR USING ********************"<<endl;
          
}

void search_record() {
    int search;
    char choice;

    do {
        cout <<"\t\t\t\t     ENTER THE SERIAL NUMBER OF THE COMPUTER YOU WANT TO SEARCH (1-5)" << endl;
        cout <<"\t\t\t\t     Enter: ";
        cin >> search;

        switch (search) {
            case 1:
                cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
            	cout<<"\t\t\t\t     |  | Computer Name | Computer Location |   Computer Number   | "<<endl;
        	    cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        		cout<<"\t\t\t\t     | 1|\t"<<comp_data[0]<<"\t| \t"<<comp_loc[0]<<"\t    |         " <<comp_number[0] <<"         |"<<endl;
        		cout<<"\t\t\t\t     _______________________________________________________________"<<endl;
        		cout<<endl<<"\t\t\t\t     *****************THANKYOU FOR USING ***************"<<endl;
                cout << "\n\t\t\t\t     Do you want to go back to main menu? (Y/N): ";
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    menue(); 
                } else {
                    cout << "\n\t\t\t\t     Exiting the program. Thank you!\n";
                    exit(0); 
                }
                break;

            case 2:
                 cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
            	cout<<"\t\t\t\t     |  | Computer Name | Computer Location |   Computer Number   | "<<endl;
        	    cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        		cout<<"\t\t\t\t     | 1|\t"<<comp_data[1]<<"\t| \t"<<comp_loc[1]<<"\t    |         " <<comp_number[1] <<"         |"<<endl;
        		cout<<"\t\t\t\t     _______________________________________________________________"<<endl;
        		cout<<endl<<"\t\t\t\t     ***************THANKYOU FOR USING *************"<<endl;
               cout << "\n\t\t\t\t     Do you want to go back to main menu? (Y/N): ";
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    menue(); 
                } else {
                    cout << "\n\t\t\t\t     Exiting the program. Thank you!\n";
                    exit(0); 
                }
                break;
                
            case 3:
                 cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
            	cout<<"\t\t\t\t     |  | Computer Name | Computer Location |   Computer Number   | "<<endl;
        	    cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        		cout<<"\t\t\t\t     | 1|\t"<<comp_data[2]<<"\t| \t"<<comp_loc[2]<<"\t    |         " <<comp_number[2] <<"         |"<<endl;
        		cout<<"\t\t\t\t     _______________________________________________________________"<<endl;
        		cout<<endl<<"\t\t\t\t     ***************THANKYOU FOR USING *************"<<endl;
                cout << "\n\t\t\t\t     Do you want to go back to main menu? (Y/N): ";
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    menue(); 
                } else {
                    cout << "\n\t\t\t\t     Exiting the program. Thank you!\n";
                    exit(0); 
                }
                break;                


            case 4:
                cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
            	cout<<"\t\t\t\t     |  | Computer Name | Computer Location |   Computer Number   | "<<endl;
        	    cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        		cout<<"\t\t\t\t     | 1|\t"<<comp_data[3]<<"\t| \t"<<comp_loc[3]<<"\t    |         " <<comp_number[3] <<"         |"<<endl;
        		cout<<"\t\t\t\t     _______________________________________________________________"<<endl;
        		cout<<endl<<"\t\t\t\t     ***************THANKYOU FOR USING *************"<<endl;
                 cout << "\n\t\t\t\t     Do you want to go back to main menu? (Y/N): ";
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    menue();
                } else {
                    cout << "\n\t\t\t\t     Exiting the program. Thank you!\n";
                    exit(0); 
                }
                break;


            case 5:
                 cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
            	cout<<"\t\t\t\t     |  | Computer Name | Computer Location |   Computer Number   | "<<endl;
        	    cout<<"\t\t\t\t     ______________________________________________________________"<<endl;
        		cout<<"\t\t\t\t     | 1|\t"<<comp_data[4]<<"\t| \t"<<comp_loc[4]<<"\t    |         " <<comp_number[4] <<"         |"<<endl;
        		cout<<"\t\t\t\t     _______________________________________________________________"<<endl;
        		cout<<endl<<"\t\t\t\t     ***************THANKYOU FOR USING *************"<<endl;
                cout << "\n\t\t\t\t     Do you want to go back to main menu? (Y/N): ";
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    menue(); 
                } else {
                    cout << "\n\t\t\t\t     Exiting the program. Thank you!\n";
                    exit(0); 
                }
                break;                
            

            default:
                cout << "\n\t\t\t\t     YOU ENTERED AN INVALID NUMBER!\n";
                break;
        }
    } while (true);
}

void update_record(){
     cout<<"\t\t\t\t\t  Your previous records are shown below"<<endl;
    show_record();
    cout<<"\t\t\t\t\t  Do you want to update records ? 'yes; or 'no'\n";
    cout<<"\t\t\t\t\t  Enter: ";
    cin>>javeria;
    if( javeria=="yes" )
        {

            cout<<"\t\t\t\t\t  Which computer number's records you want to update ?"<<endl;
            cout<<"\t\t\t\t\t  Enter: ";
            cin>>comp_num;
            switch(comp_num){

            case 1 :
                {
                   cout<<endl<<"\t\t\t\t\t  YOU CAN CHANGE THE : "<<endl;
                   cout<<"\t\t\t\t\t  1.Name of computer"<<endl;
                   cout<<"\t\t\t\t\t  2.Location of computer"<<endl;
                   cout<<"\t\t\t\t\t  3.serial number of computer \n"<<endl;

                    cout<<"\t\t\t\t\t  ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cout<<"\t\t\t\t\t  Enter: ";
                    cin>>comp_data[0] ;
                    cout<<"\t\t\t\t\t  ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cout<<"\t\t\t\t\t  Enter: ";
                    cin>>comp_loc[0];
                    cout<<"\t\t\t\t\t  ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cout<<"\t\t\t\t\t  Enter: ";
                    cin>>comp_number[0];
                    cout<<endl<<"\t\t\t\t\t  *****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;

                }
                 break;

            case 2 :
                {
                    cout<<endl<<"\t\t\t\t\t  YOU CAN CHANGE THE : "<<endl;
                   cout<<"\t\t\t\t\t  1.Name of computer"<<endl;
                   cout<<"\t\t\t\t\t  2.Location of computer"<<endl;
                   cout<<"\t\t\t\t\t  3.serial number of computer \n"<<endl;

                    cout<<"\t\t\t\t\t  ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cout<<"\t\t\t\t\t  Enter: ";
                    cin>>comp_data[1] ;
                    cout<<"\t\t\t\t\t  ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cout<<"\t\t\t\t\t  Enter: ";
                    cin>>comp_loc[1];
                    cout<<"\t\t\t\t\t  ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cout<<"\t\t\t\t\t  Enter: ";
                    cin>>comp_number[1];
                    cout<<endl<<"\t\t\t\t\t  *****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;
                }
                                   break;
            case 3 :
                {
                    cout<<endl<<"YOU CAN CHANGE THE : "<<endl;
                   cout<<"1.Name of computer"<<endl;
                   cout<<"2.Location of computer"<<endl;
                   cout<<"3.serial number of computer \n"<<endl;

                    cout<<"\t\t\t\t\t  ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cout<<"\t\t\t\t\t  Enter: ";
                    cin>>comp_data[2] ;
                    cout<<"\t\t\t\t\t  ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cout<<"\t\t\t\t\t  Enter: ";
                    cin>>comp_loc[2];
                    cout<<"\t\t\t\t\t  ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cout<<"\t\t\t\t\t  Enter: ";
                    cin>>comp_number[2];
                    cout<<endl<<"\t\t\t\t\t  *****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;
                }
                 break;

            case 4 :
                {
                    cout<<endl<<"\t\t\t\t\t  YOU CAN CHANGE THE : "<<endl;
                   cout<<"\t\t\t\t\t  1.Name of computer"<<endl;
                   cout<<"\t\t\t\t\t  2.Location of computer"<<endl;
                   cout<<"\t\t\t\t\t  3.serial number of computer \n"<<endl;

                    cout<<"\t\t\t\t\t  ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cin>>comp_data[3] ;
                    cout<<"\t\t\t\t\t  ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cin>>comp_loc[3];
                    cout<<"\t\t\t\t\t  ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cin>>comp_number[3];
                    cout<<endl<<"\t\t\t\t\t  *****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;
                }
                    break;
            case 5 :
                {
                    cout<<endl<<"\t\t\t\t\t  YOU CAN CHANGE THE : "<<endl;
                   cout<<"\t\t\t\t\t  1.Name of computer"<<endl;
                   cout<<"\t\t\t\t\t  2.Location of computer"<<endl;
                   cout<<"\t\t\t\t\t  3.serial number of computer \n"<<endl;

                    cout<<"\t\t\t\t\t  ENTER THE NEW NAME OF COMPUTER" <<endl;
                    cin>>comp_data[4] ;
                    cout<<"\t\t\t\t\t  ENTER NEW LOCATION OF COMPUTER  "<<endl;
                    cin>>comp_loc[4];
                    cout<<"\t\t\t\t\t  ENTER NEW SERIAL NUMBER OF COMPUTER "<<endl;
                    cin>>comp_number[4];
                    cout<<endl<<"\t\t\t\t\t  *****YOUR DATA UPDATE SUCESSFULLY*****"<<endl;
                }
                                   break;
            default : cout<<"!!! Please enter the number from above ranges !!!"<<endl;

            }

        }
    else if( javeria=="no" )
        {
            menue();
        }
}
void registration(){
    string rusername,rpassword;
    cout<<"\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t  ===================================================="<<endl;
    cout<<"\t\t\t\t\t                      Registration                    "<<endl;
    cout<<"\t\t\t\t\t  ===================================================="<<endl;
    cout<<"\t\t\t\t\t  ENTER THE USERNAME: ";
    cin>>rusername;
    cout<<"\t\t\t\t\t  ENTER THE PASSWORD: ";
    cin>>rpassword;

    ofstream write("credentials.txt");
    write<<rusername<<endl<<rpassword;
    write.close();

}
void mainmenue(){
	
     int mvalue;
    cout<<"\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t  ===================================================="<<endl;
    cout<<"\t\t\t\t\t                        Welcome                       "<<endl;
    cout<<"\t\t\t\t\t  ===================================================="<<endl;
    cout<<"\t\t\t\t\t  CHOOSE ANY ONE FOM FOLLOWING "<<endl;
    cout<<"\t\t\t\t\t  1. LOGIN "<<endl;
    cout<<"\t\t\t\t\t  2. REGISTERATION "<<endl;
    cout<<"\t\t\t\t\t  3. EXIT \n"<<endl;
    cout<<"\t\t\t\t\t  Enter Your Choice: ";
    cin>>mvalue;

    switch(mvalue)
    {
    case 1 :
        {    system("cls");
            login_page();
        }
        break;
    case 2:
        {
            system("cls");
            registration();
            system("cls");
            mainmenue();
        }
        break;
    case 3:
        {
            exit(0);
        }
    }


}

