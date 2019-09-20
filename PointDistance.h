/*
	PointDistance.h
	Assignment 4
	Zaquariah Holland
	
	header file to be use in both PointDistance.c and holland-zaquariah-project4.c
*/

#ifndef POINTDISTANCE_H
#define POINTDISTANCE_H

typedef struct PointDistance_struct
{
	double values;
} PointDistance;

void callFor2Points(PointDistance* points);
void calcDistance(PointDistance* points);
double calcMidPoint(PointDistance* points);

#endif