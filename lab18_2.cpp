#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
	double upper,lower,left,right,width,height;

	right = min(R1->x+R1->w,R2->x+R2->w) ;
	left = max(R1->x,R2->x) ;
	upper = min(R1->y,R2->y) ;
	lower = max(R2->y-R2->h,R1->y-R1->h) ;  

	width = right-left;
	height = upper-lower;
	if(width>0 and height>0) return width*height ;
	else return 0 ;
}
