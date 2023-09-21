#include<iostream>
#include "brazorobotico.h"
using namespace std;


int main(){
	BrazoRobotico robot = BrazoRobotico();
	robot.mover(90,90,90);
	robot.sujetar();
	robot.cojer();
	cout<<robot.consulx()<<endl;
	cout<<robot.consuly()<<endl;
	cout<<robot.consulz()<<endl;
	cout<<robot.consulsujetar()<<endl;
	}
