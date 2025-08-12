#include <iostream>
using namespace std;

int main()
{ 
    int n, m;
    cin >> n >> m;
 
    int arr[n][m];

    for (int i = 0; i < n; i++)  
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    int x;
    cin>>x;

    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<"row is "<<i<<endl;
                cout<<"column is "<<j<<endl;
                flag=true;
                break;
            }
        }
    }
    if (flag){
        cout<<"Element is found\n";
    }
    else {
        cout<<"Element is not found \n";
    }

    return 0;
} 