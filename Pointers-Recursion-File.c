#include<stdio.h>

#include<string.h>

/*
//1
int main()
{
    int a, b, *p, *q, sum;

    printf("Enter two values\n");
    scanf("%d%d", &a, &b);

    p = &a;
    q = &b;
    sum = *p + *q;

    printf("Sum= %d\n", sum);

}


//2
int main()
{
    int a, b, *p, *q;

    printf("Enter two values\n");
    scanf("%d%d", &a, &b);

    p = &a;
    q = &b;
    if(*p>*q)
    {
        printf("Max= %d\n", *p);
    }
    else
        printf("Max= %d\n", *q);
}


//3
int main()
{
    int a[]={1, 2, 3, 4, 5};
    int i, *p;
    p = a;

    for(i=0;i<5;i++){
        printf("Array: %d\n", *p++);
    }

   // printf("array= %d\n", *p);
   // printf("array= %d\n", *p+1);
   // printf("array= %d\n", *p+2);
   // printf("array= %d\n", *p+3);
    //printf("array= %d\n", *p+4);
}


//4
int main()
{
    char str[20], *p;
    int i = 0;
    printf("Enter value\n");
    gets(str);
    p = str;
    while (*p != '\0')
    {
        i++;
        p++;
    }
    printf("Length of String : %d", i);
}



//5
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n1,n2;

   printf("Enter two values\n");
    scanf("%d %d",&n1,&n2);

    printf("Before  Swapping: %d,%d\n",n1,n2);
    swap(&n1,&n2);
    printf("After  Swapping: %d,%d\n",n1,n2);
}


//6
int main()
{
    char str[100];
    char *p;
    int  vCount=0,cCount=0;

    printf("Enter any string: ");
    fgets(str, 100, stdin);

    p=str;

    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
        p++;
    }

    printf("Vowels in String: %d\n",vCount);
    printf("Consonants in String: %d",cCount);
    return 0;
}


//7
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("\n%d",&a[i]);
    }

    int *ptr,sum=0;
    for(ptr=&a[0]; ptr<=&a[n]; ptr++)
    {
        sum+=*ptr;
    }

    printf("\nSum %d\n",sum);


    return 0;
}


//8
int main()
{
    int arr[50];
    int n, i;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nreverse order: ");
    for(i = n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


//9
void display(int num)
{
    if(num)
        display(num-1);
    else
        return;

    printf("%d\n", num);
}

int main()
{
    int n;

    printf("Enter the number of terms to be printed\n");
    scanf("%d", &n);

    display(n);

    return 0;
}

//10
int display(int num)
{
    int sum=0;
    if(num)
    {
        return num + display(num-1);
    }
    else
        return ;

}

int main()
{
    int n;

    printf("Enter the number of terms to be printed\n");
    scanf("%d", &n);

    printf("\nSum: %d\n",  display(n));
    return 0;
}


//11
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main ()
{
    int n;
    scanf("%d", &n);

    printf("\n%d\n", fib(n));
    getchar();
    return 0;
}


//12
void printArray(int arr[], int start, int len)
{
    if(start >= len)
        return;

    printf("%d, ", arr[start]);

    printArray(arr, start + 1, len);
}
int main()
{
    int arr[20];
    int n, i;

    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array: ");
    printArray(arr, 0, n);
    return 0;
}


//13
int countDigits(int num)
{
    static int count=0;

    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;

    printf("Enter the number: ");
    scanf("%d",&number);

    count=countDigits(number);

    printf("Total digits in number %d is: %d\n",number,count);
    return 0;
}


//14
int n;
int getMaxElement(int a[])
{
    static int i = 0, max =- 9999;
    if(i < n)
    {
        if(max < a[i])
            max = a[i];

        i++;
        getMaxElement(a);
    }
    return max;
}

int main()
{

    int arr[20], max, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\nEnter %d elements\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = getMaxElement(arr);
    printf("\nLargest element of the array is %d\n", max);
    return 0;
}


//16
void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s = not palindrome\n", str);
            return;
        }
    }
    printf("%s = palindrome\n", str);
}

int main()
{
    isPalindrome("maam");
    isPalindrome("abbcsd");
    return 0;
}

*/
























/*
//scanf("%d%d",&a,&b);
//fprintf(p, "\n %d %d",a,b);

//17
int main()
{
    FILE * fp;
    fp = fopen("sample.txt", "w");

    if(fp == NULL)
    {
        printf("\nFile couldn't be open");
    }

    fputs("1 Zahid", fp);
    fputs("\n2 Tanvir", fp);
    fputs("\n3 Akif", fp);

    fclose(fp);
    return (0);
}


//18 //19
int main()
{
    char ch;
    FILE *fp;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("\nFile couldn't be open");

    }

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
    return 0;
}


//20
int main()
{
    int count = 0;
    char ch;
    FILE *fp;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("\nFile couldn't be open");

    }
    while((ch = fgetc(fp)) != EOF)
        if (ch == '\n')
            count = count + 1;

    fclose(fp);
    printf("The file has %d lines\n ", count+1);

    return 0;
}


//21
int main()
{
    FILE *fPtr;
    char filePath[100],ch;

    char dataToAppend[50];

    printf("Enter file path: ");
    scanf("%s", filePath);

    fPtr = fopen(filePath, "a");

    if (fPtr == NULL)
    {
        printf("\nFile couldn't be open");
    }

    printf("\nEnter data to append: ");
    fflush(stdin);          // To clear extra white space characters in stdin
    fgets(dataToAppend, 50, stdin);

    // Append data to file
    fputs(dataToAppend, fPtr);

    fPtr = freopen(filePath, "r", fPtr);

    while (ch != EOF)
    {
        ch = fgetc(fPtr);

        putchar(ch);
    }
    fclose(fPtr);

    return 0;
}

*/
/*
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377,...
int fib(int n)
{
    if (n <= 1)
        return n;

    printf("\nn-1 %d\n", fib(n-1));
    printf("\nn-2 %d\n", fib(n-2));
        return fib(n-1) + fib(n-2);
}

int main ()
{
    int n;
    scanf("%d", &n);

    printf("\n%d\n", fib(n));
    getchar();
    return 0;
}
*/





int main(){
int b=4;
int a[5]={5,6,7,8,9};
int *p1,t,u,v,w;

p1=a;
t=(*p1)++;
u=*p1;
v=*++p1;
w=*(++p1);

printf("%d %d %d %d",t,u,v,w);

}

















