#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
    int vertex;
    printf("Enter the number of nodes\n");
    cin>>vertex;
    int edge;
    printf("Enter the number of edge\n");
    cin>>edge;
    printf("Enter the connecting nodes");
    for (int i=0;i<edge;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        a[n1][n2]=1;
        a[n2][n1]=1;
    }
    for (int i=0;i<vertex;i++)
    {
        for (int j=0;j<vertex;j++)
        {cout<<a[i][j]<<"    ";
        }
        printf("\n");
    }

}
