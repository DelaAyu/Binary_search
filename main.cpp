#include <iostream>
 
using namespace std;
 
int binarySearch(int array[], int size, int searchValue)
{
    int low = 0;
    int high = size - 1;
 
    int mid;
 
    while (low <= high)
    {
        mid = (low + high) / 2;
 
        if(searchValue == array[mid])
        {
            return mid;
        }
        else if (searchValue > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
 
    return -1;
 
}
 
int main() 
{
    int a[] = {12, 22, 34, 47, 55, 67, 82, 98};
    int userValue;
	
	for(int i=0; i<=7; i++)
	{
		cout<<" ["<< a[i] <<"] ";
	}
	cout << "\n" << endl;
    cout << "Masukkan salah satu angka diatas: " << endl;
    cin >> userValue;
 
    int result = binarySearch(a, 8, userValue);
 
    if(result >= 0)
    {
        cout << "Angka yang dimasukkan [" << a[result] << "] "
                " berada pada index " << result << endl;
    }
    else
    {
        cout << "Angka yang dimasukkan [" << userValue << "] tidak ditemukan. " << endl;
    }
    return 0;


} 
