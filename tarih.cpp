#include "Tarih.h"
#include <iostream>
#include <cstring>
using namespace std;

Tarih::Tarih(int gun, int ay, int yil){
	this->gun = gun;
	this->ay = ay;
	this->yil = yil;
}
Tarih::Tarih(char p[]){
	char yedek[11];
	strcpy(yedek,p);
	yedek[10]='\0';
	
	char *ptr = strtok(yedek,"/");
	if(ptr != NULL)
		this->gun = atoi(ptr);
	ptr = strtok(NULL,"/");
	if(ptr != NULL)
		this->ay = atoi(ptr);
	ptr = strtok(NULL,"/");
	if(ptr != NULL)
		this->yil = atoi(ptr);
}
void Tarih::yaz(){
	cout << gun << " ";
	switch(ay){
		case 1:
			cout << "Ocak";
			break;
		case 2:
			cout << "Subat";
			break;
		case 3:
			cout << "Mart";
			break;
		case 4:
			cout << "Nisan";
			break;
		case 5:
			cout << "Mayis";
			break;
		case 6:
			cout << "Haziran";
			break;
		case 7:
			cout << "Temmuz";
			break;
		case 8:
			cout << "Agustos";
			break;
		case 9:
			cout << "Eylul";
			break;
		case 10:
			cout << "Ekim";
			break;
		case 11:
			cout << "Kasim";
			break;
		case 12:
			cout << "Aralik";
			break;
	}
	cout << " " << yil << endl;
}