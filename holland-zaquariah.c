/*
	holland-zaquariah.c
	Assignment 4
	Zaquariah Holland
	
	This is the main.c file that calls two others (.c and .h) to
	calculate the distance and mean of two user input doubles.
*/

#include <stdio.h>
#include <math.h>
#include "PointDistance.h"

int main(int argc, char *argv[]) {
    const int N = 2;
    PointDistance points[2];
	
    // Calls callFor2Points to get two user inputs
	callFor2Points(points);
	
    //Calls calcDistance to find the distance between the two user inputs
	calcDistance(points);
	
	//Calls and prints calcMidPoint that finds the mean of the two user inputs
	printf("Midpoint between A and B is %lf\n", calcMidPoint(points));
	
    return 0;
}