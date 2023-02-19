#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;

    while(start <= end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}

void print(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(8);
    v.push_back(5);
    v.push_back(12);
    v.push_back(0);

    vector<int> ans = reverse(v);

    cout << "reverse array" << endl;

    print(ans);
}