import java.util.ArrayList;
public class Allpos2 {
    public static void main(String[] args) {
        // find all position(index) of a target element k in the array
        int[] arr = {5,6,3,7,35,35,74,1,3};
        int k = 35;
        ArrayList<Integer> list = finder(arr, k, 0);// function call without helper

        System.out.println(list);
    }
    // with helper wokring perfect
    static ArrayList<Integer> finder(int[] arr, int k){
        ArrayList<Integer> ans = new ArrayList<>();
        int i = 0;
        return helper(arr, k, ans, i);
    }

    static ArrayList<Integer> helper(int[] arr, int k, ArrayList<Integer> ans, int i){
        if(i==arr.length) return ans;
        if(arr[i]==k)ans.add(i);

        return helper(arr, k, ans, i+1);
    }

    // without helper
    static ArrayList<Integer> finder(int[] arr, int k, int i){
        ArrayList<Integer> ans = new ArrayList<>();
        if(i==arr.length) return ans;
        if(arr[i]==k)ans.add(i);
        
        ArrayList<Integer> ansFromBelow = finder(arr, k, i+1);
        ans.addAll(ansFromBelow);

        return ans;
    }

}
