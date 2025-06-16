import java.util.Arrays;

class Quick {
    public static void main(String[] args) {
        int[] nums = {80,70,60,50,40,30,10};
        quicksort(nums, 0, nums.length-1);
        System.out.println(Arrays.toString(nums));
    }
    static void quicksort(int[] arr, int low, int high){
        if(low >= high) return ;
        int s = low;
        int e = high;
        int mid = (s+e)/2;
        int pivot = arr[mid];

        while(s<=e){
            while(arr[s]<pivot) s++;
            while(arr[e]>pivot) e--;

            if(s<=e){
                int temp = arr[s];
                arr[s] = arr[e];
                arr[e] = temp;
                s++;
                e--;
            }
        }
        quicksort(arr, low, e);
        quicksort(arr, s, high);
        
    }
}