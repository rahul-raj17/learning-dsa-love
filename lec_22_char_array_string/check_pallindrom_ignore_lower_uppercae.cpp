#include<iostream>
using namespace std;

char toLowerCase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPallindrome(char name[], int n)
{
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        if(toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[])
{
    int count = 0;
    for (int i=0; name[i] != '\0' ; i++)
    {
        count ++;
    }
    return count ;

}

int main()
{
    char name[20] ;

    cout << "enter your name " << endl;
    cin >> name;

    cout << "your name is " ;
    cout << name << endl;

    int len = getLength(name) ;
    
    cout << "length of string : " << len<< endl;

    cout << " pallindrome or not : " << checkPallindrome(name,len) << endl;

    // cout << " character is " << toLowerCase('b') << endl;

    return 0;

    
}