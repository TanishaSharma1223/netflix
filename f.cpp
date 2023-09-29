#include<bits/stdc++.h>
using namespace std;

class solution
{
private:
    int ans = 0;
public:
    solution();
    void calculate();
    void swap(int &m, int &n);
    int max(int m, int n);
    int min(int m, int n);
    void display();
    void yn();
    ~solution();
};

solution::solution()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if (z%2!=0)
        {
            ans = x+1 > y ? 0:1;
        }
        else
        {
            ans = x> y ? 0:1;
        }
        if(!ans)
        {
            cout<<"First"<<endl;
        }
        else
        {
            cout<<"Second"<<endl;
        }
    }
}

void solution::calculate()
{
}

void solution::display()
{
    cout<< ans <<endl;
}

void solution::swap(int &m, int &n)
{
    int temp = m;
    m = n;
    n = temp;
}

int solution::max(int m, int n)
{
    return m > n ? m : n;
}

int solution::min(int m, int n)
{
    return m < n ? m : n;
}

void solution::yn()
{
    cout<< (ans? "YES":"NO") <<endl;
}

solution::~solution()
{
}

int main(){
    solution s;
    // s.display();
    return 0;
}