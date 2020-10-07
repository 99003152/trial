#define MAXSIZE 1024
char encrypt(char*str)
{
	int n=0;
	char *p=str, q[MAXSIZE];
    //char *d = &q[0];
	while(*p)
	{
	 if(islower(*p))
	 {
		 if((*p>='a')&&(*p<'x'))
			 q[n]=toupper(*p + (char)3);
		 else if(*p=='x')
			 q[n]='A';
		 else if(*p=='y')
			 q[n]='B';
		 else
			 q[n]='C';
	 }
	 else
	 {
		 q[n]=*p;
	 }
	 n++; p++;
	}
	q[n++]='\0';
	puts(q);
//    char* d = &q;
	return q;

	//return q[0];
}

char decrypt(char*str)
{
	int   n=0;
	char *p=str,
		 q[MAXSIZE];

	while(*p)
	{
	 if(isupper(*p))
	 {
		 if((*p>='D')&&(*p<='Z'))
			 q[n]=tolower(*p - (char)3);
		 else if(*p=='A')
			 q[n]='x';
		 else if(*p=='B')
			 q[n]='y';
		 else
			 q[n]='z';
	 }
	 else
	 {
		 q[n]=*p;
	 }
	 n++; p++;
	}
	q[n++]='\0';
	puts(q);
	return q;
}
