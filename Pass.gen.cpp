#include <stdlib.h> 
#include <stdio.h> 
#include <iostream> 
#include <conio.h> 
#include <time.h> 

using namespace std; 

void RUbu(){ 
int n; 
n = rand()%64 +192; 
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

int main(){ 
srand(time(NULL)); 
setlocale(LC_ALL, "Russian"); 
int x,c,Symb; 
string str; 

while(1){ 
cout « "----------------------------------------------------------------------" « endl; 
cout « "1 - Generaciya sluchainogo parolya" « endl; 
cout « "2 - Generaciya s nachalnumi dannumi" « endl; 
cout « "Escape - Vuhod" « endl; 
cout «endl; 
cout «"----------------------------------------------------------------------" « endl; 
Symb=getch(); 
if(Symb == 27) break; 

switch(Symb) { 
case '1':{ 
cout « "Vvedite chislo ne prevushauhee 256" « endl; 
cin » c; 
while (c>0){ 
x=0; 
x = rand()%3; 
switch(x){ 
case 0:Chisl();break; 
case 1:RUbu();break; 
case 2:Spec();break; 
default: cout « "Oshibka"« endl; break; 
} 
c=c-1; } 
cout« endl;} break; 
case '2':{ 
cout « "Vvedite vashe slovo" « endl; 
cin » str; 
cout « "Vvedite chislo dop.simvolov ne prevushauhee 256"« endl; 
cin » c; 
cout « str; 

if ((c >= 256)&&(c<=0)) { 
cout « "Oshibka"; 
break; 
return 1;} 

while (c>0){ 
x=0; 
x = rand()%5; 
switch(x){ 
case 0:Chisl();break; 
case 1:RUbu();break; 
case 2:Englbu();break; 
case 3:Spec();break; 
case 4:englbu(); break; 
default: cout « "Oshibka"« endl; break; 
} 
c=c-1; } 
cout« endl;} ; break; 
}; 

system("PAUSE"); 
return 0; 
}
