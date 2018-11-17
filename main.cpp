#include <bits/stdc++.h>

using namespace std;

const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};
string s;
void  listMnemonics(int number[], int curr_digit, char output[], int n)
{
    int i;
    if (curr_digit == n)
    {
        cout << output << "  ";
        return ;
    }
    for (int i=0 ; i< (s = hashTable[number[curr_digit]]).size() ; i++)
    {
        output[curr_digit] = hashTable[number[curr_digit]][i];
        listMnemonics(number, curr_digit+1, output, n);
        if (number[curr_digit] == 0 || number[curr_digit] == 1)
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
