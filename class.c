#include<stdio.h>
struct student 

{
    int rn;
    char n[20];
};
void enter(struct student [20],int);
void display (struct student [20],int);
void main()
{
    struct student s[20]; //array of struct variable
    int i,n;
    printf("\nEnter the roll number and name ");
    scanf("%d%s",&s.rn,&s.n);
    printf("\n Rollno =%d",s.rn);
    printf("\n Name =%s",s.n);*/
    printf("Enter the total no of record : ");
    scanf("%d",&n);
    for(i=0;i<n;i++) //Display the record
    {
        printf("Enter the roll number");
        scanf("%d",&s[i].rn);
        printf("Enter the name");
        scanf("%d",&s[i].n);
        }
        for(i=0;i<n;i++)
        rintf("EnterRollno");
        {
            printf("%d\t%s\n",s[i].rn,s[i].n);
            }
            }
            

        
    
    
