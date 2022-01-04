int *findTwoElement(int *arr, int n) {
        // code here
        
        int repeat=0;
        int missing =0;
        
        
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]>0){
                arr[abs(arr[i])-1]=(-1)*arr[abs(arr[i])-1];
            }else{
                repeat=abs(arr[i]);
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                missing=i+1;
            }
        }
        
        int *A=new int[2];
        A[0]=repeat;
        A[1]=missing;
        return A;
        
        
    }