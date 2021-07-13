int maxSubarraySum(int a[], int n){
        // int b[n];
        int cs=0,mx=0;
        int d=INT_MIN;
        for(int i=0;i<n;i++){
            d=max(d,a[i]);
            cs=cs+a[i];
            if(cs<0){
                cs=0;
            }
            if(cs>mx){
                mx=cs;
            }
        }
        if(mx==0){
            return d;
        }
        return mx;
    }
