#include<iostream>
using namespace std;

void traverse(int arr[],int num)
{
    int sum = 0;

  // traversing

    cout << "marks for the four subjects are " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " " ;
    }

        cout << endl;


  // total marks for four subjects

    cout << "total marks for the four subjects are " << endl;
    for (int i = 0; i < num; i++)
    {
        sum = sum + arr[i];
    }
     cout << sum << endl;

    cout << endl;
}

int main()
{
    int arr[4];
    cout<< "enter the value for 4 subjects " << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    //passing array as argument
    traverse(arr,4);
    
    
    return 0;
}