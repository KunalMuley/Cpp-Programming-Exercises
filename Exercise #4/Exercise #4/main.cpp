#include <iostream>

using namespace std;

int main()
{
    int numb[5];
    for(int i=0;i<3;i++)  //Getting input of three integers from the user.
    {
      cout << "Please enter integer number "<<i+1<<endl;
      cin>>numb[i];
    }
    int largest1=numb[0];
    int temp1=0;
    int largest2,largest3,temp2,temp3;

    for(int j=0;j<3;j++)  //Loop to find the largest number among three numbers.
    {
        if(numb[j]>largest1)
        {
            largest1=numb[j];
            temp1=j;
        }
    }
    if(temp1==0)
       {
           largest2=numb[temp1+1];
       }
    else
    {
      largest2=numb[temp1-1];
    }

    for(int k=0;k<3;k++)  //Loop to find the second largest number among three numbers.
    {
        if(k!=temp1)
        {
            if(numb[k]>=largest2)
            {
                largest2=numb[k];
                temp2=k;
            }
        }
    }

    for(int l=0;l<3;l++)  //Loop to find the third number.
    {
        if(l!=temp1 && l!=temp2)
        {
            largest3=numb[l];
        }
    }

    cout<<"Numbers in ascending order are: "<<largest3<<"  "<<largest2<<"  "<<largest1;
    return 0;
}
