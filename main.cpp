#include <bits/stdc++.h>

using namespace std;

const char Table[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};
string s;
void  listMnemonics(int number[], int currDigit, char output[], int n)
{

    if (currDigit == n)
    {
        cout << output << "  ";
        return ;
    }
    for (int i=0 ; i< (s = Table[number[currDigit]]).size() ; i++)
    {
        output[currDigit] = Table[number[currDigit]][i];
        listMnemonics(number, currDigit+1, output, n);
        if (number[currDigit] == 0 || number[currDigit] == 1)
            return;
    }
}
void printWords(int number[], int n)
{
    char result[n+1];
    result[n] ='\0';
    listMnemonics(number, 0, result, n);
}
int main()
{
    int number[] = {7, 2, 3};
    int n = sizeof(number)/sizeof(number[0]);
    printWords(number, n);

    return 0;
}
