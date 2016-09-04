#include <stdlib.h> 
#include <stdio.h> 
#include <iostream> 
#include <conio.h> 
#include <time.h> 

using namespace std; 

void RUbu(){ 
int n; 
n = rand()%64 +192; 
printf("%c",n); 
} 

void Chisl(){ 
int n; 
n = rand()%9 +48; 
printf("%c",n); 
} 

void Englbu(){ 
int n; 
n = rand()%26 +65; 
printf("%c",n); 
} 

void englbu(){ 
int n; 
n = rand()%26 +97; 
printf("%c",n); 
} 

void Spec(){ 
int n; 
n = rand()%7 +1; 
printf("%c",n); 
} 

int main(){ 
srand(time(NULL)); 
setlocale(LC_ALL, "Russian"); 
int x,n; 
cin >> n; 
while (n>0){ 
x=0; 
x = rand()%5; 

switch(x){ 
case 0:Chisl();break; 
case 1:RUbu();break; 
case 2:Englbu();break; 
case 3:Spec();break; 
case 4:englbu(); break; 
default: cout << "ERROR"<< endl; break; 
} 
n=n-1; } 
cout<< endl; 
system("PAUSE"); 
return 0; 

}
