// done this myself completely without any errors
// took one day but maza aa gaya 

import java.util.Arrays;

class MergeInPlace{
    public static void main(String[] args) {
        int[] nums = {5,4,3,2,1};
        MergeSort(nums, 0, nums.length);

        System.out.println(Arrays.toString(nums));
    }
    static void MergeSort(int[] arr, int s, int e){

        if(e-s==1) return; // array contains only one element 

        int mid = (s+e)/2;
        MergeSort(arr, s, mid);// here mid is not included
        MergeSort(arr, mid, e);// here e is not included

        inPlaceMerger(arr, s, mid, e);
    }
    static void inPlaceMerger(int[] arr, int s, int mid, int e){
        int[] mix = new int[e-s];
        int l = s;
        int r = mid;
        int k = 0;

        while(l<mid && r<e){
            if(arr[l]<arr[r]){
                mix[k]=arr[l];
                l++;
            }
            else{
                mix[k]=arr[r];
                r++;
            }
            k++;
        }
        while(l<mid){
            mix[k]=arr[l];
            l++;
            k++;
        }
        while(r<e){
            mix[k]=arr[r];
            r++;
            k++;
        }

        for(int i = 0;i<mix.length;i++){
            arr[s+i]=mix[i];
        }
    }
}