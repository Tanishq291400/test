#include<stdio.h>

struct student
{
    int rn;
    char n[20];
};

void enter(struct student s[20], int n); 
void display(struct student s[20], int n);
void bubble_sort(struct student s[20], int n); 

int main()
{
    struct student s[20]; 
    int i, n;
    printf("\n Enter the total number of records :");
    scanf("%d",&n);
    enter(s, n); 
    bubble_sort(s, n); 
    display(s, n);
    return 0; 
} 

void enter(struct student s[20], int n) 
{
    int i;
    for(i=0; i<n; i++) 
    {
        printf("Enter rollno ");
        scanf("%d", &s[i].rn);
        printf("Enter name ");
        scanf("%s", s[i].n); 
    }
}

void display(struct student s[20], int n) 
{
    int i;
    for(i=0; i<n; i++)  
    {
        printf("Rollno: %d\n", s[i].rn);
        printf("Name: %s\n", s[i].n);
    }
}


void bubblesort(struct student s[20], int n) 
{
    int i, j;
    struct student t;
    for(i=0; i<n-1; i++) 
    {
        for(j=0; j<n-i-1; j++)
        {
            if(s[j].rn>s[j+1].rn) 
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
}*/

/*void selectionsort(struct student s[20], int n) 
{
    int i, j, mainindex;
    struct student temp;
    for(i=0; i<n-1; i++) 
    {
        mainindex= i;
        for(j=i+1; j<n; j++) 
        {
            if(s[j].rn < s[mainindex].rn) 
            {
               mainindex= j;
            }
        }
        temp = s[mainindex];
        s[mainindex] = s[i];
        s[i] = temp;
        }
        }*/

        void insertionsort(struct student s[20], int n) 
{
    int i, j;
    struct student temp;
    for(i=1; i<n; i++) 
    {
        temp = s[i];
        j = i-1;
        while(j>=0 && s[j].rn > temp.rn) 
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}


    
