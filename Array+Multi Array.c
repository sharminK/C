#include<stdio.h>
#include<math.h>

/*
//1
//reverse
int main()
{
    int i,j,k,n,sum=0;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=n-1; i>=0; i--)
    {
        sum+=a[i];

    }
 printf("%d ",sum);

}

//2
//sum
int main()
{
    int i,j,k,n,sum=0;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
    printf("%d ",sum);

}

//3
//even num sum
int main()
{
    int i,j,k,n,sum=0;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0){
          sum+=a[i];
        }
    }
    printf("%d ",sum);
}


//4
//even num sum
int main()
{
    int i,j,k,n;
    float sum=0.0, avg=0.0;
    float a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum+=a[i];
        avg=sum/n;
    }
    printf("%.2f ",avg);
}

//5
//even index sum
int main()
{
    int i,j,k,n,sum=0;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(i%2==0){
          sum+=a[i];
        }
    }
    printf("%d ",sum);
}

//6
//two array sum
int main()
{
    int i,j,k,n,sum=0;
    int a[10], b[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=a[i]+b[i];
        printf("%d ",sum);
    }
}

//7
//reverse
int main()
{
    int i,j,k,n;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}

//8
//max min
int main()
{
    int i,j,k,n, max=0, min=1000;
    int a[10];
    scanf("%d",&n);

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
    printf("Max %d ",max);
    printf("\nMin %d ",min);
}

//9
//vowel count
int main()
{
    int i,j,k,n,count=0;
    char a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%c",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            count++;
    }
    printf("count: %d ",count);
}

//10
//search
int main()
{
    int i,j,k,n,m,flag=0;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("search value: ");
    scanf("%d",&m);

    for(i=0; i<n; i++)
    {
        if(a[i]==m)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("FOUND at index position: %d, %d ",m,i);
    }
    else
    {
        printf("NOT FOUND");
    }
}

//11
//reverse array A,B
int main()
{
    int i,j,k,n;
    int a[10],b[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("Array A:%d ",a[i]);
    }
    for(i=n-1; i>=0; i--)
    {
        b[i]=a[i];
        printf("Array B:%d ",b[i]);
    }
}

//12
//insert value and position
int main()
{
    int i,j,k,n,num,p;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("number: ");
    scanf("%d",&num);
    printf("position: ");
    scanf("%d",&p);

    for(i=0; i<n; i++)
    {
        if(p==i){
            a[i]=num;
        }
        printf("%d ",a[i]);
    }
}

//13
//delete in position
int main()
{
    int i,j,k,n,num,p;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("delete position: ");
    scanf("%d",&p);

    for(i=p; i<n;  i++)
    {
        a[i]= a[i+1];
    }
    for(i=0; i<n-1; i++)
    {
        printf("%d ",a[i]);
    }
}

//14
//swap value in two array
int main()
{
    int i,j,k,n,m;
    int a[10],b[10],c[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<n; i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("Array A: ");
    for(i=0; i<m; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nArray B: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
}

//15
//div in 3, replace by -1
int main()
{
    int i,j,k,n;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%3==0){
          a[i]=-1;
        }
        printf("%d ",a[i]);
    }
}

//16
//odd inndex, replace by 0
int main()
{
    int i,j,k,n;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0){
          a[i+1]=0;
        }
        printf("%d ",a[i]);
    }
}

//17
//sorting
int main()
{
    int i,j,k,n, min, min_index;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        min=1000;
        min_index=i;

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


//18
//duplicate remove
int main()
{
    int i,j,k,n;
    int a[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                for(k=j; k<n-1; k++)
                {
                    a[k]=a[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}


//19
//intersection in 2 array a b
int main()
{
    int i,j,k,n,m,flag=0;
    int a[10],b[10],c[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
            }
        }
        if(flag == 1)
        {
            printf("%d ", a[i]);
        }
    }
    if(flag == 0)
        {
            printf("\nEmpty set");
        }

}


//20 not done
//union in 2 array a b
int main()
{
    int i,j,k,n,m,flag=0;
    int a[10],b[10],c[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            c[i]=a[i];

            c[i]=b[i];
            i++;
            printf("%d ", c[i]);
        }
        flag = 0;
    }

}


//21
//difference in 2 array a b
int main()
{
    int i,j,k,n,m,flag=0;
    int a[10],b[10],c[10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("%d ", a[i]);
        }
        flag = 0;
    }

}
*/


/*

///MULTI ARRAY
//01
int main()
{
    int i,j,k,n;
    int a[10][10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

//02
int main()
{
    int i,j,k,n,m;
    int a[10][10];
    scanf("%d",&n);
    scanf("%d",&m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("row wise: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }

    }
    printf("\ncolumn wise: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",a[j][i]);
        }
    }
}

//03
int main()
{
    int i,j,k,n,m,ans=0;
    int a[10][10];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        ans = ans + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));

    }
    printf("Determinant: %d ",ans);
}


//04
int main()
{
    int i,j,k,n,m;
    int a[10][10],b[10][10]= {0},c[10][10];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Major diagonal: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
                printf("%d ",a[i][j]);
        }
    }
     printf("\nMinor diagonal: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i+j==n-1)
                printf("%d ",a[i][j]);
        }
    }

}


//05
int main()
{
    int i,j,k,n,m;
    int a[10][10]= {0};
    scanf("%d",&n);

    printf("identity matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
                a[i][j]=1;

            printf("\%d ",a[i][j]);
        }
        printf("\n");
    }
}


//06
//2 2d arary sum
int main()
{
    int i,j,k,n,m;
    int a[10][10],b[10][10],c[10][10];
    scanf("%d",&n);
    scanf("%d",&m);

    printf("matrix A\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix B\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
                    printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}

//07
//2 2d arary multiplication
int main()
{
    int i,j,k,n,m, sum=0;
    int a[10][10],b[10][10],c[10][10];
    scanf("%d",&n);

    printf("matrix A\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix B\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}



//08
//find max matrix
int main()
{
    int i,j,k,n,m;
    int a[10][10];

    scanf("%d",&n);
    scanf("%d",&m);

    printf("matrix \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max = a[0][0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];

        }
    }
    printf("%d ",max);

}

//09
//sum 1st, last row & diagonal without overlap

int main()
{
    int i,j,k,n,m,add=0,add1=0,row0=0,rown=0;
    int a[10][10];

    scanf("%d",&n);

    printf("matrix \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j || i+j==n-1 )
            {
                add1+=a[i][j];
            }
        }
    }

      for(j=0+1; j<n-1; j++)
        {
            row0+=a[0][j];
            rown+=a[n-1][j];
            add=row0+rown;
        }

    printf("output: %d ",add1+add);

}


//11
int main()
{
    int i,j,k,n,m,sum=0,add=0,row=0,col=0;
    int a[10][10];

    scanf("%d",&n);

    printf("matrix \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i%2!=0)
            {
                row+=a[i][j];
            }
        }
    }
       for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i%2==0 && j%2!=0)
            {
                col+=a[i][j];
            }
        }
    }

     printf("output: %d ",row+col);

}


//12
//reverse marix array
int main()
{
    int i,j,k,n,m;
    int a[10][10],b[10][10],c[10][10];
    scanf("%d",&n);
    scanf("%d",&m);
    int temp;

    printf("matrix\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0; i<n; i++)
    {

        // Initialise start and end index
        int start = 0;
        int end = n - 1;

        // Till start < end, swap the element
        // at start and end index
        while (start < end) {

            // Swap the element
            temp = a[i,start];
            a[i, start] = a[i, end];
            a[i, end] = temp;

            // Increment start and decrement
            // end for next pair of swapping
            start++;
            end--;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d",a[i][j]);
        }
    }

}

//13
//symentric matrix
int main()
{
    int i,j,k,n,m,count=1;
    int a[10][10],b[10][10];

    scanf("%d",&n);

    printf("matrix \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //Transpose of matrix
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            b[j][i]=a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]!=b[i][j]){
                count++;
                break;
            }
        }
    }
    if(count == 1)
  	{
  		printf("\n Symmetric Matrix \n");
	}
	else
	{
		printf("\nNot a Symmetric Matrix \n");
	}

}


//15 add all value
int main()
{
    int i,j,k,n,m,sum=0;
    int a[10][10];

    scanf("%d",&n);
    scanf("%d",&m);

    printf("matrix \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            sum+=a[i][j];
        }
    }
    printf("%d ",sum);

}


//14 duplicate replace  ///NOT DONE
int main()
{
    int i,j,k,n,m,flag=0;
    int a[10][10],b[10][10];

    scanf("%d",&n);
    scanf("%d",&m);

    printf("matrix \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            b[i][j]=a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]==b[i][j])
            {
                a[i][j]=-1;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
*/

/*
//find max matrix
int main()
{
    int i,j,k,n,m;
    int a[10][10];

    scanf("%d",&n);
    scanf("%d",&m);

    printf("matrix \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max = a[0][0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];

        }
    }
    printf("%d ",max);

}


*/































