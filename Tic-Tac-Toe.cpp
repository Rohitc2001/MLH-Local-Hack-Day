#include<iostream>
using namespace std;

char sqr[9] = {'0','1','2',
               '3','4','5',
			   '6','7','8'};

/* 
 0 1 2
 3 4 5
 6 7 8

*/

int ck_won()
{
	if(sqr[0] == sqr[1] && sqr[1] == sqr[2])
	 {
	 	if(sqr[0] == 'x')
	 	{
	 		return 1;
		}
		else
		{
			return 2;
		}
	 }
	 else if(sqr[3] == sqr[4] && sqr[4] == sqr[5])
	 {
	 	if(sqr[3] == 'x')
	 	{
	 		return 1;
		}
		else
		{
			return 2;
		}
	 }
	 else if(sqr[6] == sqr[7] && sqr[7] == sqr[8])
	 {
	 	if(sqr[6] == 'x')
	 	{
	 		return 1;
		}
		else
		{
			return 2;
		}
	 }
	 else if(sqr[0] == sqr[3] && sqr[3] == sqr[6])
	 {
	 	if(sqr[0] == 'x')
	 	{
	 		return 1;
		}
		else
		{
			return 2;
		}
	 }
	 else if(sqr[1] == sqr[4] && sqr[4] == sqr[7])
	 {
	 	if(sqr[1] == 'x')
	 	{
	 		return 1;
		}
		else
		{
			return 2;
		}
	 }
	 else if(sqr[2] == sqr[5] && sqr[5] == sqr[8])
	 {
	 	if(sqr[2] == 'x')
	 	{
	 		return 1;
		}
		else
		{
			return 2;
		}
	 }
	 else if(sqr[0] == sqr[4] && sqr[4] == sqr[8])
	 {
	 	if(sqr[0] == 'x')
	 	{
	 		return 1;
		}
		else
		{
			return 2;
		}
	 }
	 else if(sqr[2] == sqr[4] && sqr[4] == sqr[6])
	 {
	 	if(sqr[2] == 'x')
	 	{
	 		return 1;
		}
		else
		{
			return 2;
		}
	 }
	 else
	 {
	 	return 0;
	 }
}
	 
void mrk(int player , int value)
{
	if(player == 1)
	{
		sqr[value] = 'x';
	}
	else
	{
		sqr[value] = 'y';
	}	
}

void dis()
{
	int i;
	for(i = 0; i<9; i++)
	{
		cout << sqr[i] << "\t";
		
		if(i == 2 || i == 5 || i == 8)
		{
			cout << "\n";
		}
	}
}

int main()
{
	int ply1 = 1;
    int ply2 = 2;
	
	int result=0,value;
	int flag=0;
	
	cout << " 0 1 2 " << endl;
	cout << " 3 4 5 " << endl;
	cout << " 6 7 8 " << endl;
	cout << "Enter the number for insertion 'x' & 'y' at that position\n";
	
	for(int i=1; i<5; i++)
	{
		cout << "\nplayer-1 Enter the value : ";
		cin >> value;		
		
		mrk(ply1, value);
		dis();
		
		result = ck_won();
		if(result == 1)
		{
			cout << "\nplayer-1 has won." << endl;
			flag = 1;
			break;
		}
		else if(result == 2)
		{
			cout << "\nplayer-2 has won." << endl;
			flag = 1;
			break;
		}
		
		cout << "\nplayer-2 Enter the value : ";
		cin >> value;		
		
		mrk(ply2, value);
		dis();
		
		result = ck_won();
		if(result == 1)
		{
			cout << "\nplayer-1 has won." << endl;
			flag = 1;
			break;
		}
		else if(result == 2)
		{
			cout << "\nplayer-2 has won." << endl;
			flag = 1;
			break;
		}
	}	
	
	if(flag == 0)
	{
		cout << "\nGame Draw" << endl;
	}
	
	return 0;
}
