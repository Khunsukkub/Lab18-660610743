#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1 , Rect *R2){

	double overlap;

	double x1,y1,x2,y2,w,h;

	if(R1->x > R2->x) x1 = R1->x; else x1 = R2->x;
	if(R1->y > R2->y) y1 = R1->y; else y1 = R2->y;
	if(R1->w + R1->x > R2->w + R2->x) x2 = R2->w+R2->x; else x2 = R1->w+R1->x;
	if(R1->h + R1->y > R2->h + R2->y) y2 = R2->h+R2->y; else y2 = R1->h+R1->y;

	w = x2-x1;
	h = y2-y1;

	if(y2-y1 < 1){
		h = y2;
	}

	overlap = w*h;

	if(overlap <= 0){
		return 0;
	}

	return overlap;

}