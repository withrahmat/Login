#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
void setcolor (int color)
{
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), color);
}
int main ()
{
	string UserName="Rahmat";
	string Password="withrahmat";
	
Re_Enter:
	string username2;
	setcolor (3);
	cout<<"Username: ";
	setcolor (7);
	cin>>username2;
	
	if (username2==UserName)
	{
Re_Enter_Password: 
		string password2;
		setcolor (3);
		cout<<"Password: ";
		setcolor (7);
		cin>>password2;
		if(password2==Password)
		{
			setcolor (10);
			cout<<"Welcome!";
			setcolor (7);
		}
		else
		{
			setcolor(4);
			cout<<"Incorrect Password" <<endl;
			setcolor(7);
			goto Re_Enter_Password;
		}
	}
	else
	{
		setcolor (4);
		cout<<"Invalid Username! " <<endl;
		setcolor (7);
		goto Re_Enter;
	}
	
	return 0;
}