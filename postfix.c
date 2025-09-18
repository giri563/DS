#include<stdio.h>
#include<ctype.h>
#define MAX 100

int st[MAX];
int top = -1;

void push(int st[], int val);
int pop(int st[]);
int evaluatepostfixExp(char exp[]);

int main()
{
	int val;
	char exp [100];
	
	printf("\nEnter any postfix expression: ");
	fgets(exp, sizeof(exp), stdin);
	
	val = evaluate postfixExp(exp);
	printf("\nvalue of the postfix expression = %d\n", val);
	
	return 0;
}

int evaluatepostfixExp(char exp[])
{
	int i= 0, op1, op2, value;
	
	while (exp[i]!= ' '&& exp[i] != '\n')
	{
		if (isdigit(exp[i]))
		{
			int digit = exp[i] - '0';
			push (st,digit);
		}
		else if (exp[i] != ' ' &exp[i] != '\t')
		{
			op2 = pop(st);
			op1 = pop(st);
			
			swith (exp[i])
			{
				case '+':
					value = op1 +op2;
					break;
					case'-';
					value = op1-op2;
					break;
					case '/';
					value = op1/op2;
					break;
					case'*';
					value = op1*op2;
					break;
					case '%';
					value = op1%op2;
					defult:
						printf("\nInvalid operator: %c",exp[i]]);
						return 0;
						
						
			}
			
		}
	}
 }

