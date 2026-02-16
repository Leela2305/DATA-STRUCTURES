#include<stdio.h>
	struct student
{
	int roll;
	int marks;
};
int main()
{
	int n,i,count=0;
	printf("\n enter no of students:");
	scanf("%d",&n);
	struct student students[n];
	for(i=0;i<n;i++)
	{
		printf("\n enter roll no student %d:",i+1);
		scanf("%d",&students[i].roll);
		printf("\n enter marks of student %d:",i+1);
		scanf("%d",&students[i].marks);
	}
	for (i=0;i<n;i++)
	 {
        if (students[i].marks>40)
		 {
            count++;
        }
    }

    printf("\n Number of students scoring above 50 marks:%d",count);

    return 0;
}
