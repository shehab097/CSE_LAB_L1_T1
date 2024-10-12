#include<stdio.h>
#include<math.h>
int main() {
    //i = pnr
    double p, t, r;
    printf("Enter principle amount, time (y) and Rate of interest(%) :: ");
    scanf("%lf %lf %lf", &p, &t, &r);

    double SI = (p * t * r) / 100.0;            //simple
    printf("simple interest :: %.2lf Tk.\n", SI);

    int n;                                      //compound
    printf("\nEnter number of times interest is compounded per year (n) :: ");
    scanf("%d", &n);

    double CI = (p * pow((1 + ((r / 100) / (double)n)), ((double)n * t))) - p;//calc

    printf("\ncompound interest :: %lf Tk.\n", CI);

    return 0;
}

/*
Simple interest is calculated by multiplying the interest rate by the principal amount
and the time period which is generally in years. The S.I. formula is given as:

Simple Interest (SI) = P × T × R ⁄ 100
*/

/*
A = amount
P = principal
r = rate of interest
n = number of times interest is compounded per year
t = time (in years)
*/

// 3.Write a program to calculate simple and compound interest.