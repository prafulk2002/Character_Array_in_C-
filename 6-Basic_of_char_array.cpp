/*
Arrays of characters is known as Character Arrays.

Declaration
To declare a character array of n size, we do
char arr[n+1];

Note: We declare an array of n+1 as 0 to n-1 indices store the actual string and
nth character stores ‘\0’ (null character).
*/

#include<iostream>
using namespace std;
int main()
{
    char arr[100]="Praful";
    int i=0;
    while(arr[i] != '\0')
    {
        cout<<arr[i]<<endl;
        i++;

    }
    return 0;
}