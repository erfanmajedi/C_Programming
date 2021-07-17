#include<stdio.h>
#include<string.h>
int is_anagram(char *s1,char *s2)
{
	int i,j;
	for(i=0;i<strlen(s1);i++)
	{
		for(j=0;j<strlen(s2);j++)
		{
			if(strcmp(s1,s2)==0)
				return 1;
			else
				return 0;
		}
	}
}
int main()
{
	char s1[26];
	char s2[26];
	scanf("%s",s1);
	scanf("%s",s2);
	int n=strlen(s1);
	int m=strlen(s2);
	char temp;
	int i,j;
	for (i = 0; i < n-1; i++) 
	{
      for (j = i+1; j < n; j++) 
	  	{
         if (s1[i] > s1[j]) 
		 	{
            	temp = s1[i];
            	s1[i] = s1[j];
            	s1[j] = temp;
        	}
    	}
	}
	printf("%s\n",s1);
	for (i = 0; i < m-1; i++) 
	{
      for (j = i+1; j < m; j++) 
	  	{
         if (s2[i] > s2[j]) 
		 	{
            	temp = s2[i];
            	s2[i] = s2[j];
            	s2[j] = temp;
        	}
    	}
	}
	printf("%s\n",s2);
	int a=is_anagram(s1,s2);
	printf("%d",a);
}
