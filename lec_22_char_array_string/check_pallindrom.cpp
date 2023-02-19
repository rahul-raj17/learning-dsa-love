#include<iostream>
using namespace std;

bool checkPallindrome(char name[], int n)
{
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        if(name[s] != name[e])
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

    return 0;

    
}