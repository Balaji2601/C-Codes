#include<stdio.h>
typedef struct complex{
	double real;
	double imag;
} complex;

complex cadd(complex a,complex b){
	complex out;
	out.real = a.real + b.real;
	out.imag = a.imag + b.imag;
	return out;
}

int main(){
	complex a;
	a.real = 10;
	a.imag = 20;
	complex b;
	b.real = 20;
	b.imag = 30;
	complex c = cadd(a,b);
	printf("%lf %lf\n",c.real,c.imag);
	return 0;
}