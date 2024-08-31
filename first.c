// ----------------VARIABLE AND DATA TYPES-------------------------

//SUM OF TWO NUMBER GIVEN BY THE INPUT

// #include <stdio.h>  // Standard input-output header

// int main() {
//     // Your code here
//     int n1,n2;
//     printf("%d Number 1:");
//     scanf("%d",&n1);

//     printf("%d Number 2:");
//     scanf("%d",&n2);


//     printf("Total sum is %d",n1+n2);
//     return 0;  // Return 0 indicates that the program ended successfully
// }

//PROGRAM TO CALCULATE AREA OF SQUARE

// #include <stdio.h>

// int main() {
//     float side;
//     printf("Enter sides: ");
//     scanf("%f",&side);

//     printf("Area of square is %f",side*side);
//     return 0;
// }


//PROGRAM TO CALCULATE AREA OF CIRCLE

// #include <stdio.h>
// int main() {
//     float pi=3.14;
//     float radius;
//     printf("Enter radius: ");
//     scanf("%f",&radius);

//     printf("Area of circle is %.4f", pi* radius * radius);
//     return 0;
// }

// -------------------------INSTRUCTOR & VARIABLE------------------------------------------
// #include <stdio.h>
// int main() {
//     int x,y,z;
//     x=y=z=1;
//     printf("%d",x);
//     return 0;
// }

// -------------------------------------AIRTHEMATIC OPERATORSS-------------------------------------------------
#include <stdio.h>
#include <math.h>
int main() {
    // int a,b;
    // a=b=2;
    // int power;
    // power=pow(a,b);
    // printf("%d",power);

    //MODULOUS
    // printf("%f",2.0*2);


    //CHECK WETER IT IS EVEN OR NOT
    // int userinput;
    // // printf("Enter Number:");
    // // scanf("%d",&userinput);
    // printf("%d",userinput%2==0);


//WRITE A PROGRAM TO PRINT AVERAGE OF THREE INPUT
    // float n1, n2, n3;
    // float avg;

    // printf("Enter number 1: ");
    // scanf("%f", &n1);  // Use %f for float input

    // printf("Enter number 2: ");
    // scanf("%f", &n2);

    // printf("Enter number 3: ");
    // scanf("%f", &n3);

    // avg = (n1 + n2 + n3) / 3;  // Perform the average calculation

    // printf("The average is: %.2f\n", avg);  // Print as a float with 2 decimal places

    // return 0;

    // int age;
    // printf("Enter age; ");
    // scanf("%d",&age);
    // age>=18?printf("adult"):printf("not adult");

    // WRITE A PROGRAM TO  CHECK WHETER STUDENT PASS OR FAIL
    // int marks;
    // printf("ENTER MARKS: ");
    // scanf("%d",&marks);
    // if (marks>=30){     //IF ELSE CONDITIONSS
    //     printf("pass");
    // }else{
    //     printf("Fail");
    // }

    // (marks>=30)?printf("pass"):printf("fail");  //TERNARY

    // if (90<=marks && marks<100){
    //     printf("You got A+");
    // }
    // else if (70<=marks && marks<90)
    // {
    //     printf("You got A");
    // }
    // else if (30<=marks && marks<70)
    // {
    //     printf("You got B");
    // }
    // else{
    //     printf("you got c");
    // }
    
    // for (int i=0;i<=10;i++){      //FOR LOOP 
    //     printf("%d\n",i);
    // }
    // return 0;

    // int i=1;
    // while (i<=5)
    // {
    //     printf("%d\n",i);
    //     i++;
    // }

    // Practice Qs 14
    // Print the numbers from O to n, if n is given by user
    // int n;
    // printf("Enter n: ");      //WHILE LOOP USE CASE
    // scanf("%d",&n);
    // int i=0;
    // while (i<n){
    //     printf("%d\n",i);
    //     i++;
    // }

    // Print the Sum of First n Natural Numbers.
    // int n;
    // int sum=0;
    // printf("Enter number n: ");
    // scanf("%d",&n);
    // for (int j=n;j>=1;j--){
    //     sum+=j;
    //     printf("%d\n",j);
    // }
    // printf("sum is %d",sum);
    // return 0;

    //PRINT TABLE OF N
    // int n;
    // printf("Enter number n: ");
    // scanf("%d",&n);
    // for (int i=1;i<=10;i++){
    //     printf("%d\n",i*n);
    // }


    // Keep taking numbers as input from user until user enters an odd number.
    int userinput;
    do{
        printf("Enter values: ");
        scanf("%d",&userinput);
        if (userinput%7==0){
            printf("you entered odd number");
            break;
        }
    }while (1);
}
