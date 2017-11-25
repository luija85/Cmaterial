#include <iostream>
#include <math.h>

class complejo{
	private:
		double real;
		double imaginario;
		
	public:
		void print();
		double conjugado();
		double norma();
};

complejo::complejo(double _real,double _imaginario,double _v[4]){
	real=_real;
	imaginario=_imaginario;
	for(i=0;i<4;i++){
		v[i]=_v[i];
	}
}

double complejo::conjugado(){
	return(-imaginario);
}

double complejo::norma(){
	return(pow(real*real+imaginario*imaginario,0.5));
}

void complejo::print(double v){
	v[0]=real;
	v[1]=imaginario;
	v[2]=conjugado();
	v[3]=norma();
}

void print()

int main(){
	
	
	
	return 0;
}
