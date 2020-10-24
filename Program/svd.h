/*************************************************************
 * 一般实矩阵的奇异值分解，参见《c 常用算法程序集》徐世良P169
 *************************************************************/
#ifndef _SVD_H
#define _SVD_H
#define MAX_ITERA 60
#define MIN_DOUBLE (1e-30)

#include "stdlib.h"
#include "math.h"

////////////////////////////////////////SVD///////////////////////////////////////////
int dluav(float a[], int m, int n, float u[], float v[], float eps, int ka);
void ppp(float a[], float e[], float s[], float v[],int m,int n);
void sss(float fg[2], float cs[2]);
////////////////////////////////////////SVD///////////////////////////////////////////

///////////////////////////////////////////矩阵相乘//////////////////////////////////////
void arymul1(float* a, float* b, float* c);
///////////////////////////////////////////矩阵相乘//////////////////////////////////////

///////////////////////////////////////////矩阵求逆///////////////////////////////////////
void myInvert(float* c, float* inv);
void p(float a[3][6], int n);
void f(float a[3][6], int n);
void fap(float a[3][6], int n, int m);
/////////////////////////////////////////矩阵求逆/////////////////////////////////////

#endif