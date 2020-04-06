//检查答案
#include "bits/stdc++.h"

using namespace std;

int main()
{
    ifstream file1("standard_result.txt"); //标准答案
    ifstream file2("result.txt");
    string str1, str2;
    int line = 1;
    while (file1 >> str1 && file2 >> str2)
    {
        if (str1 != str2)
        {
            cout << " answer is wrong!" << endl;
            cout << line << endl;
            cout << str1 << endl;
            cout << str2 << endl;
            return 0;
        }
        line++;
    }
    if (file1 >> str1 || file2 >> str2)
        cout << " answer is wrong!" << endl;
    else
        cout << " answer is right! " << endl;
}