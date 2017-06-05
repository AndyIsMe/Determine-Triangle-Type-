#ifndef _TRIANGLE_H
#define _TRIANGLE_H
/*
typedef struct triangle;


struct triangle {
  int shortside1;
  int shortside2;
  int longside;
}*/
char *sortSidesforValidTriangle (int a , int b , int c , 
                        int *shortSide1,
                        int *shortSide2,
                        int *longSide);

char  *TriangleType(int a , int b , int c );
char *Validity (int a , int b , int c ); 


#endif // _TRIANGLE_H
