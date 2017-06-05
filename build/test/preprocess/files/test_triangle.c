#include "build/temp/_test_triangle.c"
#include "triangle.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}







void test_validity_of_triangle(void)

{

  UnityAssertEqualString((const char*)(("valid")), (const char*)((Validity(3,4,5))), (

 ((void *)0)

 ), (UNITY_UINT)(16));

}



void test_Type_of_triangle_Right_angled(void){



  UnityAssertEqualString((const char*)(("right-angled")), (const char*)((TriangleType(3,4,5))), (

 ((void *)0)

 ), (UNITY_UINT)(21));

          printf("crct");



}

void test_Type_of_triangle_Obtuse(void){



  UnityAssertEqualString((const char*)(("obtuse")), (const char*)((TriangleType(3,4,4))), (

 ((void *)0)

 ), (UNITY_UINT)(27));

          printf("crct2");



}

void test_Type_of_triangle_acute(void){



  UnityAssertEqualString((const char*)(("acute")), (const char*)((TriangleType(3,3,5))), (

 ((void *)0)

 ), (UNITY_UINT)(33));

          printf("crct3");



}

void test_Type_of_triangle_isosceles(void){



  UnityAssertEqualString((const char*)(("isosceles")), (const char*)((TriangleType(4,4,5))), (

 ((void *)0)

 ), (UNITY_UINT)(39));

          printf("crct4");



}
