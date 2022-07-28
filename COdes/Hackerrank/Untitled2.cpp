
#include<bits/stdc++.h>
using namespace std;
int a[50];
int t=-1,digit;
char postfix[50];
void push(int op)
{

    a[++t]=op;

}
int pop()
{
return a[t--];
}
int evaluate(int l)
{
    int n1,n2,n3;
for(int i=0;i<=l-1;i++)
   {
       if(isdigit(postfix[i]))
       {
           digit=postfix[i]-'0';
           push(digit);
       }
       else
       {
           n1=pop();
           n2=pop();
           switch ( postfix[i] )
			{
				case '+' :
					n3 = n1 + n2 ;
					break ;
				case '-' :
					n3 = n1 - n2 ;
					break ;
				case '/' :
					n3 = n1 / n2 ;
					break ;
				case '*' :
					n3 = n1 * n2 ;
					break ;

			}
 push(n3);
       }
   }

}
void show()
{
    digit=pop();

    cout <<"Expected result is "<<digit <<endl;
}
int main()
{
    int l;
    cout << "Enter the expression of prefix " << endl;
    cin >>postfix;
    l=strlen(postfix);
    evaluate(l);
    show();
}

