#include<stdio.h>
typedef struct stack
{
	int data[10];
	int top;
}stack;
int empty(stack *p);
void inti(stack *p);
void push(stack *p,int x);
int full(stack *p);
void pop(stack *p);
int main()
{
	stack s;
	inti(&s);
	int x;
	printf("enter element to be pushed\n");
	scanf("%d",&x);
	push(&s,x);
	printf("enter element to be pushed\n");
	scanf("%d",&x);
	push(&s,x);
	pop(&s);
	pop(&s);
	
}
void inti(stack *p)
{
	p->top=-1;
}
void push(stack *p,int x)
{
	if(!full(p))
	{
		p->top++;
		p->data[p->top]=x;
	}
	else
	{
		printf("stack is full\n");
	}
}
int full(stack *p)
{
	if(p->top==10)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void pop(stack *p)
{
	if(!empty(p))
	{
		printf("%d\n",p->data[p->top]);
		p->top--;
	}
	else
	{
		return ;
	}
}
int empty(stack *p)
{
	if(p->top==-1)
	{
		return 1;
	}
	return 0;
}
