#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void test1(int m, int n);
void test2(int *m, int *n);
void test3(int m, int *n);

void area_circum(double radius, double *area, double *circum);

int main()
{
    int *p;
    int n = 84;
    p = &n;
    printf("%d\n",p);
    printf("%d\n",n);
    printf("%d\n",*p);
    printf("%p\n",p);
    *p = 3;
    printf("%d\n",n);


    int a = 10, b =16;
    printf("a=%d, b=%d\n",a,b);
    test1(a,b);
    printf("a=%d, b=%d\n",a,b);
    test2(&a,&b);
    printf("a=%d, b=%d\n",a,b);
    test3(a, &b);
    printf("a=%d, b=%d\n",a,b);

    double radius, area, circum;
    printf("Enter radius\n");
    scanf("%lf", &radius);
    area_circum(radius,&area, &circum);
    printf("area=%.2f, circum=%.2f",area, circum);
    return 0;
}

void area_circum(double radius, double *area, double *circum){
    *area = 3.14 * radius * radius;
    *circum = 2 * 3.14 * radius;
}

void test1(int m, int n){
    m = 5;
    n= 24;
}
void test2(int *m, int *n)
{
    *m = 5;
    *n = 24;
}
void test3(int m, int *n)
{
    m = 5;
    *n = 57;
}