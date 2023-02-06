public class psd3 {
    static boolean triplet(int ar[],int n,int x)
    {
    for(int i = 0;i<n-1;i++)
    {
        int sum = ar[i]+ar[i+1];
        for(int j = i+2;j<n;j++)
        {
            if(x == sum+ar[j])
                return true;
        }
    }
    return false;
    }
        public static void main(String[] args) {
        int arr[] = {1,4,45,6,10,8};
        int x = 13;
        boolean m = triplet(arr,6,x);
        System.out.print(m);
    }
    
}
