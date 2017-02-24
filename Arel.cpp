#include <stdio.h>
#include <string.h>
#include <iostream>
#include <conio.h>

#define USER "Admin"
#define PASS "1234bA"
#define ENTER 13
#define BACKSPACE 8

using namespace std;
int main()
{
	int intentos;
	
count:
	intentos++;
	string user="", pass="";
	system("cls");
    cout << "Usuario: ";
    cin >> user;
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

	if (user == USER && pass == PASS)
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
