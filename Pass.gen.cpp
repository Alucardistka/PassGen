#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>


using namespace std;

void RUbu(){
	int n;
	n = rand()%32+192;
	printf("%c", n);
}
void rubu(){
	int n;
	n = rand()%32+224;
	printf("%c", n);
}
void Chisl(){
	int n;
	n = rand()%9 +48;
	printf("%c", n);
}
void Englbu(){
	int n;
	n = rand()%26 +65;
	printf("%c", n);
}
void englbu(){
	int n;
	n = rand()%26 +97;
	printf("%c", n);
}
void Spec(){
	int n;
	n = rand()%7 +1;
	printf("%c", n);
}

void Rand(int x){
	switch(x){
		case 0:Spec();break;
		case 1:RUbu();break;
		case 2:rubu();break;
		case 3:Englbu();break;
		case 4:englbu(); break;
		case 5:Chisl();break;
		default: cout << "ERROR" << endl; break;
	}
}


void Polz(int *a){
	int h,number,length;


	cout << "Do you need special symbols? Press y or n" << endl;
	do
	{
		h = getch();
		switch(h){
			case 'y':
			{
				a[0] = 1;
				break;
			}
			case 'n':
			{
				a[0] = 0;
				break;
			}
		}
	}while(!((h=='y')||(h=='n')));

	cout << "Do you need numbers? Press y or n" << endl;
	do
	{
		h = getch();
		switch(h){
			case 'y':
			{
				a[5] = 1;
				break;
			}
			case 'n':
			{
				a[5] = 0;
				break;
			}
		}
	}while(!((h=='y')||(h=='n')));

	cout << "Do you need russian letters? Press y or n" << endl;
	do
	{
		h = getch();
		switch(h)
		{
			case 'y':
			{
				cout << "Do you need capital russian letters? Press y or n" << endl;
				h = getch();
				switch(h)
				{
					case 'y':
					{
						a[1] = 1;
						break;
					}
					case 'n':
					{
						a[1] = 0;
						break;
					}
				}
				cout << "Do you need lowercase russian letters? Press y or n" << endl;
				h = getch();
				switch(h)
				{
					case 'y':
					{
						a[2] = 1;
						break;
					}
					case 'n':
					{
						a[2] = 0;
						break;
					}
				}
				break;
			}
			case 'n': {
				a[1] = 0;
				a[2] = 0;
			}
		}

	}while(!((h=='y')||(h=='n')));

	cout << "Do you need english letters? Press y or n" << endl;
	do
	{

		h = getch();
		switch(h){
			case 'y':
			{
				cout << "Do you need capital english letters? Press y or n" << endl;
				do
				{

					h = getch();
					switch(h)
					{
						case 'y':
						{
							a[3] = 1;
							break;
						}
						case 'n':
						{
							a[3] = 0;
							break;
						}
					}
				}while(!((h=='y')||(h=='n')));

				cout << "Do you need lowercase english letters? Press y or n" << endl;
				do
				{

					h = getch();
					switch(h)
					{
						case 'y':
							{
								a[4] = 1;
								break;
							}
							case 'n':
							{
								a[4] = 0;
								break;
							}
					}

				}while(!((h=='y')||(h=='n')));
				break;
			}
			case 'n': {
				a[3] = 0;
				a[4] = 0;
			}
		}
	}while(!((h=='y')||(h=='n')));

}

int Proverka (int *a,int &s){
	int i;
	for (i=0;i<=6;i++)
	s+= a[i];
	if (s==0)
	cout << endl;
	cout << "You don't choose anything, try again" << endl;
	cout << endl;
}

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int c, j, x, n, Symb, s=0, a[6];
	string str;


	while(1){
		cout << "***********************************************************************************************************************" << endl;
		cout << "1 - Free generate" << endl;
		cout <<"2 - Generate whith your word" << endl;
		cout << "Escape - exit" << endl;
		cout << "***********************************************************************************************************************" << endl;
		Symb=getch();
		if(Symb == 27) break;

		switch(Symb) {
			case '1':{
			while (1){
			Polz(a);
			Proverka(a,s);
			if (s!=0) break;
			}
			cout << "Input quantity of passwords" << endl;
			cin >> c;
			cout << "Input length of password" << endl;
			cin >> n;

			for (int i=0; i<c; i++) {
				j=n;
				while (j>0){
					x=0;
					x = rand()%6;
					if (a[x] == 1){
						Rand(x);
						j=j-1;
					}
				}
			cout << endl;} break;
			}

			case '2':{
			while (1){
			Polz(a);
			Proverka(a,s);
			if (s!=0) break;
			}
			cout << "Input your word" << endl;
			cin >> str;
			cout << "Input quantity of passwords" << endl;
			cin >> c;
			cout << "Input length of password " << endl;
			cin >> n;

			if ((n >= 256)||(n <= 0)) {
				cout << "ERROR";
				return 1;
			}

			for (int i=0; i<c; i++) {
				cout << str;
				j=n;
				while (j>0){
					x=0;
					x = rand()%6;
					if (a[x] == 1){
						Rand(x);
						j=j-1;
					}
				}
			cout << endl;} break;
			}
		}
	}
	system("PAUSE");
	return 0;
}
