#include<iostream>
#define FOR(i,n) for(int i=0; i<n; i++)

using namespace std;

int InsertionSort(int[], int);

int main()
{
	    //freopen("299.in", "r", stdin);

    int N, Len;

    cin>>N;

    FOR(i,N)
    {
        cin>>Len;
        int Arr[Len];
        FOR(j,Len)
            cin>>Arr[j];

        cout<<"Optimal train swapping takes "<<InsertionSort(Arr,Len)<<" swaps."<<endl;
    }

	    return 0;
	}

	int InsertionSort(int A[], int len)
	{
	    int i, j, key, swaps = 0;
	    for(j = 1; j <= len-1; j++)
        {
	        key = A[j];
	        i = j - 1;

	        while(i >= 0 && A[i] > key)
	        {
	            A[i+1] = A[i];
	            i--, swaps++;
	        }

	        A[i+1] = key;
	    }

	    return swaps;
	}
}
