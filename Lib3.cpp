#include <stdlib.h> 
#include <stdio.h> 
#include <iostream> 
#include <conio.h> 
#include <time.h> 
#include <windows.h>

using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); 

void Proverka (int *a,int &s){ //Функции проверки длинны и входных данных
	int i;
	s=0;
	for (i=0; i<6; i++)
	s+= a[i];
	if (s==0){

	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	cout << endl;
	cout << "You don't choose anything, try again" << endl;
	SetConsoleTextAttribute(handle, FOREGROUND_RED   | FOREGROUND_GREEN | FOREGROUND_BLUE);	
	cout << endl;}
}

void QuantLeng(int &number, int &length){  
    SetConsoleTextAttribute(handle, FOREGROUND_RED   | FOREGROUND_GREEN | FOREGROUND_BLUE);
	char tmp[10];
	do{	
	   cout << "Enter quantity of passwords" << endl; 		
        scanf("%s", &tmp);
        number = atoi(tmp);
	   if ((number<1)||(number>1024)){ 
	   SetConsoleTextAttribute(handle, FOREGROUND_RED);
	   puts("\nInvalid value entered\n"); }
	   SetConsoleTextAttribute(handle, FOREGROUND_RED   | FOREGROUND_GREEN | FOREGROUND_BLUE);				
	}while((number<1)||(number>1024));
	
	char tmp1[10];
	do{	
        cout << "Input length of password" << endl; 	
        scanf("%s", &tmp1);
		length = atoi(tmp1);
		if ((length<1)||(length>256)){ 
		SetConsoleTextAttribute(handle, FOREGROUND_RED);
        puts("\nInvalid value entered\n");}
        SetConsoleTextAttribute(handle, FOREGROUND_RED   | FOREGROUND_GREEN | FOREGROUND_BLUE);
	}while((length<1)||(length>256));     
}
