public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int size1= m-l+1;
         int size2= r-(m+1)+1;
         int copyArray1[size1], copyArray2[size2];
         
         for (int i=0; i<size1; i++)
         {
             copyArray1[i]= arr[l+i];
         }
         
         for (int j=0; j<size2; j++)
         {
             copyArray2[j]= arr[m+1+j];
         }
         int a=0,b=0,c=l;
         while(a<size1 && b<size2){
         
             if (copyArray1[a]<copyArray2[b]){
                 arr[c]=copyArray1[a];
                 a++;
             }
             else {
                 arr[c]=copyArray2[b];
                 b++;
             }
             c++;
        }
         
         
         if (a<size1){
             while (a<size1)
             {
                 arr[c]=copyArray1[a];
                 a++; c++;
             }
         }
         else {
             while (b<size2)
             {
                 arr[c]=copyArray2[b];
                 b++; c++;
             }
        } 
    }
       
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
         int m = l+(r-l)/2;
        if (l<r)
        {
           
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr, l, m, r);
        }
    }