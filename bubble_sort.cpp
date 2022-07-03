#include<iostream>
using namespace std;

//bobble sort
void bubulsort(int arr[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            

        }
    }
}

int main()
{
    int size;
    cout<<"Enter the size of arrey";
    cin >> size;
    int arr[size-1];

    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    bubulsort(arr,size);

    for (int i=0;i,i<size;i++)
    {
        cout << arr[i]<<"\t";
    }
    

}