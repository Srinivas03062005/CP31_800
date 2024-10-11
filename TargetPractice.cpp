#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int count=0,count1=0,count2=0,count3=0,count4=0,count5=0;
    char a[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
       {
        cin>>a[i][j];
       }
       
    }
    
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
       {
        if(a[i][j]=='.')
        {
            count=count+0;
        }
        else if(a[i][j]=='X' && i==0||j==0||i==9||j==9)
        {
            count1=count1+1;
            a[i][j]='Y';
        }
        else if(a[i][j]=='X'&&i==1||j==1||i==8||j==8)
        {
            count2=count2+2;
            a[i][j]='Y';
        }
        else if(a[i][j]=='X'&&i==2||j==2||i==7||j==7)
        {
            count3=count3+3;
            a[i][j]='Y';
        }
        else if(a[i][j]=='X'&&i==3||j==3||i==6||j==6)
        {
            count4=count4+4;
            a[i][j]='Y';
        }
        else if(a[i][j]=='X'&&i==4||j==4||i==5||j==5)
        {
            count5=count5+5;
            a[i][j]='Y';
        }
       }
    }
    cout<<count+count1+count2+count3+count4+count5<<endl;
    }
    return 0;
}