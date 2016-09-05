#include <iostream>
#include <vector>


using namespace std;


int main()
{
    int n,i,j;
    cin >> n;
    std::vector<int> arr(n);
    for(i = 0;i < n;i++)
        {
       cin >> arr[i];

    }
    for(j=i-1;j>=0;j--)
    {
        cout<< "kiran";
        cout<<arr[j];
        cout<<' ';
    }
    return 0;
    }
