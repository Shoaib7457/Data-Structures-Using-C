public class psd2 {
    static int profit(int ar[],int n)
    {
        int min = ar[0],idxm = 0,max = 0;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(ar[j] < min)
                {
                    min = ar[i];
                    idxm = j;
                }
            }
            for(int k = idxm;k<n;k++)
            {
                if(ar[k] > max)
                {
                    max = ar[k];
                }
            }
        }
        return (max-min);
    }
    public static void main(String[] args) {
        int arr[] = {7,6,4,3,1};
        int m = profit(arr, 5);
        System.out.print("Profit "+m);
    }
    
}
