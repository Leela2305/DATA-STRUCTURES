#include<stdio.h>
union student
{
	int roll;
	float marks;
	char grade;
};
int main()
{
	union student s;
	s.roll=328;
	s.grade='A';
	s.marks=7.9;
	printf("\n size of s is %d",sizeof(s));
	printf("\n student roll number=%d",s.roll);
	printf("\n student marks =%f",s.marks);
	printf("\n student grade=%c",s.grade);
	return 0;
	
}
