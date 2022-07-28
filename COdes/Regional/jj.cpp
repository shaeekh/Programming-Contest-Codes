#include<iostream>
using namespace std ;


int  p = 0;
int n;

int res( int *ar2[][n],int r, int c )
{
    int indx = 0;
    if(r+4<n) return ;
    else{
        int ar1[10];
        for(int i=0 ; i<5 ; i++)
            for(int j=0 ; j<2 ; j++)
            {
                ar1[indx++] = ar2[i][j];

            }
        }
        if(c+4<n) return ;
    else{
        int ar1[10];
        for(int i=0 ; i<2 ; i++)
            for(int j=0 ; j<5 ; j++)
            {
                ar1[indx++] = ar2[i][j];

            }
        }



}
int main()
{
//    int n;
    cin >> n ;
    int ar[n][n] ;

    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<n ; j++)
            cin >> ar[i][j];


    res(&ar,0,0);

}
