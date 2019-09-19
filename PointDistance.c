/*
	PointDistance.c
	Assignment 4
	Zaquariah Holland
	
	
*/

#include <stdio.h>
#include <math.h>
#include "PointDistance.h"

/*
	Function: callFor2Points
	------------------------
	The function calls 2 parameters that call for 2 user values
		PointDistance* points: calls the struct array
	Returns: nothing
*/
void callFor2Points(PointDistance* points){
	printf("Type A value : ");
	scanf("%lf", &points[0].values);
	printf("Type B value : ");
	scanf("%lf", &points[1].values);
}

/*
	Function: calcDistance
	----------------------
	Useing the 2 point values they are subtracted to find the absolute distance between both
		PointDistance* points: calls the struct array
	Returns: nothing
*/
void calcDistance(PointDistance* points) {
	PointDistance distance;
	
	distance.values = fabs( points[0].values - points[1].values );
	
	printf("Distance between A and B = %lf\n", distance.values);
}

/*
	Function: calcMidPoint
	----------------------
	Both point values are added together and divided by 2 to find their mean
		PointDistance* points: calls the struct array
	Return: the mean of the point values
*/
double calcMidPoint(PointDistance* points) {
	double total;
	
	total = ( points[0].values + points[1].values ) / 2;
	
	return total;
}