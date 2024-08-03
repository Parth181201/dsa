void solve(vector<int> &v,int n){
        
        //Base condition
        if(n<=0){
            v.push_back(n);
            return;
        }
        
        
        
        //hypothesis
        solve(v,n-5);
        
        //induction
        v.insert(v.begin()+0,n);
        v.push_back(n);
        
    }

    //hello
    
    
    vector<int> pattern(int n){
        // code here
        vector<int> v;
        solve(v,n);
        
        return v;
    }