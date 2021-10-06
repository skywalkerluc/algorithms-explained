#include <bits/stdc++.h>
#define MAX 100
using namespace std;
class Naturalno
{
    int N;
    int arr[MAX];
    int count;

public:
    Naturalno(int i = 0) : N(i) {}
    void printDigit()
    {
        // To store the digit
        // of the number N
        int i = 0;
        int j, r;
        count=0;

        // Till N becomes 0
        while (N != 0)
        {

            // Extract the last digit of N
            r = N % 10;

            // Put the digit in arr[]
            arr[i] = r;
            i++;
            count++;

            // Update N to N/10 to extract
            // next last digit
            N = N / 10;
        }
    }
    int findMaxNum()
    {
        // sort the given array in
        // descending order
        sort(arr, arr + count, greater<int>());

        int num = arr[0];

        // generate the number
        for (int i = 1; i < count; i++)
        {
            num = num * 10 + arr[i];
        }

        return num;
    }
};
int main()
{
    Naturalno a(47923);
    a.printDigit();
    cout<<a.findMaxNum()<<endl;
}
