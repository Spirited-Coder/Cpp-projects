#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(void){
	int c;
	cout<<"\t\t\t_______________________________________________________\n\n\n";
	cout<<"\t\t\t               Welcome to the login page				 \n\n\n";
	cout<<"\t\t\t_______________		MENU         _________________\n\n";
	cout<<"																   \n\n";
	cout<<"\t|  Press 1 to LOGIN                     |"<<endl;
	cout<<"\t|  Press 2 to REGISTER                  |"<<endl;
	cout<<"\t|  Press 3 to you forgot your password  |"<<endl;
	cout<<"\t|  Press 4 to EXIT                      |"<<endl;
	cout<<"\n\t\t\t Please enter your choice: ";
	cin>>c;
	
	switch(c){
		case 1:
			login();
			break;
		
		case 2:
			registration();
			break;
			
		case 3:
			forgot();
			break;
			
		case 4:
			cout<<"\n\t\t\t Thank You! \n";
			exit(0);
			break;
			
		default:
			system("cls");
			cout<<"\n Please enter a option of given choice!";
			main();
	}
}

void login(){
	int count;
	string userId, password, id, pass;
	system("cls");
	cout << "\n\t\t\t Please enter the username and password: \n";
	cout << "\t\t\t USERNAME ";
	cin >> userId;
	cout << "\t\t\t PASSWORD ";
	cin >> password;
	
	ifstream input("records.txt");
	
	while(input>>id>>pass){
		if(id == userId && pass == password){
			count=1;
			system("cls");
		}
	}
	input.close();
	
	if(count == 1){
		cout<<userId<<"\n Your login is successful! \n Thanks for login";
		main();
	}
	else{
		cout<<"\n LOGIN ERROR"<<"\n Please check your userId or Password!";
		main();
	}
}

void registration(){
	string ruserId, rpassword, rid, rpass;
	cout<< "\n\t\t\t Enter the username: ";
	cin>>ruserId;
	cout<<"\t\t\t Enter the password: ";
	cin>>rpassword;
	
	ofstream f1("records.txt", ios::app);
	f1<<ruserId<<' '<<rpassword<<endl;
	system("cls");
	cout<<"\t\t\t Registration is successfu! \n";
	main(); 
	
}

void forgot(){
	int option;
	system("cls");
	cout<<"\n\t\t\t Forgot Password? \n";
	cout<<" Press 1 to search your id by username "<<endl;
	cout<<" Press 2 to go back to main menu "<<endl;
	cout<<" Enter your choice: ";
	cin>>option;
	switch(option){
		case 1:
		{
			int count = 0;
			string suserId, sid, spass;
			cout<<"\t\t Enter the username you remembered: ";
			cin>>suserId;
			
			ifstream f2("records.txt");
			while(f2>>sid>>spass){
				if(sid==suserId){
					count = 1;
				}
			}
			f2.close();
			if(count == 1){
				cout<<"\n\n Your account is found! ";
				cout<<"\n\n Your password is: "<<spass;
				main();
			}else{
				cout<<"\n\n Sorry! Your account is not found! ";
				main();
			}
			break;
			}	
		case 2:
			{
				main();
			}
		
		default:
			cout<<"\n\n \t\t Wrong choice! Please try again. ";
	}
}
