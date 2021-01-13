#include<iostream>
using namespace std ;

// program for sort elements in array using bubble sort .  

int main()
{
	int i , a[50] , n , j ,temp ;
	
	
	cout <<  " How many elements in array : " ;
	cin  >> n ;
	
	cout << " \n Enter the elements in array" << endl ;
	
	for(i=0 ; i<n ; i++) 
	{
		cin >> a[i] ; 
	}
	
	cout << " \n " ;
	
	cout << " The numbers are" << endl ;
	
	for(i=0 ; i<n ; i++) 
	{
		cout << "\n a" << "[" << i << "] : " << a[i] << endl;
	}

	
	
	for(i = 0 ; i < n ; i++)
	{
	    for(j = 0 ; j < n-i-1 ; j++)
	   {
	    	if(a[j] > a[j+1]) // swap 
         	{	
        		temp = a[j] ;
        		a[j] = a[j+1] ;
        		a[j+1] = temp ;       	
			} 
		}	
	} 
	    cout << "\n\n" ;
	    cout << "****** sorted number ******" << endl ;
		for(i=0 ; i<n ; i++)
		{   
		    cout << "\n" ;
			cout << a[i] ;
		}
}
