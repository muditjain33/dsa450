void segregateElements(int a[],int n)
    {
        bool negative=false;
        int negs=-1;
        for(int i=0;i<n;i++){
            if(a[i]>=0 and negative==false){
                continue;
            }
            else if(a[i]>=0 and negative==true){
                int temp=i;
                while(i!=negs){
                    swap(a[i],a[i-1]);
                    i--;
                }
                i=temp;
                negs++;
            }
            else{
                if(negative==false){
                    negative=true;
                    negs=i;
                }
            }
        }
        // Your code goes here
    }
