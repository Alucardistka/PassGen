#include <stdlib.h> 
#include <stdio.h> 
#include <iostream> 
#include <conio.h> 
#include <time.h> 
#include <windows.h>

using namespace std; 

HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); 

void Polz(int *a){     //Функция общения с пользователем 
	int h,number,length;

	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY);
		
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
	
 cout << endl;
}
