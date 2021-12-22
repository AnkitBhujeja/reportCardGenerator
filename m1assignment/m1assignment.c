/*
 ============================================================================
 Name        : Report Card Generator
 Programmer  : Ankit Bhujeja
 Version     : Assignment
 Description : Based on user input generate report card
 ============================================================================
 */

#include <stdio.h>
#include <unistd.h>
int main(){

	char name[30];
	int class;
    float sum,m1,m2,m3,m4,m5;
	char section,grade;
        puts("Enter your name: ");
        scanf("%[^\n]%*c",name);
		printf("Enter your Standard/Class: ");
		scanf("%d",&class);
         while(getchar()!='\n');
		printf("Enter Section name: ");
		scanf("%c",&section);
		printf("Enter marks Secured in Mathematics: ");
		scanf("%f", &m1);
		printf("Enter marks Secured in English: ");
		scanf("%f", &m2);
		printf("Enter marks Secured in Hindi: ");
		scanf("%f", &m3);
		printf("Enter marks Secured in Science: ");
		scanf("%f", &m4);
		printf("Enter marks Secured in Social Science: ");
		scanf("%f", &m5);
        sum = m1 + m2 + m3 + m4 + m5;
        if(sum>=450 && sum<=500){
            grade='A';
        }
        else if(sum>=400 && sum<=449){
            grade='B';
        }
        else if(sum>=350 && sum<=399){
            grade='C';
        }
        else if(sum>=300 && sum<=349){
            grade='D';
        }
        else if(sum>=200 && sum<=299){
            grade='E';
        }
        else if(sum>=0 && sum<=199){
            grade='F';
        }
        else if(sum<0){
            printf("Total Marks cannot be less than 0\n Report Card Cannot be generated");
            exit(0);
        }
        else{
            printf("Total marks cannot exceeds 500 which is maximum possible\n Report Card Cannot be generated");
            exit(0);
        }
        puts("============================================================================");
        puts("Report card is being generating");
        puts("============================================================================");
        usleep(2000000);
        printf("\n\n");
        puts("----------------------------------------------------------------------------");
        puts("\tShree Kali Devi Vidya Mandir School");
        puts("\tAnnual Report Card");
        printf("\n");
        printf("Name: %s\n",name);
        printf("Standard: %d\n",class);
        printf("Section: %c\n",section);
        printf("\n");
        printf("\n");
        printf("Marks Secured out of 100\n");
        printf("Mathematics: %.1f\n",m1);
        printf("English: %.1f\n",m2);
        printf("Hindi: %.1f\n",m3);
        printf("Science: %.1f\n",m4);
        printf("Social Science: %.1f\n",m5);
        printf("\n");
        printf("\n");
        printf("Total marks scored: %.1f\n",sum);
        printf("Grade: %c",grade);
        puts("----------------------------------------------------------------------------");
        return 0;
}
