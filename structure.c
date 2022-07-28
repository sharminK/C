#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
//1
struct student {
  char name[50];
  char id[50];
  float cgpa;
};


//2
typedef struct student {
  char name[50];
  char id[50];
  float cgpa;
}student;

int main() {

 student student;

  return 0;
}


//3
typedef struct student {
  char name[50];
  char id[50];
  float cgpa;
}student;

int main() {

 student student;

 strcpy(student.name, "sharmin");
 strcpy(student.id, "011171071");
 student.cgpa= 0.0;

  return 0;
}

//4 //5
typedef struct student {
  char name[50];
  char id[50];
  float cgpa;
}student;

int main() {

 student student;

 strcpy(student.name, "sharmin");
 strcpy(student.id, "011171071");
 student.cgpa= 0.0;

 printf("\n%s", student.name);
 printf("\n%s", student.id);
 printf("\n%.2f", student.cgpa);
  return 0;
}



//6
typedef struct student {
  char name[50];
  char id[50];
  float cgpa;
}student;

int main() {

 student student;

 printf("enter student-1 input:");
 scanf("%s",&student.name);
 scanf("%s",&student.id);
 scanf("%f",&student.cgpa);

 printf("\n%s", student.name);
 printf("\n%s", student.id);
 printf("\n%.2f", student.cgpa);
  return 0;
}


//7
typedef struct student {
  char name[50];
  char id[50];
  float cgpa;
}student;

int main() {

 student student, s2;

 printf("enter student-1 input:\n");
 scanf("%s",&student.name);
 scanf("%s",&student.id);
 scanf("%f",&student.cgpa);

 printf("enter student-2 input:\n");
 scanf("%s",&s2.name);
 scanf("%s",&s2.id);
 scanf("%f",&s2.cgpa);

 printf("\n%s", student.name);
 printf("\n%s", student.id);
 printf("\n%.2f\n", student.cgpa);

 printf("\n%s", s2.name);
 printf("\n%s", s2.id);
 printf("\n%.2f", s2.cgpa);

  return 0;
}


//8
typedef struct student
{
    char name[50];
    char id[50];
    float cgpa;
} student;

int main()
{
    student student, s2;

    printf("enter student-1 input:\n");
    scanf("%s",&student.name);
    scanf("%s",&student.id);
    scanf("%f",&student.cgpa);

    printf("enter student-2 input:\n");
    scanf("%s",&s2.name);
    scanf("%s",&s2.id);
    scanf("%f",&s2.cgpa);

    if(student.cgpa>s2.cgpa)
    {
        printf("\n%s", student.name);
        printf("\n%s", student.id);
        printf("\n%.2f\n", student.cgpa);
    }
    else
    {
        printf("\n%s", s2.name);
        printf("\n%s", s2.id);
        printf("\n%.2f", s2.cgpa);
    }

    return 0;
}


//9
typedef struct student
{
    char name[50];
    char id[50];
    float cgpa;
} student;

void func1(struct student student)
{
    printf("\n%s", student.name);
    printf("\n%s", student.id);
    printf("\n%.2f\n", student.cgpa);
}
void func2(struct student s2)
{
    printf("\n%s", s2.name);
    printf("\n%s", s2.id);
    printf("\n%.2f", s2.cgpa);
}

int main()
{
    student student, s2;

    printf("enter student-1 input:\n");
    scanf("%s",&student.name);
    scanf("%s",&student.id);
    scanf("%f",&student.cgpa);

    printf("enter student-2 input:\n");
    scanf("%s",&s2.name);
    scanf("%s",&s2.id);
    scanf("%f",&s2.cgpa);

    if(student.cgpa>s2.cgpa)
    {
        func1(student);
    }
    else
    {
        func2(s2);
    }

    return 0;
}


//10
typedef struct triangle
{
    int triangle_id;
    int base;
    int height;
} triangle;

void func(struct triangle t1)
{
    int area;
    area=(t1.base*t1.height)/2;
    printf("\nArea of %d: %d\n",t1.triangle_id, area);

}

int main()
{
    triangle t1,t2,t3;

    printf("enter triangle-1 inputs:\n");
    scanf("\n%d", &t1.triangle_id);
    scanf("\n%d", &t1.base);
    scanf("\n%d", &t1.height);

    printf("enter triangle-2 inputs:\n");
    scanf("\n%d", &t2.triangle_id);
    scanf("\n%d", &t2.base);
    scanf("\n%d", &t2.height);

    printf("enter triangle-3 inputs:\n");
    scanf("\n%d", &t3.triangle_id);
    scanf("\n%d", &t3.base);
    scanf("\n%d", &t3.height);

    func(t1);
    func(t2);
    func(t3);

    return 0;
}

//11
typedef struct triangle
{
    int triangle_id;
    int base;
    int height;
} triangle;

void func(struct triangle t1,struct triangle t2,struct triangle t3)
{
    int area1,area2,area3;

    area1=(t1.base*t1.height)/2;
    area2=(t2.base*t2.height)/2;
    area3=(t3.base*t3.height)/2;

    if(area1>area2 && area1>area3)
    {
        printf("\nArea of %d: %d\n",t1.triangle_id, area1);
    }
    else if(area2>area3 && area2>area1)
    {
        printf("\nArea of %d: %d\n",t2.triangle_id, area2);
    }
    else
    {
        printf("\nArea of %d: %d\n",t3.triangle_id, area3);
    }
}

int main()
{
    triangle t1,t2,t3;

    printf("enter triangle-1 inputs:\n");
    scanf("\n%d", &t1.triangle_id);
    scanf("\n%d", &t1.base);
    scanf("\n%d", &t1.height);

    printf("enter triangle-2 inputs:\n");
    scanf("\n%d", &t2.triangle_id);
    scanf("\n%d", &t2.base);
    scanf("\n%d", &t2.height);

    printf("enter triangle-3 inputs:\n");
    scanf("\n%d", &t3.triangle_id);
    scanf("\n%d", &t3.base);
    scanf("\n%d", &t3.height);

    func(t1,t2,t3);

    return 0;
}


//12
typedef struct player
{
    char name[50];
    char country[50];
    int run[3];
    int wicket[3];
    int point[3];
} player;

void func(struct player p1, player p2)
{
    int rsum=0,i,j,k,r2sum=0;
    for(i=0; i<3; i++)
    {
        if(p1.run[i]<=25)
        {
            rsum+=5;
        }
        else if(p1.run[i]<=50)
        {
            rsum+=10;
        }
        else if(p1.run[i]<=75)
        {
            rsum+=15;
        }
        else
        {
            rsum+=20;
        }

        for(j=0; j<p1.wicket[i]; j++)
        {
            rsum+=12;
        }
        p1.point[i]=rsum;
        rsum=0;

        if(p2.run[i]<=25)
        {
            r2sum+=5;
        }
        else if(p2.run[i]<=50)
        {
            r2sum+=10;
        }
        else if(p2.run[i]<=75)
        {
            r2sum+=15;
        }
        else
        {
            r2sum+=20;
        }

        for(j=0; j<p2.wicket[i]; j++)
        {
            r2sum+=12;
        }
        p2.point[i]=r2sum;
        r2sum=0;
    }

    for(i=0; i<3; i++)
    {
        printf("\nMatch: %d",i+1);
        printf("\n%s: %d",p1.name,p1.point[i]);
         printf("\n%s: %d",p2.name,p2.point[i]);
    }
}

int main()
{
    player p1,p2;
    int rsum=0,wsum=0,i,total=0,j;

    printf("enter player-1 inputs:\n");
    scanf("\n%s", &p1.name);
    scanf("\n%s", &p1.country);
    for(i=0; i<3; i++)
    {
        scanf("\n%d", &p1.run[i]);
    }
    for(i=0; i<3; i++)
    {
        scanf("\n%d", &p1.wicket[i]);
    }
    printf("enter player-2 inputs:\n");
    scanf("\n%s", &p2.name);
    scanf("\n%s", &p2.country);
    for(i=0; i<3; i++)
    {
        scanf("\n%d", &p2.run[i]);
    }
    for(i=0; i<3; i++)
    {
        scanf("\n%d", &p2.wicket[i]);
    }

    func(p1,p2);

    return 0;
}


//13
typedef struct player
{
    char name[50];
    char country[50];
    int run[3];
    int wicket[3];
    int point[3];
} player;

void func(struct player p1, player p2)
{
    int rsum=0,i,j,k,r2sum=0,sum1=0,sum2=0;
    for(i=0; i<3; i++)
    {
        if(p1.run[i]<=25)
        {
            rsum+=5;
        }
        else if(p1.run[i]<=50)
        {
            rsum+=10;
        }
        else if(p1.run[i]<=75)
        {
            rsum+=15;
        }
        else
        {
            rsum+=20;
        }

        for(j=0; j<p1.wicket[i]; j++)
        {
            rsum+=12;
        }
        p1.point[i]=rsum;
        rsum=0;

        if(p2.run[i]<=25)
        {
            r2sum+=5;
        }
        else if(p2.run[i]<=50)
        {
            r2sum+=10;
        }
        else if(p2.run[i]<=75)
        {
            r2sum+=15;
        }
        else
        {
            r2sum+=20;
        }

        for(j=0; j<p2.wicket[i]; j++)
        {
            r2sum+=12;
        }
        p2.point[i]=r2sum;
        r2sum=0;
    }

    for(i=0; i<3; i++)
    {
        printf("\nMatch: %d",i+1);
        printf("\n%s: %d",p1.name,p1.point[i]);
        printf("\n%s: %d",p2.name,p2.point[i]);

        if(p1.point[i]>p2.point[i])
        {
            printf("\nMOM: %s\n",p1.name);
        }
        else
        {
            printf("\nMOM: %s\n",p2.name);
        }
    }
    for(i=0; i<3; i++)
    {
        sum1+=p1.point[i];
        sum2+=p2.point[i];
    }
    if(sum1>sum2)
    {
        printf("\n\nMan of the Series: %s\n",p1.name);
    }
    else
    {
        printf("\n\nMan of the Series: %s\n",p2.name);
    }

}

int main()
{
    player p1,p2;
    int rsum=0,wsum=0,i,total=0,j;

    printf("enter player-1 inputs:\n");
    scanf("\n%s", &p1.name);
    scanf("\n%s", &p1.country);
    for(i=0; i<3; i++)
    {
        scanf("\n%d", &p1.run[i]);
    }
    for(i=0; i<3; i++)
    {
        scanf("\n%d", &p1.wicket[i]);
    }
    printf("enter player-2 inputs:\n");
    scanf("\n%s", &p2.name);
    scanf("\n%s", &p2.country);
    for(i=0; i<3; i++)
    {
        scanf("\n%d", &p2.run[i]);
    }
    for(i=0; i<3; i++)
    {
        scanf("\n%d", &p2.wicket[i]);
    }

    func(p1,p2);

    return 0;
}

*/
/*

typedef struct student
{
    char name[50];
    char id[50];
    char phone[50];
    char birth[50];
} student;

int main()
{

    student s2;

    printf("enter student input:\n");
    scanf("%s",&s2.name);
    scanf("%s",&s2.id);
    scanf("%s",&s2.phone);
    scanf("%s",&s2.birth);


    printf("\n%s", s2.name);
    printf("\n%s", s2.id);
    printf("\n%s", s2.phone);
    printf("\n%s", s2.birth);


    char a[20];

    int i;
    for(i=0; i<10; i++)
    {
        a[i] = s2.birth[6+i];
    }
    printf("\nbirth year= %s",a);

    return 0;
}
*/


/*
struct Student{
long int rollNo;
int age;
char name[50];
int totalMarks;
};

int main(){

    struct Student s1;
    //accessing members of the struct
    s1.rollNo = 1232234643;
    s1.age = 10;
    char s[]="Jonathan";
    strcpy(s1.name,s);
    s1.totalMarks = 450;

    printf("RollNumber: %d \nName: %s \nTotal Marks: %d",s1.rollNo,s1.name,s1.totalMarks);
 printf("\n%s",s);

return 0;
}
*/














































