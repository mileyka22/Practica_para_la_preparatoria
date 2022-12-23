#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr1[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<t;i++){
        if(arr1[i]>0 and arr1[i]<11)
        {
            if(arr1[i]<4)
            {
                cout<<"MILD"<<endl;
            }
            else
            {
                if(arr1[i]>=4 and arr1[i]<7)
                {
                    cout<<"MEDIUM"<<endl;
                }
                else
                {
                    if(arr1[i]>=7)
                    {
                        cout<<"HOT"<<endl;
                    }
                }
            }
        }
    }

}