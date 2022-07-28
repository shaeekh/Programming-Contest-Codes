#include<bits/stdc++.h>
using namespace std;
char st[110];
bool IsOperand(char C);
{
    if(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')
        return true;

    return false;
}
bool IsOperand(char C)
{
    if(C >= '0' && C <= '9') return true;
    if(C >= 'a' && C <= 'z') return true;
    if(C >= 'A' && C <= 'Z') return true;
    return false;
}
void push(int op)
{

    a[++t]=op;

}
pop()
{

}
int main()
{
    for (int i=0;i<strlen(s);i++)


}
