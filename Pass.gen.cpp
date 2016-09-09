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
case 3:Chisl();break;
case 4:Englbu();break;
case 5:englbu(); break;
default: cout << "ERROR" << endl; break;
}
}

int main(){
srand(time(NULL));
setlocale(LC_ALL, "Russian");
int x,c,Symb;
string str;

while(1){
cout << "**********************************************************************" << endl;
cout << "1 - Free generate" << endl;
cout <<"2 - Generate whis ur word" << endl;
cout << "Escape - exit" << endl;
cout << "**********************************************************************" << endl;
Symb=getch();
if(Symb == 27) break;

switch(Symb) {
case '1':{
cout << "Input n < 256" << endl;
cin >> c;
while (c>0){
x=0;
x = rand()%6;
Rand(x);
c=c-1; }
cout << endl;} break;



case '2':{
cout << "Input your word (whithout spases and other symbols)" << endl;
cin >> str;
cout << "Input n < 256" << endl;
cin >> c;
cout << str;

if ((c >= 256)&&(c<=0)) {
cout << "ERROR";
break;
return 1;}

while (c>0){
x=0;
x = rand()%6;
Rand(x);
c=c-1; }
cout << endl;} ; break;
};
}
system("PAUSE");
return 0;
}
