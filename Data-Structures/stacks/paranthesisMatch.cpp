/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;

int isBalanced(char input[])
{
	char stack[100],last_char;
	int top,i,len,cnt=0;
	top=0;
	len =strlen(input);
	for(i=0;i<len;i++)
	{
		if(input[i] == '(')
		{
			stack[top]='(';
			top++;
			cnt++;

		}
		else if(input[i] == ')')
		{
			/*if(top == 0)
			{
				return 0;
			}*/
			top --;
			
			last_char =stack[top];
			if(last_char !='(')
			{
				cnt--;
				return 0;
			}

		}
	}
	printf("total pair %d\n",cnt );
	if(top == 0)
	{

		return 1;
	}
	else
		return 0;
}

int main()
{
	char input[100];
	scanf("%s",input);
	if(isBalanced(input))
		{
			printf("%s is balanced\n",input );
		}
	else
	{
		printf("%s is not balaned\n",input );
	}

	return 0;
}