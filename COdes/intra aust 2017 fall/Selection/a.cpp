//Team name:AUST Dead Souls Project
//Team Members:Shafiur Rahman,Simanta Deb Turja,Shaeekh Al Jahan
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num>=80)
        printf("Grade: A+\n");
    else if(num>=75 && num<80)
        printf("Grade: A\n");
    else if(num>=70 && num<75)
     printf("Grade: A-\n");
     else if(num>=65 && num<70)
     printf("Grade: B+\n");
     else if(num>=60 && num<65)
     printf("Grade: B\n");
      else if(num>=55 && num<60)
     printf("Grade: B-\n");
      else if(num>=50 && num<55)
     printf("Grade: C+\n");
     else if(num>=45 && num<50)
     printf("Grade: C\n");
      else if(num>=40 && num<45)
     printf("Grade: D\n");
     else if (num<40)
        printf("Grade: F\n");
     return 0;




}
