class d{
    public static void main(String[] args) {
        int a[]={6,8,10,45,9,4,14};
        int n =a.length;
        for(int i=0;i<n-1;i++){
            int mi=i;
            for(int j=i+1;i<n;j++){
                if(a[j]<a[mi]){
                    mi=j;
                }
                int temp=a[i];
                a[i]=a[mi];
                a[mi]=temp;
            }
        }
       for(int i=0;i<n-1;i++){
           System.out.println(a[i]);
       }
    }
}