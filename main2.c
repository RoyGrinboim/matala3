#include<stdio.h>
#include<string.h>
#define LINE 256
#define WORD 30

int substring(char *str1, char *str2);
int getLine(char s[]);
int getword(char w[]);
int similar(char *s, char *t, int n);
void print_lines(char *str);
void print_similar_words(char *str);

int main()
{
char c;
char w[WORD];
scanf(" %c", &c);
int i  = 0;
while(c != ' ' && i<WORD)
{
w[i] = c;
scanf(" %c", &c);
i++;
}
char *str = &w[0];
scanf(" %c", &c);
if(c == a)
{
print_lines(str);
}
else
{
print_similar_words(str);
}

return 0;
}

int getLine(char s[])
{
	int counter = 0;
	while(s[counter]!='\n')
	{
	counter++;
	}
	return counter;
}

int substring(char *str1, char *str2)
{
char s1[WORD];
char s2[WORD];	
strcpy(s1, str1);
strcpy(s2, str2);
int j=0;
for(int i=0; i<strlen(s1); i++)
{
j=0;
		while(s1[i] == s2[j] && s1[i] != '\0' && s2[j] != '\0')
		{
		j++;
		if(j == strlen(s2)-1)
		{
		return 1;
		}
		}
}
return 0;
}

int similar(char *s, char *t, int n)
{
char s1[WORD];
char s2[WORD];	
strcpy(s1, s);
strcpy(s2, t);
int counter = 0;
int j = 0;
for(int i=0; i<strlen(s1); i++)
{
	if(s1[i] != s2[j])
	{
	counter++;
		if(counter > n)
		{
		return 0;
		}
	}
	else
	{
	j++;
	}
}
return 1;
}

void print_lines(char *str)
{
char s[LINE];
scanf(" %s", &s);
char *s2 = &s[0];
if(substring(s2, str, 1) == 1)
{
printf("%s", s);
}


}


void print_similar_words(char *str)
{
char s[WORD];
getword(s);
char *s2 = &s[0];
if(similar(s2, str, 1) == 1)
{
printf("%s", s);
}


}

int getword(char w[])
{
char c;
printf("enter char: \n");
scanf(" %c", &c);
int i = 0;
while(c != '\n' && c != '\t' && c != '\0' && i < WORD)
{
	w[i] = c;
	i++;
	printf("enter char: \n");
	scanf(" %c", &c);	
}
return i;
}
















