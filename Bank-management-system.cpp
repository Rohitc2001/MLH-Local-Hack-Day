// C++ MIINI BANK PROJECT USING CLASS & OBJECT.
#include<iostream>
using namespace std ;

// create a class name Account.
class Account 
{
	int  balance , wd ;
	long int mobnum , adhr ;
	string country , name ;
	
	public : void openAccount()
	        { 
	        cout << "\n\n W L C O M E___T O___I D B I___B A N K  " << endl ;
	        
	        cout << " \n\n A Fill The Following Details To Open YOUR Account " << endl ;
	        }
	        	
        	 void readDetails()
	        {
	       	  cout << "\n\n ENTER YOUR NAME : "	;
	       	  getline(cin,name);
	       	  cout << "\n ENTER YOUR MOBILE NUMBER : " ;
	       	  cin  >> mobnum ;
	       	  cout << "\n ENTER YOUR COUNTRY NAME : " ;
	       	  cin  >> country ; 
	       	  cout << "\n ENTER YOUR ADHAR NUMBER : " ;
	       	  cin  >> adhr ;
		}
	        
          	void getbalance()
	        {
	          cout << "\n\n.......................................................... " ;
	          cout << "\n ~ YOUR ACCOUNT IS SUCCESSFULLY OPENED" << endl;
		  cout << ".......................................................... " ;
		  cout << "\n\n PLEASE DEPOSITED SOME MONEY ~ " ;
	          cin  >> balance ;
			    }
			    
          	void writeDetails()
		{   
		  cout << "\n\n.......................................................... " ;
		  cout << "\n ~ YOUR ACCOUNT DETILS ARE ~ " << endl ;
		  cout << ".........................................................." ;
		  cout << "\n ACCOUNT NUMBER : " << 1024    ;
		  cout << "\n NAME           : " << name    ;
		  cout << "\n COUNTRY	     : " << country ;
		  cout << "\n MOBILE NUMBER  : " << mobnum  ;
		  cout << "\n ADHAR NUMBER   : " << adhr    ;
		  cout << "\n AMOUNT PRESENET: Rs " << balance ;
		}
	 		
               void withdraw()
	       {
		  cout << "\n\n************************************************************ " ;
		  cout << "\n\n ENTER AMOUNT YOU WNAT TO WIHDRAW : Rs " ;
		  cin  >> wd ;
	       }
			    
               void netAmt()
	       {
		  cout << "\n\n.......................................................... " << endl ;
		  cout << "NET AMOUNT PRESENT : Rs " ;
		  cout << balance - wd << endl ;
		  cout << ".......................................................... " ;
	       }
};

	      int main()
	      {
 		// creating object name 'value'.
        	Account  value ; 
	 	
	 	value.openAccount();
	 	value.readDetails();
	 	value.getbalance();
	 	value.writeDetails();
	 	value.withdraw();
	 	value.netAmt();
	      }
