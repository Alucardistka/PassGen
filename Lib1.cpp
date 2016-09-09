#include <stdlib.h> //Функции случайного генерирования символов
#include <stdio.h> 
#include <iostream> 
#include <conio.h> 
#include <time.h> 
#include <windows.h>

using namespace std; 
 
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  
    
void RUbu(){  
	int n; 
	n = rand()%32+192;
	SetConsoleTextAttribute(handle,FOREGROUND_GREEN | FOREGROUND_BLUE  | FOREGROUND_INTENSITY); 
	printf("%c", n); 
} 
void rubu(){   
	int n; 
	n = rand()%32+224; 
	SetConsoleTextAttribute(handle,FOREGROUND_GREEN | FOREGROUND_BLUE  | FOREGROUND_INTENSITY); 
	printf("%c", n); 
} 
void Chisl(){   
	int n; 
	n = rand()%9+48;
	SetConsoleTextAttribute(handle,FOREGROUND_GREEN | FOREGROUND_BLUE  | FOREGROUND_INTENSITY);  
	printf("%c", n); 
} 
void Englbu(){ 
	int n; 
	n = rand()%26+65; 
	SetConsoleTextAttribute(handle,FOREGROUND_GREEN | FOREGROUND_BLUE  | FOREGROUND_INTENSITY); 
	printf("%c", n); 
} 
void englbu(){ 
	int n; 
	n = rand()%26+97;
	SetConsoleTextAttribute(handle,FOREGROUND_GREEN | FOREGROUND_BLUE  | FOREGROUND_INTENSITY);  
	printf("%c", n); 
} 
void Spec(){  
	int n; 
	n = rand()%15+33; 
	SetConsoleTextAttribute(handle,FOREGROUND_GREEN | FOREGROUND_BLUE  | FOREGROUND_INTENSITY); 
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
