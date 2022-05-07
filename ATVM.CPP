#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
float bal=10000;
void bal_enq()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tYour current balance is:"<<bal;
  }

void cash_withdraw()
  {
    float amt;
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tEnter the amount to withdraw:";
    cin>>amt;
    if((amt>bal)||(bal==0))
      {
	cout<<"\n\n\tSorry you don't have a enough balance!";
	cout<<"\n\n\tPlease insert your card again";
	getch();
	exit(1);
      }
    else if (amt==0)
      {
      cout<<"\n\nInvalid Amount \nTransaction Failed!";
      cout<<"\n\n\tPlease insert your card again";
      getch();
      exit(1);
      }
    else
     {
	bal=bal-amt;
	cout<<"\n\n\tNow your current balance is:"<<bal;
     }
}

void mini_statement()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\t2000 is debited for your saving account ";
    cout<<"\n\n\t500 is credited from your saving account ";
    cout<<"\n\n\t20000 is credited for your saving account ";
    cout<<"\n\n\t200 is debited for your saving account ";
    cout<<"\n\n\t300 is debited for your saving account ";
  }

void pay(int rate)
  {
	if((rate>bal)||(bal==0))
       {
	 cout<<"\n\n\tSorry you don't have a enough balance";
	 cout<<"\n\n\tPlease insert your card again";
	 getch();
	 exit(1);
       }
   else
     {
	 char ch;
	 cout<<"\n\n\tPress y for confirmation otherwise press n:- ";
	 cin>>ch;
	 if((ch=='Y')||(ch=='y'))
	   {
	     bal=bal-rate;
	     cout<<"\n\n\tNow your current balance is:"<<bal;
	   }
	 else if((ch=='N')||(ch=='n'))
	   {
	     cout<<"\n\n\tTransaction Failed";
	     getch();
	     exit(1);
	   }
	 else
	   {
	     cout<<"\n\n\tInvalid character..Transaction Failed";
	     getch();
	     exit(1);
	   }


     }
  }

void coffee()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tYou had selected Nescafe Cold Coffee whose price is 30";
    pay(30);
  }

void coke()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tYou had selected Coke whose price is 40";
   // cout<<"\n\tpress any key for the payment";
   // getch();
   // cout<<".......";
    pay(40);
  }

void frooti()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tYou had selected Frooti whose price is 10";
   // cout<<"\n\tpress any key for the payment";
   // getch();
   // cout<<".......";
    pay(10);
  }

void milk()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tYou had selected Amul Kesar Milk whose price is 20";
   // cout<<"\n\tpress any key for the payment";
   // getch();
   // cout<<".......";
    pay(20);
  }

void sprite()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tYou had selected Sprite whose price is 40";
   // cout<<"\n\tpress any key for the payment";
   // getch();
   // cout<<".......";
    pay(40);
  }

void fanta()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tYou had selected Fanta whose price is 40";
   // cout<<"\n\tpress any key for the payment";
   // getch();
   // cout<<".......";
    pay(40);
  }

void lassi()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tYou had selected Lassi whose price is 20";
   // cout<<"\n\tpress any key for the payment";
   // getch();
   // cout<<".......";
    pay(20);
  }

void water()
  {
    clrscr();
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\tYou had selected mineral water whose price is 20";
   // cout<<"\n\tpress any key for the payment";
   // getch();
   // cout<<".......";
    pay(20);
  }

void machine()
  {
    clrscr();

    int choice;
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    cout<<"\n\n\t1.Nescafe Cold Coffee";
    cout<<"\n\n\t2.Coke";
    cout<<"\n\n\t3.Frooti";
    cout<<"\n\n\t4.Amul Kesar Milk";
    cout<<"\n\n\t5.Sprite";
    cout<<"\n\n\t6.Fanta";
    cout<<"\n\n\t7.Amul Lassi";
    cout<<"\n\n\t8.Mineral Water";
    cout<<"\n\n\t9.Cancel";
    cout<<"\n\n\tEnter your choice:";
    cin>>choice;
    switch(choice)
	 {
	   case 1:coffee();
		  break;
	   case 2:coke();
		  break;
	   case 3:frooti();
		  break;
	   case 4:milk();
		  break;
	    case 5:sprite();
		  break;
	    case 6:fanta();
		  break;
	    case 7:lassi();
		  break;
	    case 8:water();
		  break;
	    case 9:exit(1);
		   break;
	   default:cout<<"\n\n\tInvalid choice Please enter again";
		   break;
	}

  }

void menu()
  {
    textcolor(YELLOW);
    for(int i=0;i<80;i++)
     {
       cout<<"*";
     }
    cout<<"\n\n\t\t\t\t CITIZEN BANK";
    int choice;
    cout<<"\n\n\t1.Balance Enquiry";
    cout<<"\n\n\t2.Cash Withdrawl";
    cout<<"\n\n\t3.Mini Statement";
    cout<<"\n\n\t4.Vending Machine";
    cout<<"\n\n\t5.Cancel";
    cout<<"\n\n\tEnter your choice:";
    cin>>choice;
     switch(choice)
	  {
		case 1:bal_enq();
		       break;
		case 2:cash_withdraw();
		       break;
		case 3:mini_statement();
		       break;
		case 4:machine();
		       break;
		case 5:exit(1);
		       break;
		default:cout<<"\n\tinvalid choice,Please insert card again";
			break;
	  }

    }
void main()
 {
     clrscr();
   int pin=1234,pin_no;
   textcolor(GREEN);
   cout<<"\n\n\t\t\t\t CITIZEN BANK";
   cout<<"\n\n\n\n\t\tEnter your PIN: ";
   cin>>pin_no;
   if(pin_no==pin)
     {
       clrscr();

       menu();
      cout<<"\n\n\tThank you for using our ATM....";
      }
   else
     {
      cout<<"\n\t\tInvalid pin please insert card again";
      getch();
      exit(1);

     }
   getch();
 }