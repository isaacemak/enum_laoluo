
#include<stdio.h>
#include<stdlib.h>

bool isequal(double v1, double v2){
	return ((-(1e-5)<v1-v2) && (v1-v2)<(1e-5));
}

bool isvalid(double v, double min, double max){
	return (isequal(v,int(v)) && (v>=min-1e-5) && (v<=max+1e-5));
}

int main(){

	
	double a, b, c, d, e, f, g, h;
	double min=0;
	double max=99;
	
	for (a=min; a<=4; a++)
		for (c=4; c<=max; c++)
			for (d=min; d<=max; d++){
				
				b=13-a;
				e=(c-4)/d;
				f=c/(4-a);
				g=(b-4)/d;
				h=5-e;
				
				if (isvalid(b, min, max) &&
					isvalid(e, min, max) &&
					isvalid(f, min, max) &&
					isvalid(g, min, max) &&
					isvalid(h, min, max) 
					&&	isequal(f+g-h,4) )
					{
						printf ("%.0lf %.0lf %.0lf %.0lf %.0lf %.0lf %.0lf %.0lf\n", a, b, c, d, e, f, g, h);
					
					}
			}
	
	return 0;
}