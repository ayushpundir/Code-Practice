class LinearSearch{
    public static void main(String[] args) {
        int[] arr = {5,6,8,2,7,13,7};
        System.out.println(foundAt(arr, 7));
    }
    static int foundAt(int[] arr, int target){
        return helper(arr, target, 0);
    } 
    static int helper(int[] arr, int target, int i){
        if(i==arr.length) return -1;
        if(arr[i]==target) return i;

        return helper(arr, target, i+1);
    }
}