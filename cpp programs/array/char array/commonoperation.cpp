//character array
#include<iostream>
using namespace std;
// //To find length of charachter array
int getlength(char arr[]) 
{
    int count = 0;
    int index = 0;
    while(arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}
// //concatenation of two character arrays
// void concatenatearray(char arra[], char arrb[])
// {
//     int aindex = getlength(arra);
//     int bindex = 0;
//     while(arrb[bindex] != '\0')
//     {
//         arra[aindex] = arrb[bindex];
//         aindex++;
//         bindex++;
//     }
//     //end the concatenated array with null character
//     arra[aindex] = '\0';
// }
//copy one character array to another
// void copyarray(char actualarray[], char copyarray[])
// {
//     int aindex = 0;
//     int bindex = 0;
//     while(actualarray[aindex] != '\0')
//     {
//         copyarray[bindex] = actualarray[aindex];
//         aindex++;
//         bindex++;
//     }
// }
//to compare two character arrays
int comparearray(char a[], char b[])
{
    int aindex = 0;
    int bindex =0;
    int alength = getlength(a);
    while(a[aindex] <= alength)
    {
        if(a[aindex] != b[bindex])
        {
           return false;
        }
        else
        {
            aindex++;
            bindex++;
        }
    } 
    return true;
}
int main()
{
    char arr[50] = "hello";
    char brr[50] = "hello";
    cout << "comparing two character arrays: " << comparearray(arr, brr) << endl;
    // char actualarray[50] = "hello";
    // char answer[50];
    // copyarray(actualarray, answer);
    // cout << "printing copyarray: " << answer << endl;
    // char arra[50] = "hello" ;
    // char arrb[50] = "world";
    // concatenatearray(arra, arrb);
    // cout << "Printing arra: " << arra << endl;
    // char arr[] = "hello";
    // cout << getlength(arr) << endl;
    return 0;
}