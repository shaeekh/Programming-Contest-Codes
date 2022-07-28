#include<bits/stdc++.h>
#define size 50;

char stack[100];
int t=-1;

void push(char  op)
{
    stack[++t]=op;
}
char pop()
{

    return(stack[t--]);
}
bool IsOperator(char C)
{
    if(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')
        return true;

    return false;
}
bool isoperand(char C)
{
    if(C >= '0' && C <= '9') return true;
    if(C >= 'a' && C <= 'z') return true;
    if(C >= 'A' && C <= 'Z') return true;
    return false;
}
void evaluate(string s1)
{
    for (int i=0;i<s1.size;i++)
    {
        if(isoperand(s1[i]))
        {
            push(s1[i]);
        }
        else(isoperator)
        {
            char op2=pop();
            char op1=pop();
            int res=Perform(char )

        }

    }
}
int main()
{
    string s1;
    cin>>s;

}
