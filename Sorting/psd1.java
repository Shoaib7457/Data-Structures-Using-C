
class sub
{
static int maxsubarraysum(int arr[],int n)
{
    int sum = 0,max = arr[0];
    for(int i = 0;i<n;i++)
    {
        sum += arr[i];
        if(sum > max)
            max = sum;
    }
    return max;
}

public static void main(String[] args) {
    int ar[] = {1,2,3,-2,5};
    int m = maxsubarraysum(ar,5);
    System.out.println("Max Subarray Sum : "+m);
}
}