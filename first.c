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
// #include <stdio.h>
// #include <math.h>
// int main() {
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
    // int userinput;
    // do{
    //     printf("Enter values: ");
    //     scanf("%d",&userinput);
    //     if (userinput%7==0){
    //         printf("you entered odd number");
    //         break;
    //     }
    // }while (1);

    //CONTINUE

    // Print all numbers from 1 to 10 except for 6.
    // for(int i=1;i<=10;i++){
    //     if (i==6){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }


    // Print all the odd numbers from 5 to 50.

    // for(int i=5;i<=50;i++){
    //     if (i%2!=0){
    //         printf("%d\n",i);
    //     }
    // }

    // Print the factorial of a number n.
    // int n;
    // int fact=1;
    // printf("Enter Number for factorial: ");
    // scanf("%d",&n);
    // for (int i=1;i<=n;i++){
    //     fact*=i;
    // }
    // printf("The factorial is %d",fact);


    // Print reverse of the table for a number n.
    // int num;
    // printf("Enter number for table: ");
    // scanf("%d",&num);
    // for (int i=10; i>=1;i--){
    //     printf("%d\n",i*num);
    // }
    

    // Calculate the sum of all numbers between 5 and 50.(including 5 & 50)
    // int sum=0;
    // for (int i=5; i<=50;i++){
    //     sum+=i;
    // }
    // printf("The sum of the numbers is %d",sum);


    // Search on what a "nested loop" is & print this pattern using it.
    // *****
    // *****
    // *****

    // for (int i = 0; i < 3; i++) {
    //     // Inner loop for columns
    //     for (int j = 0; j < 5; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // return 0;

    // Write a program to check if a number is prime or not.
    // int num;
    // int count=0;
    // printf("Enter Number: ");
    // scanf("%d",&num);
    // for (int i=1; i<=num;i++){
    //     if(num%i==0){
    //         count+=1;
    //     }
    // }
    // if (count==2){
    //     printf("%d is prime number", num);
    // }
    // else{
    //     printf("%d is not prime number", num);

    // }

//     #include <stdio.h>
//     void printhello();  //DECLRATION FUNCTION
//     void printgoodbye();
//     int main() {
//         printhello();   //FUNCTION CALL
//         printgoodbye();
//         return 0;
// }
//     void printhello(){
//         printf("Hello World\n");   //FUNCTION DEFINITION
//     }
//     void printgoodbye(){
//         printf("good bye\n");
//     }
// #include <stdio.h>
// int a,b;
// int sum(int a,int b);

// int main(){
//     printf("Enter number 1: ");
//     scanf("%d",&a);

//     printf("Enter number 2: ");
//     scanf("%d",&b);

//     printf("sum is %d",sum(a,b));
//     return 0;
// }
// int sum(int a,int b){
//     return a+b;
// }

// Use library functions to calculate the square of a number given by user.

// #include <stdio.h>
// #include <math.h>
// int square(int n);
// int main(){
//     int n;
//     printf("Enter Number: ");
//     scanf("%d",&n);
//     printf("The square of the number is %d",square(n));
//     return 0;
// }
// int square(int n){
//     return pow(n,2);
// }

// Write functions to calculate area of a square, a circle & a rectangle.
// #include <stdio.h>
// #include <math.h>

//AREA OF SQUARE
// float areasquare(float n);
// int main(){
//     float n;
//     printf("Enter side: ");
//     scanf("%f",&n);
//     printf("The area of square %f",areasquare(n));

//     return 0;
// }
// float areasquare(float n){
//     return pow(n,2);
// }

//AREA OF A CIRCLE
// float pi=3.14;
// float areacircle(float rad);
// int main(){
//     float rad;
//     printf("Enter radius: ");
//     scanf("%f",&rad);
//     printf("The area of circle %f",areacircle(rad));

//     return 0;
// }
// float areacircle(float rad){
//     return pi*(rad*rad);
// }

//AREA OF RECTANGLE
// float length,width;
// float arearectangle(float length,float width);

// int main(){
//     printf("Enter length: ");
//     scanf("%f",&length);
//     printf("Enter width: ");
//     scanf("%f",&width);
//     printf("The area of rectangle %f",arearectangle(length,width));

//     return 0;
// }
// float arearectangle(float length,float width){
//     return length*width;
// }
// ---------------------RECURSION-----------------------------

// Sum of first n natural numbers.

// #include <stdio.h>
// #include <math.h>

// //declaring fucntion
// int sum(int n);
// int main(){
//     printf("the sum is %d",sum(6));
//     return 0;
// }
// int sum(int n){
//     if (n==1){
//         return n;  //RETURN 1
//     }
//     int prevSum=sum(n-1);  //CALL FOR N-1 NUMBERS
//     int sum=prevSum+n;  //N-1+N
//     return sum;
// }

//FACTORIAL OF N

// #include <stdio.h>
// #include <math.h>
// int factorial(int n);

// int main(){
//     printf("The factorial of number is %d",factorial(35));
//     return 0;
// }
// int factorial(int n){
//     if (n==1){
//         return n;
//     }
//     int prevfact=factorial(n-1);
//     int fact=prevfact*n;
//     return fact;
// }

// Write a function to convert celsius to fahrenheit.
// #include <stdio.h>
// #include <math.h>
// float convertFarenheit(float temp);
// int main(){
//     printf("Given temperature in farenheit is Farenheit %f", convertFarenheit(16));
//     return 0;
// }
// float convertFarenheit(float temp){
//     float far_temp=temp*(9.0/5.0)+32;
//     return far_temp;
// }

// Write a function to print n terms of the fibonacci sequence.
// #include <stdio.h>
// #include <math.h>

// int fibonanci(int num);
// int main(){
//     printf("%d",fibonanci(3));
//     return 0;
// }
// int fibonanci(int num){
//     if (num==1){
//         return 1;
//     }
//     if (num==0){
//         return 0;
//     }

//     int FibNm1=fibonanci(num-1);
//     int FibNm2=fibonanci(num-2);
//     int FibN=FibNm1+FibNm2;

//     return FibN;
// }