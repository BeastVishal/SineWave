#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[])
{
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == 0)
            cout<<" ";
        else
            cout<<"* ";
    }
    cout<<"\n";
}
void sinewave(int k)
{
    // for one complete wave 11 rows are required
    // 11 rows for smooth wave you can change code if you want sharp waves
    int row = k * 11;
    // x is the starting point
    // flag is for checking wave is in positive or negative side
    int x = 2, flag = 0;
    for(int i = 0; i < row; i++)
    {
        int arr[5] = {};
        if(x >= -1 && x <= 5)
        {
            // setting flag for upper cycle or down cycle
            if(x == 5) {flag = 1; x--;}
            if(x == -1) {flag = 0; x++;}

            arr[x] = 1;
            printArray(arr);
            if(flag == 0)
                x++;
            else
                x--;
        }
    }
}

int main()
{
    //Number of Cycles
    int k;
    cout<<"Enter number of cycles you want to print:";
    cin>>k;
    sinewave(k);
    return 0;
}
