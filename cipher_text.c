#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	CODE CREATED BY TEJAS KL 
		*/
int main()
{
	int i,count,flag=0,g=0;
	char ch,s[10],s2[10],x,y;
	char file_name[10];
	FILE *fp, *fp2;
	printf("Enter name of a file you wish to see\n");
	gets(file_name);
	fp = fopen(file_name, "r");
	fp2 = fopen("output.txt", "w"); 
	if (fp == NULL)
	{
		perror("Error while opening the file.\n");
		exit(EXIT_FAILURE);
	}
	printf("\n\n");
	printf("The contents of %s file are:\n", file_name);
	printf("\n\n\n\n");
	while((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
		s[i]=ch;
		i++;
	}
	s[i]='\0';
	count = 0;
	for(i=0;s[i]!='\0';i++)
	{
		x='A';
		y='Z';
		count = 0;
		g=0;
		while(count<= 25)
		{
			if(s[i]== x+ count)
		{
			g=1;
			break;
		}
			else
			count++;
		}
		s2[i]= y - count;
		if(g!=1)
		{
			x='a';
			y='z';
			flag= 0;
			while(flag<= 25)
		{
		    if(s[i]== x + flag)
		   break;
			else
			flag++;		
	    }
			s2[i] = y - flag;
		}
		}
		s2[i]='\0';
			printf("\n the cipher text is = %s",s2);
			fprintf(fp2,"%s",s2);
	printf("\n\nThe contents are written to output.txt .");
	fclose(fp);
	fclose(fp2);
	return 0;
	}
