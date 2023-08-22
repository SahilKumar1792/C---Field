// C++ Program to compute sum of ranges for different range
// queries.
#include <bits/stdc++.h>
using namespace std;

// Structure to represent a query range
struct Query
{
	int L, R;
};

// Prints sum of all query ranges. m is number of queries
// n is the size of the array.
void printQuerySums(int a[], int n, Query q[], int m)
{
   // cout<< q[0].L<<" "<< q[0].R<<endl;
	for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for(int j = q[i].L; j <= q[i].R; j++)
        {
          sum+=a[j];
        }
        cout<<"Sum of ["<<q[i].L<<","<<q[i].R<<"]: "<<sum<<endl;
    }    
}

// Driver program
int main()
{
	int a[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
	int n = sizeof(a)/sizeof(a[0]);
	Query q[] = {{0, 4}, {1, 3}, {2, 4}};
	int m = sizeof(q)/sizeof(q[0]);
	printQuerySums(a, n, q, m);
	return 0;
}
