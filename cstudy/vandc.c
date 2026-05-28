/* 多行注释 */
// 单行注释


//  变量和常量
// 方式1

//int age  ;
//char eva ;
//age = 24 ;
//eva= 'A' ;

//方式2
/*
int age =25 ;
char eva='A' ;
*/
// 方式3
/*
double height ,weight ;
height =180.5 ; 
weight = 75.5 ;
*/

// 方式4
/*
double height =180.5,weight;
weight =75.5;
*/
#include <stdio.h>

#define PI 3.14

double circle_area(double r)
{
    double S = PI * r * r;
    return S;
}

int main()
{
    double area = circle_area(5);

    printf("%lf\n", area);

    return 0;
}
