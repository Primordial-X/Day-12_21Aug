#include <stdio.h>
#include <math.h>

//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

int main() {
    int late_days;
    int fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 5) {
        fine = late_days * 2;
        printf("Fine ₹%d\n", fine);
    } else if (late_days <= 10) {
        fine = 10 + ((late_days - 5) * 4);
        printf("Fine ₹%d\n", fine);
    } else if (late_days <= 30) {
        fine = 10 + 20 + ((late_days - 10) * 6);
        printf("Fine ₹%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}

//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

int main() {
    int units;
    int bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 500 + ((units - 100) * 7);
    } else if (units <= 300) {
        bill = 500 + 700 + ((units - 200) * 10);
    } else {
        bill = 500 + 700 + 1000 + ((units - 300) * 12);
    }

    printf("Bill: ₹%d\n", bill);

    return 0;
}