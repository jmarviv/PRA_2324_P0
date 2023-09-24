#include<iostream>
#include "brazorobotico.h"
using namespace std;


int main(){
	BrazoMecanico robot = BrazoMecanico();
	robot.mover(90,90,90);
	robot.soltar();
	robot.cojer();
	cout<<robot.consulx()<<endl;
	cout<<robot.consuly()<<endl;
	cout<<robot.consulz()<<endl;
	cout<<robot.consulsujetar()<<endl;
	}
