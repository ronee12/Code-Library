#include<stdio.h>
#include <string.h> /* include the string library */
#include <ctype.h> /* include the character library */
int main()
{

int isalpha(int c); /* true if c is either upper or lower case */
int isupper(int c); /* true if c is upper case */
int islower(int c); /* true if c is lower case */
int isdigit(int c); /* true if c is a numerical digit (0-9) */
int ispunct(int c); /* true if c is a punctuation symbol */
int isxdigit(int c); /* true if c is a hexadecimal digit (0-9,A-F) */
int isprint(int c); /* true if c is any printable character */
int toupper(int c); /* convert c to upper case -- no error checking */
int tolower(int c); /* convert c to lower case -- no error checking */

char *strcat(char *dst, const char *src); /* concatenation */
int strcmp(const char *s1, const char *s2); /* is s1 == s2? */
char *strcpy(char *dst, const char *src); /* copy src to dist */
size_t strlen(const char *s); /* length of string */
char *strstr(const char *s1, const char *s2); /* search for s2 in s1 */
char *strtok(char *s1, const char *s2); /* iterate words in s1 */

char name[100];
while(scanf("%s",name)!=EOF)
{
	char name1[100];
	int l,i;
	l=strlen(name);
	for(i=0;i<l;i++)
	{
		while(isalpha(name[i])&&i<l)
		{
			printf("%c is alpha\n",name[i]);
			i=i+1;
		}
		while(isdigit(name[i])&&i<l)
		{
			printf("%c is digit\n",name[i]);
			i=i+1;
		}
	}

	strcpy(name1,name);
	printf("Coppy String: %s\n",name1);
		strcat(name,"add");
	printf("%s\n",name);
	//scanf("%s",name1);
	i=strcmp(name1,name);
	if(i==0)
	printf("%s and %s are equal\n",name1,name);
	else if(i<0)
		printf("%s < %s \n",name1,name);
	else
		printf("%s > %s \n",name1,name);

}
	return 0;
}