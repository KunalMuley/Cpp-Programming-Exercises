#include <iostream>

using namespace std;

int main()
{
    char str[20]="Cisbest";


    for(int i=1;i<=7;i++)
    {
        for(int j=6;j>=i;j--)
        {
            cout<<" ";

        }

        if(i==7)
        {
            for(int l=6;l>=0;l--)
            {
                cout<<str[l];
            }
            for(int m=1;m<=6;m++)
            {
                cout<<str[m];
            }
        }
        else
        {


            int temp1=i+(i-1);
            int temp2=1;
            for(int k=1;k<=(temp1);k++)
            {
                if(k==1 || k==temp1)
                {
                    cout<<str[i-1];
                }
                else
                {
                    cout<<" ";
                }
            }

        }


        cout<<endl;
    }
    return 0;
}


