#include <iostream>
using namespace std;

class Array
{
public:
    int *A;
    int size;
    int length;
};

void display(Array arr)
{
    int i;
    cout << "Elements are" << endl;
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}

void Append(Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
        arr->length++;
    }
}

void Insert(Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

void Delete(Array *arr, int index)
{
    if (index >= 0 && index <= arr->length)
    {
        int x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
}

int Search(Array *arr, int x)
{
    if (arr->length >= 0 && arr->length <= arr->size)
    {
        for (int i = 0; i < arr->length; i++)
        {
            if (arr->A[i] == x)
                return i;
        }
        return -1;
    }
}

int BinarySearch(Array *arr, int start, int end, int x)
{
    if (arr->length >= 0 && arr->length <= arr->size)
    {
        int mid = (start + end) / 2;
        if (arr->A[mid] == x)
        {
            return mid;
        }
        else if (arr->A[mid] >= x)
        {
            // end = mid-1;
            return BinarySearch(arr, start, mid - 1, x);
        }
        else
        {
            // start=mid+1;
            return BinarySearch(arr, mid + 1, end, x);
        }
        return -1;
    }
}

int Average(Array *arr, int n){
    int sum  = 0;
    if(n>0){
    for(int i =0;i<arr->length;i++){
        sum = sum + arr->A[i];
    }
    return sum/arr->length;
    }
    return -1;
}

void Reversearray(Array *arr, int n){
    if(n>0){
        cout<<"Reverse number of array is "<<endl;
        for(int i=arr->length-1;i>=0;i--){
            cout<<arr->A[i]<<endl;
        }
    }
}

int main()
{

    Array arr;
    int n, i;
    cout << "Enter the size of an array" << endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    cout << "Enter the number of elements of array" << endl;
    cin >> n;
    arr.length = n;
    cout << "Enter the elements of array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    // display(arr);
    // Append(&arr, 10);
    // Insert(&arr, 3, 5);
    // Delete(&arr, 7);
    // int result = Search(&arr, 5);
    //int result = BinarySearch(&arr, 0, arr.length, 4);
    //int result = Average(&arr, arr.length);
    Reversearray(&arr, arr.length);
    //result >= 0 ? cout << "average of the Array is " << result : cout << "Number is not present";
    // display(arr);
    return 0;
}