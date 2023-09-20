#include<iostream>
using namespace std;

class BrazoMecanico{
	private:
		double x, y, z;
		bool sujetar;
	public:
		BrazoMecanico();
		void cojer();
		void soltar();
		double consulx();
		double consuly();
		double consulz();
		bool consulsujetar();
		void mover(double, double, double);

};
