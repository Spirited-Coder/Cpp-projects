#include<iostream>
using namespace std;

int main(void){
	int quant;
	int choice;
	
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
	
	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
	
	int Total_room = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
	
	
	cout << "\n\t Quantity of item we have";
	cout << "\n\n Quantity of Rooms available: ";
	cin>>Qrooms;
	cout << " Quantity of Pasta: ";
	cin>>Qpasta;
	cout << " Quantity of Burger: ";
	cin>>Qburger;
	cout << " Quantity of Noodles: ";
	cin>>Qnoodles;
	cout << " Quantity of Shake: ";
	cin>>Qshake;
	cout << " Quantity of Chicken-roll: ";
	cin>>Qchicken;
	
	m:
	cout << "\n\n\t\t\tPlease select from the menu options";
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta";
	cout << "\n3) Burger";
	cout << "\n4) Noodles";
	cout << "\n5) Shake";
	cout << "\n6) Chicken-Roll";
	cout << "\n7) Details of Sales and collection";
	cout << "\n8) Exit";
	
	cout << "\nPlease enter your choice! ";
	cin >> choice;
	
	switch(choice){
		case 1:
			cout << "\nPlease enter the number of rooms you want: ";
			cin>>quant;
			if(Qrooms - Srooms >= quant){
				Srooms = Srooms+quant;
				Total_room += quant*1200;
				cout<<"\n\n\t"<<quant<<" room/rooms have been alloted to you!";
			}else{
				cout<<"\n\tOnly "<<Qrooms-Srooms<<" rooms are remaining in hotel";
			}
			break;
		case 2:
			cout << "\nPlease enter the quantity of pasta you want: ";
			cin>>quant;
			if(Qpasta - Spasta >= quant){
				Spasta = Spasta+quant;
				Total_pasta += quant*250;
				cout<<"\n\n\t"<<quant<<" pasta is the order!";
			}else{
				cout<<"\n\tOnly "<<Qpasta-Spasta<<" pasta are remaining in hotel";
			}
			break;
		case 3:
			cout << "\nPlease enter the quantity of burger you want: ";
			cin>>quant;
			if(Qburger - Sburger >= quant){
				Sburger = Sburger+quant;
				Total_burger += quant*120;
				cout<<"\n\n\t"<<quant<<" burger is the order!";
			}else{
				cout<<"\n\tOnly "<<Qburger-Sburger<<" burgers are remaining in hotel";
			}
			break;
		case 4:
			cout << "\nPlease enter the quantity of noodles you want: ";
			cin>>quant;
			if(Qnoodles - Snoodles >= quant){
				Snoodles = Snoodles+quant;
				Total_noodles += quant*250;
				cout<<"\n\n\t"<<quant<<" noodles is the order!";
			}else{
				cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" noodles are remaining in hotel";
			}
			break;
		case 5:
			cout << "\nPlease enter the quantity of Shakes you want: ";
			cin>>quant;
			if(Qshake - Sshake >= quant){
				Sshake = Sshake+quant;
				Total_shake += quant*120;
				cout<<"\n\n\t"<<quant<<" shakes is the order!";
			}else{
				cout<<"\n\tOnly "<<Qshake-Sshake<<" shakes are remaining in hotel";
			}
			break;
		case 6:
			cout << "\nPlease enter the quantity of Chicken-Roll you want: ";
			cin>>quant;
			if(Qchicken - Schicken >= quant){
				Schicken = Schicken+quant;
				Total_chicken += quant*150;
				cout<<"\n\n\t"<<quant<<" Chicken-Roll is the order!";
			}else{
				cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken-Roll are remaining in hotel";
			}
			break;
		case 7:
			cout<<"\n\n\tDetails of sales and collection ";
			cout<<"\n\n Number of rooms we had: "<< Qrooms;
			cout<<"\n Number of rooms bookes: "<< Srooms;
			cout<<"\n Number of rooms left: "<< Qrooms-Srooms;
			cout<<"\n Total rooms collection: "<<Total_room;
			cout<<"\n\n Number of Pasta we had: "<< Qpasta;
			cout<<"\n Number of Pasta sold: "<< Spasta;
			cout<<"\n Number of Pasta left: "<< Qpasta-Spasta;
			cout<<"\n Total Pasta collection: "<<Total_pasta;
			cout<<"\n\n Number of Burger we had: "<< Qburger;
			cout<<"\n Number of Burger sold: "<< Sburger;
			cout<<"\n Number of Burger left: "<< Qburger-Sburger;
			cout<<"\n Total Burger collection: "<<Total_burger;
			cout<<"\n\n Number of Noodles we had: "<< Qnoodles;
			cout<<"\n Number of Noodles sold: "<< Snoodles;
			cout<<"\n Number of Noodles left: "<< Qnoodles-Snoodles;
			cout<<"\n Total Noodles collection: "<<Total_noodles;
			cout<<"\n\n Number of Shakes we had: "<< Qshake;
			cout<<"\n Number of Shakes sold: "<< Sshake;
			cout<<"\n Number of Shakes left: "<< Qshake-Sshake;
			cout<<"\n Total Shakes collection: "<<Total_shake;
			cout<<"\n\n Number of Chicken-Roll we had: "<< Qchicken;
			cout<<"\n Number of Chicken-Roll sold: "<< Schicken;
			cout<<"\n Number of Chicken-Roll left: "<< Qchicken-Schicken;
			cout<<"\n Total Chicken-Roll collection: "<<Total_chicken;
			
			cout<<"\n\n Total collection of the day: "<<Total_room+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
			break;
		case 8:
			exit(0);
				
		default:
			cout<"\n Please select the number mentioned above";
	}
	goto m;
}
