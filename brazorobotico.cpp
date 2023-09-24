#include <iostream>
#include "brazorobotico.h"
using namespace std;


BrazoMecanico::BrazoMecanico(){
	x=0;
	y=0;
	z=0;
	sujetar=false;
}

void BrazoMecanico::mover(double xx, double yy, double zz){
	x=xx;
	y=yy;
	z=zz;
}

void BrazoMecanico::cojer(){
	sujetar=true;
}

void BrazoMecanico::soltar(){
	sujetar=false;
}

double BrazoMecanico::consulx(){
	return x;
}


double BrazoMecanico::consuly(){
	return y;
}

double BrazoMecanico::consulz(){
	return z;
}

bool BrazoMecanico::consulsujetar(){
	return sujetar;
	}

