#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
//1
void function(){
  printf("This is a function\n");
}

int main() {

  function();
}


//2
void function(char str[])
{
    printf("Value received from main: %s\n",str);
}

int main()
{
    char str[10];

    scanf("%s",&str);
    function(str);

    return 0;
}


//3
void function(int a)
{
    if(a%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

int main()
{
    int a;

    scanf("%d",&a);
    function(a);

    return 0;
}

//4
void function(int a)
{
    if(a==0)
    {
        printf("Zero\n");
    }
    else if(a>0)
    {
        printf("Positive\n");
    }
    else if(a<0)
    {
        printf("Negative\n");
    }
}

int main()
{
    int a;

    scanf("%d",&a);
    function(a);

    return 0;
}


//5
void function(int a, int b)
{
    if(a==b)
    {
        printf("%d is equal to %d\n",a,b);
    }
    else if(a>b)
    {
        printf("%d is greater than %d\n",a,b);
    }
    else if(a<b)
    {
        printf("%d is less than %d\n",a,b);
    }
}

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);
    function(a,b);

    return 0;
}

/*

//6 not done
int function(int a)
{
    int b;
    static sum=0;


    sum+=a;

    printf("Sum In Function: %d\n",sum);

    return sum;


}

int main()
{
    int add,sum,a;
while(1)
    scanf("%d",&a);
    function(a);


    add=sum;
    printf("Sum In Main: %d\n",add);

}


//6 not done
int sum(int n)
{
    int add=0;
    while(1){
        add+=n;
    }
    printf("Sum In Function: %d\n",add);
    return add;

}

int main()
{
    int n, result;

    scanf("%d",&n);
    result = sum(n);
    printf("Sum In Main: %d\n",result);

}




//7
int sum(int n)
{
    int add=0,a;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        add+=a;
    }
    printf("Sum In Function: %d\n",add);
    return add;
}

int main()
{
    int n, result;
    scanf("%d",&n);
    result = sum(n);
    printf("Sum In Main: %d\n",result);
}



//8
void rev(int n)
{
    int a[10],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }

}

int main()
{
    int n;
    scanf("%d",&n);
    rev(n);

}

//9
void fact(int n)
{
    int i,f=1;

    for(i=1; i<=n; i++)
        f=f*i;

    printf("%d!= %d",n,f);
}
int main()
{
    int n;
    scanf("%d",&n);
    fact(n);

    return 0;
}



//10
void function(int a, int b)
{
    int c= pow(a,b);
        printf("%d to the power %d is %d\n",a,b,c);

}

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);
    function(a,b);

    return 0;
}



//11
void function(char s[])
{
    int l = strlen(s);
    printf("String length: %d\n",l);
}

int main()
{
    char s[10];

    scanf("%s",&s);
    function(s);

    return 0;
}


//12
void swap(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("\nValue in func:  x=%d, y=%d", x, y);
}

int main()
{
    int x,y;

    scanf("%d%d",&x,&y);
    swap(x, y);

    printf("\nValue in main:  x=%d, y=%d", x, y);
    return 0;
}

//13 pass by referance


//14
void even(int n)
{
    int a[10],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0){
          printf("%d ",a[i]);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    even(n);
}


//15
void min(int n)
{
    int i, min=1000;
    int a[10];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nMin %d ",min);

}

int main()
{
    int n;
    scanf("%d",&n);
    min(n);
}


//16
void multi(int n)
{
    int i;
    int a[10];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

  for(i=0; i<n; i++)
    {
          printf("%d ",a[i]*2);
    }

}

int main()
{
    int n;
    scanf("%d",&n);
    multi(n);
}


//17
void multi(int n)
{
    int i,j;
    int a[10];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        int min=1000,min_index=i;

        for(j=i; j<n; j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                min_index=j;
            }
        }
        a[min_index]=a[i];
        a[i]=min;
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    multi(n);
}


//18
void isprime(int n)
{
    int i, flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        // condition for non-prime
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (n == 1)
    {
        printf("%d is not a prime number.", n);
    }
    else
    {
        if (flag == 1)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    isprime(n);
}



//19
int GeneratePrime(int n)
{
    int i,j, flag = 0;

    printf("Prime less than 5: ");
    for (i = 2; i < n ; i++ )
    {
        for(j=2; j<=i-1; j++)
        {
            if (i%j == 0)
            {
                break;
            }
        }

        if(j==i)
        {
            printf("%d, ", i);
            j++;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    GeneratePrime(n);
}


//20
void GenNthPrime(int n)
{
    int c=0,num=2,i,letest=0;

    while (c != n)
    {
        int count = 0;
        for (i = 2; i <= sqrt (num); i++)
        {
            if (num%i==0)
            {
                count++;
                break;
            }
        }
        if (count==0)
        {
            c++;
            letest = num;
        }
        num = num + 1;
    }
    printf ("%dth prime number is: %d ",n,letest);
}

int main ()
{
    int n;
    printf ("Enter Nth Number\n");
    scanf ("%d", &n);
    GenNthPrime(n);
}



//24
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is: %d ", a, b, gcd(a, b));
    printf("\nLCM of %d and %d is: %d ", a, b, lcm(a, b));
    return 0;
}

//25
int InputMatrix()
{
    int a[3][5],i,j;
    printf("enter the first matrix element=\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    return ShowMatrix(a);
}

int ShowMatrix(int a[3][5])
{
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return ScalarMultiply(a);
}

int ScalarMultiply(int a[3][5])
{
    int n,mul[3][5],i,j,k;
    printf("multiply of the matrix= ");
    scanf("%d",&n);
    printf("\nmultiply by %d=\n",n);

    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            mul[i][j]=0;

            mul[i][j]=a[i][j]*n;

        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("row*3, column*5:\n");
    InputMatrix();
}

*/

/*

int sum(int n)
{
    int add=0,a;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        add+=a;
    }
    printf("Sum In Function: %d\n",add);
    return add;
}

int main()
{
    int n, result;
    scanf("%d",&n);
    result = sum(n);
    printf("Sum In Main: %d\n",result);
}

*/
/*
#include<string.h>
void main(){
 int a = 1071% 8;
 char str1[50] = "011171071";
  printf("\nstr1: %s\n",str1);
 char arr[8][20] = {"is truthful",
 "is honest",
 "is friendly",
 "is brave",
 "is trustworthy",
 "is straightforward",
 "is simple",
 "is dependable"};

 strcat(str1, "-");
  printf("\nstr1: %s\n",str1);
 strcat(str1, arr[a]);
  printf("\nstr1: %s\n",str1);
 strcpy(str1, strstr(str1, "s "));
 printf("\nstr1: %s\n",str1);
}


int num1=-1, num2=-1;
int f1(float x);
void f2(int x, float y);
int main(){
 num1 = 1071 % 7;
 num2 = f1(num1);
  f2(12, 15.0);
 printf("num1: %d\n",num1);
  printf("num2: %f\n",num2);
 return 0;
}
int f1(float x) {
 num2 = x*num1;
   printf("num: %f\n",num2);
 return num2-1;
}
void f2(int num1, float num2){
 num1 = num1+num2;
 num2 = num1-num2;
 printf("num1: %d\n",num1);
  printf("num2: %f\n",num2);
}


*/

#include<stdio.h>
int a, b;
int func1(float x);
void func2(int x, float y);
int main(){
 a=071%5;
 b=071/5;
 printf("%d %d\n", b, a);
 a=func1(b+5.5);
 func2(12, 15.0);
 printf("kk%d %d\n", a, b);
 return 0;
}
int func1(float x) {
 b=b*a;
 printf("x %f\n", x);
 func2(5, 4.5);
 return b-1;
}
void func2(int x, float y){
 printf("x y %d %f\n", x, y);
 return;
}












