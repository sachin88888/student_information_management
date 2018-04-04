#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void Insert(FILE *ptr);
void Display(FILE *ptr);
void Search(FILE *ptr);
 struct student
 {
 	int roll;
	float cgpa;
 	char name[20];
 }s[70];
 
void main(){
 	int option;
 	FILE *ptr;
 	ptr=fopen("student management.txt","a");

	
    while(2)
	{
    printf("1.Insert\n2.Display\n3.Search\n4.Exit\n");
	
	printf("Enter Your Option : ");
	scanf("%d",&option);		
	
	switch(option)
	{
		case 1: Insert(ptr);
		        break; 
		case 2: Display(ptr);
		        break; 
		case 3: Search(ptr);
		        break; 
		case 4: exit(3);
	 default: printf("invalid choice");        
	}
}
  getch();
}
     void Insert(FILE *ptr)	
	 {
	 	int i,n;
	 	printf("\nno. of records you want to enter\n");
	 	scanf("%d",&n);
	 	for(i=1;i<=n;i++)
	{
	printf("enter the name:%d ",i);
	scanf("%s",&s[i].name);
	fprintf(ptr,"the name is: %s\n",s[i].name);
    printf("\nenter roll no.: ");
    scanf("%d",&s[i].roll);
	fprintf(ptr,"the roll is: %d\n",s[i].roll);
	printf("\nenter cgpa: ");
    scanf("%f",&s[i].cgpa);
    fprintf(ptr,"the cgpa is: %f\n\n\n",s[i].cgpa);
}
fclose(ptr);
exit(3);
	
	
}
void Display(FILE *ptr)
{ 
	ptr=fopen("student management.txt","r");

	int n,i;
	printf("enter the roll number upto which you want to diaplay: ");
	scanf("%d",&n);
	printf("the records are\n");
    for(i=1;i<=n;i++)
	 {
    	fscanf(ptr,"%s%d%f",&s[i].name,&s[i].roll,&s[i].cgpa);
      }
      for(i=0;i<=n;i++)
      {
	  
      	printf("name is:%s\n roll is:%d\n  cgpa is:%f\n",s[i].name,s[i].roll,s[i].cgpa);
}
	fclose(ptr);
	}
		
void Search(FILE *ptr)
{
		int key,i;
		printf("enter roll no to search: ");
		scanf("%d",&key);
		if(key==s[i].roll)
		{	
		printf("\nNAME : %s",s[i].name);
        printf("\ncgpa : %f",s[i].cgpa);
        printf("\nROLL : %d",s[i].roll);
	    }
	else
	printf("\nERROR,record not found");
	exit(1);
}


  
    	
	
     

