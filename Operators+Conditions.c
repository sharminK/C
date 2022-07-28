/*
#include <stdio.h>
//1
int main()
{
    float num1, num2;
    float sum, sub, mult;
    int div, mod;

    printf("Enter two Input: ");
    scanf("%f%f", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (int) num1 / (int) num2;
    mod = (int)num1 % (int)num2;

    printf("Addition: %.1f\n", sum);
    printf("Subtraction: %.1f\n", sub);
    printf("Multiplication: %.1f\n", mult);
    printf("Quotient: %d\n", div);
    printf("Reminder: %d\n", mod);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//2

int main(){

float a, b;
printf("Enter Input: ");
scanf("%f",&a);

b =2 * 3.1416 * a;

printf("Area: %.1f \n",b);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//3

int main(){

float a, b, x;
printf("Enter two Input: ");
scanf("%f%f",&a,&b);

x =((3.31 * pow(a,2) + 2.01 * pow(b,3)) / (7.16 * pow(b,2) + 2.01 * pow(a,3)));

printf("X: %f \n",x);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
//4

int main(){

int num, a, b, c, d;
printf("Enter Input: ");
scanf("%d",&num);
a=num;
b=num;
c=num;
d=num;

printf("X++: %d \n",a++);
printf("++X: %d \n",++b);
printf("X--: %d \n",c--);
printf("--X: %d \n",--d);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
//5

int main(){

int x, y, a, b;
printf("Enter two Input: ");
scanf("%d%d",&x,&y);

a=x;
b=y;

printf("Incremented Value: %d \n",x+=y);
printf("Decremented Value: %d \n",a-=b);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
//6

int main(){

int x, y, a, b;
printf("Enter two Input: ");
scanf("%d%d",&x,&y);

a=x;
b=y;

printf("Incremented Value: %d \n",x*=y);
printf("Decremented Value: %d \n",a/=b);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
//7

int main(){

int x;
float y;
printf("Enter two Input: ");
scanf("%d%f",&x,&y);

printf("Assignment: %f assigned to an int produces %d \n",y,(int)y) ;
printf("Assignment: %d assigned to an float produces %f \n",x,(float)x);
printf("Type Casting: (float) %d produces %f \n",x,(float)x);
printf("Type Casting: (int) %.3f produces %d \n",y, (int)y );

return 0;
}


#include <stdio.h>
#include <stdlib.h>
//8

int main()
{

    int x, y;
    printf("Enter two Input: ");
    scanf("%d%d",&x,&y);

    if(x>y)
    {

        printf("Max: %d \n",x);

    }
    else
    {
        printf("Max: %d \n",y);

    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//9

int main()
{

    int a, b, c, x, y, z;
    printf("Enter three Input: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("X: %d \n",(a – (b/3) + (c*2) – 1));
    printf("Y: %d \n",(a – ( b/ ( 3+c ) * 2) - 1));
    printf("Z: %d \n",(a– (( b/3) + c*2) - 1));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//10

int main()
{

    int a, b, c;
    printf("Enter three Input: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("a: %d \n",(a+b)<=80);
    printf("b: %d \n",!(a+c));
    printf("c: %d \n",a!=0);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
//11

int main()
{

    int a, b, c, x, y, z;
    printf("Enter three Input: ");
    scanf("%d%d%d",&a,&b,&c);

    x= ((a+b)<=80 && b>=0);
    y= ((a-b)==0||c!=0);
    z= (a!=b||(b<a)&&c>0);

    printf("1: %d \n",x);
    printf("2: %d \n",y);
    printf("3: %d \n",z);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//12

int main()
{

    float a, b, c, x, y;
    printf("Enter three Input: ");
    scanf("%f%f%f",&a,&b,&c);

    x=(((- b) + sqrt( pow(b,2)- 4*a*c))/(2*a));
    y=(((- b) - sqrt( pow(b,2)- 4*a*c))/(2*a));

    printf("output: %.2f \n",x);
    printf("output: %.2f \n",y);


    return 0;
}
#include <stdio.h>
#include<math.h>
//13

int main()
{

    float a, x;
    printf("Enter Input: ");
    scanf("%f",&x);

    if(x>=1 && x<=180)
    {
        a= (2 * cos((x*3.1416)/180)*cos((x*3.1416)/180))- (sqrt(3) * sin((x*3.1416)/180)) + sin(((x*3.1416)/180)/2);
        printf("output: %f \n",a);
    }


    return 0;
}

#include <stdio.h>
#include<math.h>
//14

int main()
{

    float x, a, b, c;
    printf("Enter Input: ");
    scanf("%f",&x);

    a= ceil(x);
    b= floor(x);
    c= abs(x);

    printf("A: %f \n",a);
    printf("B: %f \n",b);
    printf("C: %f \n",c);

    return 0;
}


#include <stdio.h>
//15

int main()
{

    printf("Size of int in byte(s) =  %d \n",sizeof(int));
    printf("Size of float in byte(s) =  %d \n",sizeof(float));
    printf("Size of double in byte(s) =  %d \n",sizeof(double));
    printf("Size of char in byte(s) =  %d \n",sizeof(char));


    return 0;
}


*/
/* condition
#include <stdio.h>
//1

int main()
{

    float x;
    printf("Enter Input: ");
    scanf("%f",&x);

    if(x>=0){
        printf("Positive \n");
    }else{
    printf("Negative \n");
    }

    return 0;
}

#include <stdio.h>
//2

int main()
{

    int x;
    printf("Enter Input: ");
    scanf("%d",&x);

    if(x%2==0){
        printf("Even \n");
    }else{
    printf("Odd \n");
    }

    return 0;
}


#include <stdio.h>
//3

int main()
{
    int x;
    printf("Enter Input: ");
    scanf("%d",&x);

    switch(x)
    {
    case 0 :
        printf("Zero \n");
        break;

    case 1 :
        printf("One \n");
        break;

    case 2 :
        printf("Two \n");
        break;

    case 3 :
        printf("Three \n");
        break;

    case 4 :
        printf("Four \n");
        break;

    case 5 :
        printf("Five \n");
        break;

    case 6 :
        printf("Six \n");
        break;

    case 7 :
        printf("Seven \n");
        break;

    case 8 :
        printf("Eignt \n");
        break;

    case 9 :
        printf("Nine \n");
        break;

    default :
        printf("Enter 0 to 9 \n");
        break;
    }
}

#include <stdio.h>
//4

int main()
{
    int x, y, z;

    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &x, &y, &z);

    if(x!=0 && y!=0 && z!=0)
    {
        if((x+y+z) > 0 && (x+y+z) <= 180)
        {
            printf("Yes \n");
        }
        else
        {
            printf("No \n");
        }
    }
    else
    {
        printf("No \n");
    }

    return 0;
}

#include <stdio.h>
//5

int main()
{
    int x, i, flag=0;

    printf("Enter Input: ");
    scanf("%d", &x);

    if (x == 0)
        printf("No \n");

    while (x != 1)
    {
        if (x % 2 != 0)
        {
            flag=1;
        }
        x = x / 2;
    }

    if(flag==1)
    {
        printf("No \n");
    }
    else
    {
        printf("yes \n");
    }

    return 0;
}

#include <stdio.h>
//6

int main()
{
    int x, i, flag=0;

    printf("Enter Input: ");
    scanf("%d", &x);

    if (x == 0)
    {
        printf("Zero is not a valid input \n");
    }
    else if(x<0)
    {
        printf("Negative input is not valid \n");
    }

    while (x != 1)
    {
        if (x % 2 != 0)
        {
            flag=1;
        }
        x = x / 2;
    }

    if(flag==1)
    {
        printf("No \n");
    }
    else
    {
        printf("yes \n");
    }

    return 0;
}


#include <stdio.h>
//7

int main()
{
    int x, y;

    printf("Enter two input: ");
    scanf("%d%d", &x, &y);

    if(x>y)
    {
        printf("%d is greater than %d \n",x,y);
    }
    else if(x<y)
    {
        printf("%d is less than %d \n",x,y);
    }
    else if(x==y)
    {
        printf("%d is equal to %d \n",x,y);
    }
    else
    {
        printf("Not valid input \n");
    }

    return 0;
}


#include <stdio.h>
//8

int main()
{

    int y;
    printf("Enter a year: ");
    scanf("%d",&y);

    if (( y % 4 == 0 && y % 100 != 0 ) || ( y % 400 ==0 ))
    {
        printf("Yes \n");
    }
    else
    {
        printf("No \n");
    }

    return 0;
}

#include <stdio.h>
//9

int main()
{
    char y;
    printf("Enter a input: ");
    scanf("%c",&y);

     if((y >= 'a' && y <= 'z') || (y >= 'A' && y <= 'Z'))
    {
        printf("Alphabet \n");
    }
    else if(y >= '0' && y <= '9')
    {
        printf("Digit \n");
    }
    else
    {
        printf("Special \n");
    }

    return 0;
}

#include<stdio.h>
#include<conio.h>
//10

int main()
{
    float a, b;
    char op;
    printf("\nEnter the operator (+-/*): ");
    scanf("%c",&op);
    printf("\nEnter two input: ");
    scanf("%f%f",&a,&b);


    switch(op)
    {
    case '+' :
        printf("Addition : %.0f \n",a+b);
        break;
    case '-' :
        printf("Subtraction : %.0f \n",a-b);
        break;
    case '*' :
        printf("Multiplication : %.0f \n",a*b);
        break;
    case '/' :
        if(b!=0)
        {
            printf("Division : %f \n",a/b);
        }
        else
        {
            printf("Division: Zero as divisor is not valid! ");
        }
        break;
    default	:
        printf(" Enter correct input. ");
        break;
    }
    return 0;
}

#include<stdio.h>
//11
int main()
{
    int s;
    char grade;
    printf("Enter score( 0-100 ): ");
    scanf("%d", &s);

    if(s>=90 && s<=100)
    {
        grade = 'A';
    }
    else if(s>=86)
    {
        grade = 'A-';
    }
    else if(s>=82)
    {
        grade = 'B+';
    }

    else if(s>=78)
    {
        grade = 'B';
    }

    else if(s>=74)
    {
        grade = 'B-';
    }

    else if(s>=70)
    {
        grade = 'C+';
    }

    else if(s>=66)
    {
        grade = 'C';
    }
    else if(s>=62)
    {
        grade = 'C-';
    }

    else if(s>=58)
    {
        grade = 'D+';
    }

    else if(s>=55)
    {
        grade = 'D';
    }
    else
        grade = 'F';

    printf("Grade: %c \n", grade);

    return 0;
}

#include<stdio.h>
#include<conio.h>
//12
int main()
{
    float a,b;
    int op;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values a & b: ");
    scanf("%f %f",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&op);

    switch(op)
    {
    case 1	:
        printf("Addition : %.0f \n",a+b);
        break;
    case 2	:
        printf("Subtraction : %.0f ",a-b);
        break;
    case 3	:
        printf("Multiplication : %.0f",a*b);
        break;
    case 4	:
        printf("Division : %.0f ",a/b);
        break;
    default	:
        printf(" Enter Correct Choice.");
        break;
    }
    return 0;
}
#include<stdio.h>
#include<conio.h>
//13
int main()
{
    float a,b;
    int op, r;
    int x;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values a & b: ");
    scanf("%f %f",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&op);

    switch(op)
    {
    case 1	:
        printf("Addition : %.0f \n",a+b);
        break;
    case 2	:
        printf("Subtraction : %.0f ",a-b);
        break;
    case 3	:
        printf("Multiplication : %.0f",a*b);
        break;
    case 4	:
        printf(" 1.Quotient \n 2.Reminder\n");
        printf("Enter your Choice : ");
        scanf("%d",&r);

        switch(r)
        {
        case 1	:
            printf("Quotient : %.0f \n",a/b);
            break;
        case 2	:

            // x= int(a) % int(b);
            printf("Reminder : %d ",x);
            break;
        }

        break;
    default	:
        printf(" Enter Correct Choice.");
        break;
    }
    return 0;
}

#include<stdio.h>
#include<conio.h>
//14
int main()
{
    float a,b;
    int op, r;
    int x;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values a & b: ");
    scanf("%f %f",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&op);

    switch(op)
    {
    case 1	:
        printf("Addition : %.0f \n",a+b);
        break;
    case 2	:
        printf("Subtraction : %.0f ",a-b);
        break;
    case 3	:
        printf("Multiplication : %.0f",a*b);
        break;
    case 4	:
        printf(" 1.Quotient \n 2.Reminder\n");
        printf("Enter your Choice : ");
        scanf("%d",&r);

        switch(r)
        {
        case 1	:
            if(b!=0)
            {
                printf("Quotient : %.0f \n",a/b);
            }
            else
                printf("Error: Divisor is zero\n");
            break;
        case 2	:

            // x= int(a) % int(b);
            printf("Reminder : %d ",x);
            break;
        }

        break;
    default	:
        printf(" Enter Correct Choice.");
        break;
    }
    return 0;
}

#include <stdio.h>
//15

int main()
{
    int x, y, i;
    printf("Player-1 input: ");
    scanf("%d",&x);
    int flag=0;

    for(i=0; i<3; i++){
        printf("Player-2 %d Guess: ", i+1);
        scanf("%d",&y);
        if(x==y)
        {
            flag=1;
            break;
        }
        else
        {
            printf("Wrong, %d Chance(s) Left!\n",2-i);
        }
    }
    if(flag==1)
    {
        printf("Right, Player-2 wins!\n");
    }
    else
        printf("Player-1 Win!\n ");


    return 0;
}

*/

























/*
#include <stdio.h>
#include <stdlib.h>


int main(){

float a;
scanf("%f",&a);

printf("(a)val: %10.6f \n(b)val: %f \n(c)val: %.2f \n(d)val: %.f \n(e)val: %e \n",a,a,a,a,a);

return 0;
}
*/
