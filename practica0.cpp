#include<iostream>
#include "brazorobotico.h"
using namespace std;


int main(){
	BrazoMecanico robot = BrazoMecanico();
	robot.mover(90,90,90);
	robot.soltar();
	robot.cojer();
	cout<<"la posicion del eje x es de: "<<robot.consulx()<<endl;
	cout<<"la posicion del eje y es de: "<<robot.consuly()<<endl;
	cout<<"la posicion del eje z es de: "<<robot.consulz()<<endl;
	if (robot.consulsujetar()==true)
		cout<<"el robot esta agarrando un objeto"<< endl;
	else
		cout<<"el robot no esta sujetando un objeto"<<endl;
	}
