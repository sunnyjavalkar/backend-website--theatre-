#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <time.h>
using namespace std;

class ticket{
	public:
	char name[10];
	char cno[10];
} t;


class card :  public ticket{
public:
	char address[50];
	char emailid[20];
} v;


void pay(int);
void random();
void card();


int main(){
	system("CLS");

	int ent, a, b, N, x, cardid;
	char ans;
	{time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	cout << "Current local date and time is:"<<asctime(timePtr);
	}

	do{
		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t\t VENUGRAM CINEMAS";
		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t\t Welcome Customer!";
		cout<<"\n\n\t\t\t\t <1> Now Showing:";
		cout<<"\n\t\t\t\t <2> Book Tickets";
		cout<<"\n\t\t\t\t <3> Offers and Discounts";
		cout<<"\n\t\t\t\t <4> Further Information";
		cout<<"\n\t\t\t\t <5> Exit \n\n";
		cout<<"\t\t\t\tEnter Your Choice :"<<"\t";
		cin>>ent;
	switch(ent)
	{
		case 1:
		system("CLS");
		cout<<"\n\n\t\t\t\tThe Shows are :";
			cout<<"\n\n\t\t\t\t 1. Avengers: Infinity War";
			cout<<"\n\n\t\t\t\t 2. Antman And The Wasp";
			cout<<"\n\n\t\t\t\t 3. Deadpool 2";
			cout<<"\n\n\t\t\t\t 4. Venom";
			cout<<"\n\n\t\t\t\t 5. Captain Marvel\n";
            void clrscr();
			break;
        case 2: system("CLS");
		cout<<"\n\n\t\t\t\tThe Shows are :";
			cout<<"\n\n\t\t\t\t 1. Avengers: Infinity War";
			cout<<"\n\n\t\t\t\t 2. Antman And The Wasp";
			cout<<"\n\n\t\t\t\t 3. Deadpool 2";
			cout<<"\n\n\t\t\t\t 4. Venom";
			cout<<"\n\n\t\t\t\t 5. Captain Marvel\n";
			cout<<"\n\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>a;
			cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
			switch(a)
			{
				case 1:
					system("CLS");
				 cout<<"\n\n\t\t\t\t Select the the timings: ";
					cout<<"\n\t\t\t\t 1. 08:00";
					cout<<"\n\t\t\t\t 2. 13:00";
					cout<<"\n\t\t\t\t 3. 14:50";
					cout<<"\n\t\t\t\t 4. 18:00";
					cout<<"\n\t\t\t\t 5. 21:00";
					cout<<"\n\t\t\t\t 6. 01:00 \n";
					cout<<"\n\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					int x;
					cin>>x;
					pay(x);
					cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2:
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 09:00";
					cout<<"\n\t\t\t\t 2. 11:00";
					cout<<"\n\t\t\t\t 3. 12:50";
					cout<<"\n\t\t\t\t 4. 15:00";
					cout<<"\n\t\t\t\t 5. 20:00";
					cout<<"\n\t\t\t\t 6. 22:00";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here:";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3:
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 08:00";
					cout<<"\n\t\t\t\t 2. 13:00";
					cout<<"\n\t\t\t\t 3. 14:50";
					cout<<"\n\t\t\t\t 4. 18:00";
					cout<<"\n\t\t\t\t 5. 21:00";
					cout<<"\n\t\t\t\t 6. 01:00";
					cout<<"\n\t\t\t\t Please select the timings";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"09:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4:
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t\t 1. 08:00";
					cout<<"\n\t\t\t\t 2. 13:00";
					cout<<"\n\t\t\t\t 3. 14:50";
					cout<<"\n\t\t\t\t 4. 18:00";
					cout<<"\n\t\t\t\t 5. 21:00";
					cout<<"\n\t\t\t\t 6. 01:00";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 5:
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 08:00";
					cout<<"\n\t\t\t\t 2. 13:00";
					cout<<"\n\t\t\t\t 3. 14:50";
					cout<<"\n\t\t\t\t 4. 18:00";
					cout<<"\n\t\t\t\t 5. 21:00";
					cout<<"\n\t\t\t\t 6. 01:00";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n \n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}break;
		case 3: system("CLS");
                cout<<"Choose an offer and we'll get you awesome deals!\n";
                cout<<"\n\t\t\t\t 1. Buy 5 tickets and get a discount of 200!";
                cout<<"\n\t\t\t\t 2. Buy 10 or more tickets and get a discount of 400!";
                cout<<"\n\t\t\t\t 3. Buy 4 tickets and get 2 beverages of your choice at half the price! Show ticket at Food Counter to claim offer.";
                cout<<"\n\t\t\t\t 4. Buy 4 tickets and get 2 burgers at half the price! Show ticket at Food Counter to claim offer.";
                int off;
                cin>>off;
                switch(off)
					{
							case 1:	cout<<"Buy 5 tickets and get a discount of 200!";
								break;
							case 2:	cout<<"Buy 10 or more tickets and get a discount of 400!";
								break;
							case 3:	cout<<"Buy 4 tickets and get 2 beverages of your choice at half the price! Show ticket at Food Counter to claim offer.";
								break;
							case 4:	cout<<"Buy 4 tickets and get 2 burgers at half the price! Show ticket at Food Counter to claim offer.";
								break;
					}
								cout<<"\n Do you want to choose another option(y/n)";
                                cin>>ans;
                                system("CLS");
                                break;


		case 4: system("CLS");
				cout<<"For further information about movies you can download our Application(from the  Google Play Store or from the iOS App Store) or contact us at 01234567896523";			//Finding out more about our cinemas
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				system("CLS");
				break;
		case 5:
		system("CLS");
		cout<<"\n\t\t\t\tThank You for booking tickets with us! Hope You enjoy the movie!\n\n\t\t\t\t";
		system("PAUSE");
		exit(0);
				break;
	}
	}while(ans=='y'|| ans=='Y');
	}

void pay(int a)
{
	int normal, gold, amt[2],tmpamt[2],id;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	fstream fin;
	fin.open("card.dat", ios::in|ios::app);
	fin>>id;
	cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1.Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class: ";
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<"\n\n\t\t\t\tYou are booking for a Normal show \n\n\t\t\t\t";
		system("PAUSE");
		system("CLS");
		tmpamt[1] = a * 250;
		if(a>5 && a<10)
        {
            tmpamt[1]-=200;
        }
        else if(a>10)
        {
            tmpamt[1]-=400;
        }
        amt[1]=tmpamt[1];
		cout<<"\n\t\t\t\tChoose payment method: ";
		cout<<"\n\t\t\t\t1. Card\t 2. Cash ";
		int rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Please Pay :"<<amt[1]<<"\n";
		switch(rep)
		{
		case 1:	cout<<"\t\t\t\tName of the card holder: ";
                char cardname[10];getchar();
                cin>>(cardname);
                cout<<"\n\t\t\t\tEnter the card number: \n";
                char Card[16];
                cin>>(Card);
                cout<<"\t\t\t\tExpiry(MM/YYYY)";
                int expirymm,expiryyy;
                cin>>expirymm;
                cout<<"\t\t\t\t/";
                cin>>expiryyy;
                while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\t\t\t\tEnter the month again: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts("\t\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
		}
	}
	else
	{
		cout<<"\n\n\t\t\t\tYou are booking for a Gold Show \n\t\t\t\t";
			system("PAUSE");
		system("CLS");
		tmpamt[2] = a * 500;
		if(a>5 && a<10)
        {
            tmpamt[2]-=200;
        }
        else if(a>10)
        {
            tmpamt[2]-=400;
        }
        amt[2]=tmpamt[2];

		cout<<"\n\t\t\t\tWant to pay by Card(y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Please Pay :"<<amt[2]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: ";
			char n[10];
			gets(n);
			cout<<"\n\t\t\t\tEnter the card number: ";
			char Card[16];
			gets(Card);
			cout<<"\n\t\t\t\tExpiry(MM/YY): ";
			int expirymm, expiryyy;
			cin>>expirymm;
			cout<<"\n/";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\n\t\t\t\tEnter the month again: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\n\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts("\n\t\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
			}
	};
}

