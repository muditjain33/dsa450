int kthSmallest(int a[], int s, int e, int k)
    {
        sort(a,a+e+1);
        return a[k-1];
    }
