int add_period(char* f1,char *f2)
{
	int i,j;
	char x;
	for(i=0;i<strlen(f1);i++)
	{
		x=f1[i];
		if(x=='\n')
		{
			f2[j]='.';
			j++;
			f2[j]='\n';
			j++;
		}
		else
		{
			f2=x;
			j++;
		}
	}
}
