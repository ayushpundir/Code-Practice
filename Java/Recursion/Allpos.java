import java.util.ArrayList;

public class Allpos {
    public static void main(String[] args) {
        //return all index of target in an arraylist
        int arr[] = {2,3,1,4,4,5};
        int target = 4;
        System.out.println(generator(arr, target));
    }

    static ArrayList<Integer> generator(int[] arr, int target){
        ArrayList<Integer> ans = new ArrayList<>();
        //we will use helper funtion to modify our arraylist;
        return helper(arr, target, 0, ans);
    }

    static ArrayList<Integer> helper(int[] arr, int target, int i, ArrayList<Integer> list){
        if(i==arr.length) return list; // array traversal completed
        if(arr[i]==target) list.add(i);

        return helper(arr, target, i+1, list);
        //same object will be updated for different funtion calls
    }

}
