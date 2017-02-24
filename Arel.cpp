#include <stdio.h>
#include <string.h>
#include <iostream>
#include <conio.h>

#define ENTER 13
#define BACKSPACE 8

using namespace std;
int main()
{
	int intentos;
	
count:
	intentos++;
	string pass="", PASS;
	int user;
	system("cls");
	cout << "1.- Administrador\n2.- Usuario\n";
    cin >> user;
    if(user == 1)
	{
		PASS="1234bA";
	}
	else if(user == 2)
	{
		PASS="contra";
	}
	cout << "Password: ";
    	char caracter;
    	caracter = getch();
      
  	while (caracter != ENTER)
	{
       	if (caracter != BACKSPACE)
		{
        	pass.push_back(caracter);
        	cout << "*";
		}
		else
		{
			if (pass.length() > 0)
			{
				cout << "\b \b";
				pass = pass.substr(0, pass.length() - 1);
			}
		}
 		caracter = getch();
 	}

	if (pass == PASS)
	{
        cout << "\n\n\tBienvenido al sistema";
    }
	else
	{
        cout << "\n\n\tIncorrect User/Password\n";
        printf("\n");
        if(intentos==3)
        {
        	return 0;
		}
		system("pause");
        goto count;
    }
}
