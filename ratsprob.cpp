#include <iostream>
using namespace std;
int calculate(int r, int Unit, int arr[], int n)
{
    if (n == 0)
    {
        return -1;
    }
    int totalneededfood = r * Unit;
    int eatenfood = 0;
    int house = 0;
    for (house = 0; house < n; house++)
    {
        eatenfood += arr[house];
        if (eatenfood >= totalneededfood)
        {
            return house+1;
            break;
        }
        
    }
    return 0;
   
}
int  main()
{
    int r;
    cin >> r;
    int Unit;
    cin >> Unit;
    vector<int> arr;
    for (int n; cin >> n ;)
    {
        arr.push_back(n);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = calculate(r, Unit, arr, n);
    switch (result)
    {
    case -1:
        cout<<"Nouber of houses Zero"<<endl;
        break;   
    case 0:
        cout<<"Error"<<endl;
        break;   
    
    default:
    cout<<"How much house needed to eat"<<result<<endl;
        break;
    }
    
    return 0;
}