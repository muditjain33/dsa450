void sort012(int a[], int n)
{
    int q=0,w=0,e=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            q++;
        }
        else if(a[i]==1){
            w++;
        }
        else{
            e++;
        }
    }
    for(int i=0;i<n;i++){
        if(q!=0){
            a[i]=0;
            q--;
            continue;
        }
        if(w!=0){
            a[i]=1;
            w--;
            continue;
        }
        if(e!=0){
            a[i]=2;
            e--;
            continue;
        }
    }
    
}
