#include<iostream>
using namespace std;

int main(void){
	int choice;
	int Qchicken=50, Qchowmin=50, Qfish=50, Qegg=50, Qpasta=50;
	int Schicken=0, Schowmin=0, Sfish=0, Segg=0, Spasta=0;
	int Pchicken, Pchowmin, Pfish, Pegg, Ppasta;
	int Total_chicken=0, Total_chowmin=0, Total_fish=0, Total_egg=0, Total_pasta=0;
	cout<<"\n\n                               MY RESTUARENT                  ";
	cout<<"\n                                    MENU                       ";
	Pchicken = 50;
	Pchowmin = 70;
	Pfish = 90;
	Pegg = 80;
	Ppasta = 110;
	m:
	cout<<"\n\n ITEMS                                                          PRICE";
	cout<<"\n 1) Chicken Roll                                                "<<Pchicken;
	cout<<"\n 2) Chowmin                                                     "<<Pchowmin;
	cout<<"\n 3) Fish Finger(4 pieces)                                       "<<Pfish;
	cout<<"\n 4) Egg Roll                                                    "<<Pegg;
	cout<<"\n 5) Pasta                                                       "<<Ppasta;
	
	cout<<"\n\n Enter the item number you want to eat or press 6 to stop ordering: ";
	cin>>choice;
	switch(choice){
		case 1:
			{
				int amount;
				cout<<"\n\n Please enter the number of Chicken Roll you want to order: ";
				cin>>amount;
				if(Qchicken-Schicken >= amount){
					Total_chicken = amount*Pchicken;
					Schicken += amount;
				}else{
					system("cls");
					cout<<"\n Sorry! We have only "<<Qchicken-Schicken<<" many chicken rolls available.";
					main();
					
				}
				break;
			}
		case 2:
			{
				int amount;
				cout<<"\n\n Please enter the number of plates of Chowmin you want to order: ";
				cin>>amount;
				if(Qchowmin-Schowmin >= amount){
					Total_chowmin = amount*Pchowmin;
					Schowmin += amount;
				}else{
					system("cls");
					cout<<"\n Sorry! We have only "<<Qchowmin-Schowmin<<" many plates of chowmin available.";
					main();
					
				}
				break;
			}
		case 3:
			{
				int amount;
				cout<<"\n\n Please enter the number of plates of Fish Finger you want to order: ";
				cin>>amount;
				if(Qfish-Sfish >= amount){
					Total_fish = amount*Pfish;
					Sfish += amount;
				}else{
					system("cls");
					cout<<"\n Sorry! We have only "<<Qfish-Sfish<<" many plates of Fish Finger available.";
					main();
					
				}
				break;
			}
		case 4:
			{
				int amount;
				cout<<"\n\n Please enter the number of Egg Roll you want to order: ";
				cin>>amount;
				if(Qegg-Segg >= amount){
					Total_egg = amount*Pegg;
					Segg += amount;
				}else{
					system("cls");
					cout<<"\n Sorry! We have only "<<Qegg-Segg<<" many Egg Rolls available.";
					main();
						   
				}
				break;
			}
		case 5:
			{
				int amount;
				cout<<"\n\n Please enter the number of plates of Pasta you want to order: ";
				cin>>amount;
				if(Qpasta-Spasta >= amount){
					Total_pasta = amount*Ppasta;
					Spasta += amount;
				}else{
					system("cls");
					cout<<"\n Sorry! We have only "<<Qpasta-Spasta<<" many plates of Pasta available.";
					main();
					
				}
				break;
			}
		case 6:{
			cout<<"\n\n Your total bill is: "<<Total_chicken+Total_chowmin+Total_fish+Total_egg+Total_pasta;
			cout<<"\n\n Thank You!! Please visit again.";
			return 0;
		}
		default:{
			system("cls");
			cout<<"Wrong choice! Please choose from the items given in the menu.";
			main();
			break;
		}
		
	}
	goto m;
	
}
