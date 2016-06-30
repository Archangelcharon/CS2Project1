//Zach Oryszak-Ley
#include <iostream>
#include "Ball.h"

using namespace std;

//DO NOT CHANGE THIS FUNCTION
//this is a test program. It's writen for testing purpose and will be used as the first test case.
int main() {
	Ball ball[6];
	srand(10);
	
	Color c0 = {rand()%256,rand()%256,rand()%256};
	Color c1 = {rand()%256, rand()%256, rand()%256};
	
	ball[0].setRadius(100);
	ball[1] = Ball(rand()%10, c0); 
	ball[2] = Ball(rand()%10, c1);		
	ball[3] = ball[1]+ball[2];
	
	if (ball[1] <= ball[2])
		ball[4] = ball[1];
	else if (ball[1] >= ball[2])
		ball[4] = ball[2];
	else 
		ball[4] = ball[3];
		
	Point3D newP = ball[5].getPos();
	newP.move(10.,12.,15.);
	ball[5].setPos(newP);
	
	for (int i=0; i<6; i++) {
		cout << i <<": " << ball[i] << endl;
	}
	
	ball[0]--;
	ball[1]++;
	cout <<"0: " << ball[0] << endl;
	cout <<"1: " << ball[1] << endl;
	
	return 0;
}
