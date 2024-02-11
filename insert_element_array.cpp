// #include <iostream>

// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
   
//     int x ;
//     cout << "enter the elemet to be inserted" << endl;  
//     cin >> x;
  
//     int pos;
//     cout << "enter the postiton where element to be inserted" << endl;  
//     cin >> pos;
     
     

    
//     for (int i = n - 1; i >= pos; i--) {
//         arr[i + 1] = arr[i];
//     }


//     arr[pos] = x;
//     n++; 

   
//     cout << "Array after insertion: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int n,i,item,a[10],k;
    cout << "how many array elements u want " << endl;
    cin >> n;

    cout << "enter the array elements ";
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    cout << "enter the index where u want to insert the element " << endl;
    cin >> k;

    cout << "enter the item which u want to insert the array " << endl;
    cin >> item;

    for(i = n ; i >= k; i--)
    {
        a[i+1]=a[i];
    }

    a[k] =  item;

    n = n+1;

    cout << "updated array is " << endl;

    for(i = 1; i<=n; i ++)
    {
        cout << a[i] << " ";
    }


    return 0;
}


// #include <iostream>

// using namespace std;

// // Function to get array elements from the user
// void getArrayElements(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
// }

// // Function to insert an element into the array
// void insertElement(int arr[], int &n, int pos, int element) {
//     // Check for invalid position
//     if (pos < 0 || pos > n) {
//         cout << "Invalid position!\n";
//         return;
//     }

//     // Shift elements to the right to make space
//     for (int i = n; i >= pos; i--) {
//         arr[i + 1] = arr[i];
//     }

//     // Insert the element
//     arr[pos] = element;

//     // Increment the array size
//     n++;
// }

// // Function to print the array elements
// void printArray(const int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n, pos, element;

//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n + 1]; // Extra space for the new element

//     cout << "Enter the elements of the array: ";
//     getArrayElements(arr, n);

//     cout << "Enter the position to insert: ";
//     cin >> pos;

//     cout << "Enter the element to insert: ";
//     cin >> element;

//     insertElement(arr, n, pos, element);

//     cout << "Array after insertion: ";
//     printArray(arr, n);

//     return 0;
// }