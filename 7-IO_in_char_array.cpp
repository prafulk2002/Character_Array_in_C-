/*
We can also directly take input if there are no spaces between the characters in
the word

cin >> arr;
In the similar way, we can output the character array
cout << arr;
*/

#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    cout<<"Enter the word:\n";
    cin>>arr;
    cout<<"\nword which you have enter is :"<<arr;
    cout<<"\n3rd character from entered word is :"<<arr[2];
    return 0;
}