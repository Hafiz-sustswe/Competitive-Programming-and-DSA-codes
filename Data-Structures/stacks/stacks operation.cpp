/*
	Name of program		:
	Purpose				:
	Date				:
	Written By			: MD Sadman Hafiz
*/

#include <bits/stdc++.h>
using namespace std;
struct Stack
{
	int size;
	int top;
	int *s;
};
void create(struct Stack *st)
{
	printf("Enter size\n");
	scanf("%d", &st->size);
	st->top =-1;
	st->s=(int *) malloc(st-> size*sizeof(int));

}
void Display(struct Stack st)
{
	int i;
	printf("size is %d\n",st.size );
	for(i=st.top;i>=0;i--)
		printf("%d\n",st.s[i]);
	printf("\n");
}
void push(struct Stack *st ,int x )
{
	if(st->top == st->size-1)
		printf("Stack Overflow");
	else
		{
			st->top++;
			st->s[st->top] = x;
		}
}
int Pop (struct Stack *st)
{
	int x=-1;
	if(st-> top==-1)
		printf("Stack Underflow\n");
	else
	{
		x= st->s[st->top--];
	}
	return x;

}
int main()
{
	struct Stack st;
	create(&st);
	push(&st,20);
	push(&st,30);
	Display(st);

	return 0;
}


