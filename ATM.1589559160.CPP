#include <iostream>
using namespace std;

int main()
{
 
 int a,l;
 cout<<"Welcome on our ATM service";
 cout<<"\nPlease select the language";
 cout<<"\nFor English click [1]";
 cout<<"\nFor Hindi click [2] " ;
 cout<<"\n=";
 cin>>l;
  if(l==1 || l==2) // Here I used OR logical gate in this condition if one condition saticfy then it will execute otherwise not.
  {
   if(l==1)
   cout<<"\n You are selected English\n ";
   if(l==2)
   cout<<"\n You are selected Hindi\n";

    cout<<"\nPlease selected your account type";
      cout<<"\nFor Current Accout click on [1]";
      cout<<"\nFor Saving Accout click on [2]";
      cout<<"\nFor Recurring deposit Accout click on [3]";
      cout<<"\nFor Fixed deposit Accout click on [4]";
      cout<<"\n=";
       cin>>a;
	if(a==1 || a==2 || a==3 || a==4) // Here I also use OR logic gate
	{
	 if(a==1)
	 cout<<"\nYou are selected  Current Accout ";
	 if(a==2)
	 cout<<"\nYou are selected  Saving Accout ";
	 if(a==3)
	 cout<<"\nYou are selected Recurring deposit Accout ";
	 if(a==4)
	 cout<<"\nYou are selected Fixed deposit Accout ";

	  int op,s;
	   cout<<"\nPlease enter four disit pin number for open the Accout";
	   cout<<"\n=";
	   cin>>op;

	     if(op==1)
	     {
	       cout<<"\nPlease select the Function";
	       cout<<"\nfor Withdraw click on [1]";
	       cout<<"\nfor Deposit click on [2]";
	       cout<<"\nfor Clear click on [3]";
	       cout<<"\nfor Exit click on [4]";
	       cout<<"\n=";
	       cin>>s;
	       if(s==1||s==2||s==3||s==4) //Here I also used OR logical gate. 
		{
		 if(s==1)
		 cout<<"\nWithdarw option selected";
		 if(s==2)
		 cout<<"\nDeposit option selected";
		 if(s==3)
		 cout<<"\nEntered data clear ";
		 if(s==4)
		 cout<<"\nYou are exit the account";

		  long int p,total=10000,withdraw;
		  long int deposit;
		  if (s==1 ||s==2) //Here I also used OR logical gate.
		   {
		    if (s==1)
		     {
		       cout<<"\nPlease enter the for desit pin for withdraw the balance =";
		       cin>>p;
		       if(p==1)
			{
			 cout<<"\nYour avaliable balance is ="<<total;
			 cout<<"\nEnter the withdraw balance =";
			 cin>>withdraw;
			  if(withdraw<=40000) // According to this condition you can't withdraw more then 40,000.00 
			   {
			    if(withdraw<=total)// Accoding to this condition can't withdraw more then total amount
			     {
			      total=total-withdraw;
			      cout<<"\nYour withdraw balance is ="<<withdraw;
			      cout<<" \n Remain balance in your accout ="<<total;

		    if(s==2)
		     {
		      cout<<"Please enter the deposit balance";
		      cin>>deposit;
		      total=total+deposit;
		      cout<<"\n Deposit balance  from you ="<<deposit;

		  int t;
		  cout<<"\n If you want to take Recipt then click on [1]";
		  cout<<"\n Otherwise click on [2]\n =";
		  cin>>t;
		   if(t==1||t==2)  //Here I also used OR logical gate.
		    {
		     if(t==1)
		     cout<<"\n Please take the recept";
		     if(t==2)
		     cout<<"\n Ok";
		    }
		   else
		   cout<<"\n Please enter the valid key for Recept";
		   }
		   }
		    else
		cout<<"You are not having="<<withdraw<<" Rupes. "<<"You are haveing only="<<total<<" Rupes.";
		}

		  else
		  cout<<"Please withdarw the money under =40000.";
		  }
	       
		}
		else
		cout<<"\nPlease enter the valid four number pin for open the withdraw function";
		}
	       }
	      else
	      cout<<"\n Please choose the valid function";
	      }
	     else
	     cout<<"\n Please valid pin for open the account";
	     }
	    else
	    cout<<"\nPlease enter the  valid key for select the account type";
	     }
	    else
	    cout<<"\nPlease enter the valid key for select the laguage ";
cout<<"\n***Thank you for using our service***";

return 0;
}









