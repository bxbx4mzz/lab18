#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double upper,lower,left,right,width,height;

	right = min(R1.x+R1.w,R2.x+R2.w) ;
	left = max(R1.x,R2.x) ;
	upper = min(R1.y,R2.y) ;
	lower = max(R2.y-R2.h,R1.y-R1.h) ;  

	width = right-left;
	height = upper-lower;
	if(width>0 and height>0) return width*height ;
	else return 0 ;

}

//test
int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);	

	cout << endl;

	Rect R3 = {1,1,5,5};
	Rect R4 = {7,2,3,3};	
	cout << overlap(R3,R4);	

	cout << endl;
	Rect R5 = {-1,2,6.9,9.6};
	Rect R6 = {0,0,1.2,2.5};	
	cout << overlap(R5,R6);	
}
