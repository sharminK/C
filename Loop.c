/*
#include <stdio.h>
//1
int main()
{

    int i, n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d, ",i);
    }

    return 0;
}


#include <stdio.h>
//2
int main()
{

    int i, n, a;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        a=1+(i-1)*2;
        printf("%d, ",a);
    }

    return 0;
}

#include <stdio.h>
//3
int main()
{

    int i, n, a;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        a=(i+1)%2;
        printf("%d, ",a);
    }

    return 0;
}

#include <stdio.h>
//4
int main()
{

    int i, n;
    float a, sum=0.0, avg;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%f",&a);
        sum+=a;

    }
    avg=sum/n;

    printf("AVG of %d inputs: %f ",i,avg);


    return 0;
}

#include <stdio.h>
//5
int main()
{

    int i, n, a, b;

    scanf("%d%d",&a,&b);

    if(a<b)
    {
        for(i=5; i<=10; i++)
        {
            a=i*i;
            if(a==b*b)
            {
                printf("Reached!\n");
                break;
            }

            printf("%d, ",i*i);
        }
    }
    else if(a>b)
    {
        for(i=10; i>=5; i--)
        {
            a=i*i;
            if(a==b*b)
            {
                printf("Reached!\n");
                break;
            }

            printf("%d, ",i*i);
        }
    }
    else if(a==b){
        printf("Reached!\n");
    }


    return 0;
}

#include <stdio.h>
//6
int main()
{

    int i, n, x, y, flag=0;

    printf("Player-1 input: ");
    scanf("%d",&x);
    printf("Guess tries: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
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
        printf("Player-1 Win! \n");



    return 0;
}



#include <stdio.h>
//7 not complete
int main()
{

    int i=0, flag=0;
    char n;

    while(1)
    {
        scanf("%c",&n);
        if(n=='A')
        {
            break;
        }

         printf("Input %d: %c\n",i,n);

       i++;
    }

    return 0;
}


#include <stdio.h>
//8
int main()
{
    int n, rev = 0, remainder;
    printf("Input: ");
    scanf("%d", &n);

    while (n)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Output: %d", rev);
    return 0;
}


#include<stdio.h>
//9
int main()
{
    float s,a,hw,ct,mt,tf;
    int n,i;
    char grade;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter score: ");
        scanf("%f%f%f%f%f", &a,&hw,&ct,&mt,&s);

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

        printf("Student %d: %c \n",i+1, grade);
    }

    return 0;
}


#include <stdio.h>
//10
int main()
{
    int n, sum=0, a;
    scanf("%d",&n);

        if(n%2==0){
            a=-n/2;
        }
        else
            a=(n+1)/2;

         printf("Results: %d\n",a);

    return 0;
}

#include <stdio.h>
//11
int main()
{
    int n,i, sum=0, eq;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        eq=(i*i)*(i+1);
        sum+=eq;
    }
    printf("Result: %d\n",sum);


    return 0;
}

#include <stdio.h>
//12
int main()
{
    int a=0,b=1, c,i,n;
    scanf("%d",&n);

    if( n==0|| n==1)
       printf("%d",b);

    printf("%d,",b);
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d,",c);
    }

    return 0;
}

#include <stdio.h>
//13
int main()
{

    int i,f=1,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
        f=f*i;

    printf("%d!= %d",n,f);

    return 0;
}

#include<stdio.h>
//14
int main()
{
    int n,i,r,nf=1,rf=1, ncr,a,af=1;
    scanf("%d%d",&n,&r);

    if(n>=r)
    {
        for(i=2; i<=n; i++)
        {
            nf=nf*i;
        }
        for(i=2; i<=r; i++)
        {
            rf=rf*i;
        }
        a=n-r;
        for(i=2; i<=a; i++)
        {
            af=af*i;
        }
        ncr=nf/(rf*af);

        printf("n=%d r=%d ncr= %d",n,r,ncr);
    }

    return 0;
}

#include<stdio.h>
#include<math.h>
//15
int main()
{

    int x,y,p;
    scanf("%d%d",&x,&y);

    p = pow(x, y);
    printf("The value: %d", p);

    return 0;
}

#include <stdio.h>
//16
int main()
{
    int num1, num2, gcd, lcm, remainder, numerator, denominator;

    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);//5 7

    if (num1 > num2)
    {
        numerator = num1;//5
        denominator = num2;//7
    }
    else
    {
        numerator = num2;//7
        denominator = num1;//5
    }
    remainder = numerator % denominator;//2
    while (remainder != 0)
    {
        numerator   = denominator;//5
        denominator = remainder;//2
        remainder   = numerator % denominator;//1
    }
    gcd = denominator;//2
    lcm = num1 * num2 / gcd;//5*7/1
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
}

#include <stdio.h>
//17
int main()
{
    int i, n;
    int flag=1;
    scanf("%d", &n);

    for(i=2; i<n; i++)
    {
        if((n%i)==0)
        {
            flag=0;
        }
    }

    if(n<=1)
        flag=0;

    if (flag==1)
        printf("%d is prime number.", n);
    else
        printf("%d is not prime number.", n);

    return 0;
}


#include <stdio.h>
//18
int main()
{
    int n, rev=0, rem, org;
    printf("Enter input: ");
    scanf("%d", &n);
    org=n;

    while (n!=0)
    {
        rem =n%10;
        rev =rev*10+rem;
        n /=10;
    }

    if (org==rev)
        printf("%d = palindrome", org);
    else
        printf("%d = not palindrome", org);

    return 0;
}

#include <stdio.h>
#include<math.h>
//19
int fact(int n)
{
    int i,nf=1;
    for(i=2; i<=n; i++)
    {
        nf=nf*i;
    }
    return nf;
}
int main()
{
    int i,x;
    float s;
    scanf("%d",&x);

    for(i=1; i<10; i++)
    {
        if(i%2!=0)
        {
            s= x -(pow(x,i)/fact(i)) ;
        }
    }
    printf("%f",s); //printf("sinx=%f",sin(x));

    return 0;
}


#include <stdio.h>
#include<math.h>
//20
int main()
{
    int i,n,sum=0,a=0;
    scanf("%d\n",&n);

    for(i=1; i<=n; i++)
    {
        a=a*10+i;
        sum+=a;
    }
    printf("output: %d\n",sum);

    return 0;
}
*/
//nested loop
/*
#include <stdio.h>
//1
//123
//123
//123

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
//2
//123
//234
//345
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n+i-1; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
//3
//1
//23
//345
int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=i+i-1; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
//4 + or
//__1
//_22
//333
/*int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=n; j>=1; j--)
        {
            if(j<=i)
                printf("%d",i);
            else
                printf("_");
        }
        printf("\n");
    }

    return 0;
}
//OR
#include <stdio.h>
//4
int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("_");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
//5
//3
//32
//321
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=n; i>=1; i--)
    {
        for(j=n; j>=i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

return 0;
}


#include <stdio.h>
//6
//1
//12
//123
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}



#include <stdio.h>
//7
//****
//****
//****
//****
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
//8
//*****
//****
//***
//**
//*
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
//9
//101
//010
//101
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n+i-1; j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
//10
//__*
//_**
//***
int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("_");
        }
        for(k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
//11
//__*
//_***
//*****
int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("_");
        }
        for(k=1; k<=i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
//12
//_*
//***
//_*
int main()
{
    int i,j,k,n;
    scanf("%d",&n);


    for(i=1; i<=n/2+1; i++)
    {
        for(j=i; j<=n/2; j++)
        {
            printf("_");
        }
        for(k=1; k<=i*2-1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    for(i=n/2; i>=1; i--)
    {
        for(j=1; j<=n/2; j++)
        {
            if(j>=i)
                printf("_");
        }
        for(k=i*2-1; k>=1; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include<stdio.h>
//13
//1_____1
//12___21
//123_321
//1234321
int main()
{
    int i,j,k,n;
     scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)    //for(j=1; j<=n-i; j++)  for(k=1; k<=n; k++) // over in 4no
        {
            if(j<=i)
                printf("%d",j);
            else
                printf("_");
        }
        for(j=n; j>=1; j--)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf("_");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
//14
//*****
//*___*
//*****
//*___*
//*****
int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {

            if(j==1||j==n){
                printf("*");
                continue;
            }
            if(i%2==0){
                printf("_");
            }
            else
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
//15
//ZZZZZ
//    Z
//  Z
//Z
//ZZZZZ

int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i==1||i==n)
        {
            for(k=1; k<=n; k++)
            {
                printf("z");
            }
        }

        for(j=2; j<=n-1; j++)
        {
            if(i+j==6)
            {
                printf("z");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
//16
//*___*
//_*_*_
//__*__
//_*_*_
//*___*
int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j || i+j==n+1)
            {
                printf("*");
            }
            else printf("_");
        }

        printf("\n");
    }


    return 0;
}


#include <stdio.h>
//18
//H   H
//H   H
//HHHHH
//H   H
//H   H

int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==1||j==n )
            {
                printf("H");
            }
            if(i==n/2+1)
            {
                for(j=1; j<=n; j++)
                {
                    printf("H");
                }
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
*/



/*

#include <stdio.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    i=n/2;
    printf("n= %d",i);

    return 0;
}


*/
































