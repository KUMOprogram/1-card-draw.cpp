#include <iostream>
#include <stdbool.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
system("color f1");

int rep=1;
while(rep==1)
{
system("cls");

	srand(time(0));
	int r=rand(),i,j;
	r=(r%52)+1;
	
	cout<<"Tuxaio noumero: "<<r;
	cout<<endl<<endl;
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<13; j++)
		{
            _Bool flagcard=0;         //gia na grapsei to noumero me to pou brei sxhma
			if (r==((j+1)+(i*13)))   //j+1 einai ta fulla 1-13 kai i*13 einai posa extra exei se ka8e omada xrwmmatos
			{
				if (i==0 && r<=13){         //epilogh sxhmatos ana 13 fulla
					cout<<"Mpastouni ";
					flagcard=1;
				}else if (i==1 && r<=26 && r>13){
					cout<<"Spa8i ";
					flagcard=1;
                }else if (i==2 && r<=39 && r>26){
					cout<<"Koupa ";
					flagcard=1;
				}else if (i==3 && r>39){
					cout<<"Karro ";
					flagcard=1;
				}
			}
			
			if (flagcard)   //ama to xrwma bre8ei psaxnei to noumero
			{
				if (j==0){           //epilogh noumerou
					cout<<"Assos";
				}else if (j==10){
					cout<<"J";
				}else if (j==11){
					cout<<"Q";
				}else if (j==12){
					cout<<"K";
				}else{
					cout<<j+1;
				}
			cout<<endl<<endl;
			}
		}
	}
system("pause");
}
}

