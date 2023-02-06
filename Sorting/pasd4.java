public class pasd4 {
    static void trappin(int arr[],int n)
    {
            int idx1 = 0, idx2 = -1,water =  0;
            for (int i = 1; i < n; i++) {
                if (arr[i] > arr[idx1])
                    idx1 = i;
            }
            for (int i = 0; i < n; i++) {
                if (arr[i] != arr[idx1]) {
                    if (idx2 == -1)
                        idx2 = i;
                    else if (arr[i] > arr[idx2])
                        idx2 = i;
                }
            }
     
        for(int i = idx2+1;i<idx1;i++)
        {
            water += arr[idx2]-arr[i];
        }
        System.out.println("water = "+water);
    }
    public static void main(String[] args) {
        int arr[] = {6,9,9};
        trappin(arr,3);
    }
    
}
