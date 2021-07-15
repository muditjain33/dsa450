vector<vector<int>> sortedMatrix(int N, vector<vector<int>> a) {
        // code here
        vector<int> l;
        for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        l.push_back(a[i][j]);}}
         sort(l.begin(), l.end()); 
        int k=0;
        for(int i=0;i<N;i++){
        for(int j=0;j<N;j++,k++){
        a[i][j]=l[k];}}
        return a;
    }
