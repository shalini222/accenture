/******************************************************************************

      The function to execute is
ChatFrequentcharacter(Char str, char x)

This function has a string and a character. This function requires replacing the most used character in the str with the ‘x’ character.

Note: If two characters have the same frequency, then we will have to consider the frequency which has the lower ASCII value.

Example

Input:
str: bbadbbababb
char x: t

Output:
ttadttatatt

Explanation
The maximum character repeated is ‘b’ that is replaced with ‘t’.                        

*******************************************************************************/
// Accenture 28
#include <iostream>

using namespace std;

char* FrequentCharacterReplaced(char *str,char x)
{
	int ascii[26]={0};
	for(int i=0;str[i]!='\0';i++)
		ascii[str[i]-'a']++;
	int max=-99999;
	char maxchar;
	for(int i=0;i<26;i++)
	{
		if(ascii[i]>max)
		{
			max=ascii[i];
			maxchar=(char)'a'+i;
		}
	}
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==maxchar)
			str[i]=x;
	}
	return str;
}
int main()
{
	char a[100];
	scanf("%s",a);
	char c;
	cin>>c;
	char *b = FrequentCharacterReplaced(a,c);
	for(int i=0;b[i]!='\0';i++)
		cout<<b[i];
}