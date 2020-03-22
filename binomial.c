#include<stdio.h>
#include<math.h>
typedef struct poly
{
	int degree;
	int coefficent[3];
}poly;

typedef struct complex{
	double real;
	double imag;
} complex;

typedef struct ans
{
	complex r1;
	complex r2;
}ans;

ans roots(poly p){
	ans out;
	int a =	p.coefficent[0];
	int b = p.coefficent[1];
	int c = p.coefficent[2];
	float d = (b*b)-(a*4*c);
	if(d < 0){
		out.r1.real = -((float)b)/(2*a);
		out.r2.real = -((float)b)/(2*a);
		out.r1.imag = sqrt(-d)/(2*a);
		out.r2.imag = -sqrt(-d)/(2*a);
	}
	else{
		out.r1.real = -((float)b)/(2*a)+ sqrt(-d)/(2*a);
		out.r2.real = -((float)b)/(2*a)- sqrt(-d)/(2*a);
	}
	return out;

}
int main(){
	poly p = {2, {1,2,3}};
	ans c = roots(p);
	printf("%lf %lf\n",c.r1.real,c.r1.imag );
	printf("%lf %lf\n",c.r2.real,c.r2.imag );
	return 0;
}