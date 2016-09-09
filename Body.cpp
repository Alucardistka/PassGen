#include <stdlib.h> 
#include <stdio.h> 
#include <iostream> 
#include <conio.h> 
#include <time.h> 
#include <windows.h>
#include "Header.h"


int main() {                     //Вызов главного меню и функций
	srand(time(NULL)); 
	setlocale(LC_ALL, "Russian"); 
	int  j, x, number, Symb, length, s=0, a[6];
	string str; 

	while(1){ 

        SetConsoleTextAttribute(handle, FOREGROUND_GREEN | FOREGROUND_BLUE); //Изменение цвета шрифта
		cout << "***********************************************************************************************************************" << endl; 
		cout << "   1 - Free generate" << endl; 
		cout << "   2 - Generate whith your word" << endl; 
		cout << "       Escape - exit" << endl; 
		cout << "***********************************************************************************************************************" << endl; 
		Symb=getch(); //Выход из программы
		if(Symb == 27) break; 

		switch(Symb) {     //Начальный интерфейс общения
			case '1':{       //Генерация без доп.условий
			while (1){
			  Polz(a);
			  Proverka(a,s);
			  if (s!=0) break;
			}
       QuantLeng(number, length);

			for (int i=0; i<number; i++) { 
				j=length; 
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

			case '2':{    //Генерация с добавлением своего слова
			while (1){
			Polz(a);
			Proverka(a,s);
			if (s!=0) break;
			}
			SetConsoleTextAttribute(handle, FOREGROUND_RED   | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "Input your word" << endl; 
			cin >> str; 
			QuantLeng(number, length);
			
            SetConsoleTextAttribute(handle, FOREGROUND_RED   | FOREGROUND_GREEN | FOREGROUND_BLUE);
			for (int i=0; i<number; i++) { 
				SetConsoleTextAttribute(handle,FOREGROUND_GREEN | FOREGROUND_BLUE  | FOREGROUND_INTENSITY); 
				cout << str; 
				j=length; 
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
}
