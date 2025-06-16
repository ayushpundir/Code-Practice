public class Jump2 {
    public static void main(String[] args) {
        int[] arr = {2,3,1,1,4};
        System.out.println(jumping(arr, 0, 100, 0));
    }
    static int jumping (int[] arr, int i, int ans, int jump){
        if(i==arr.length-1) return Math.min(ans, jump);
    
    for(int j = 1;j<=arr[i];j++){
        ans = jumping(arr, i+j, ans, jump+1);
    }

    return ans;
    }
}
