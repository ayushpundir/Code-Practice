// import java.util.ArrayList;

// public class SubsetIter {
//     public static void main(String[] args) {
//         int[] arr = {1,2,3};
//         ArrayList<ArrayList<Integer>> ans = subset(arr);
//         System.out.println(ans);
//     }
//     static ArrayList<ArrayList<Integer>> subset(int[] arr){
//         ArrayList<ArrayList<Integer>> outer = new ArrayList<>(); // initially we have []
//         outer.add(new ArrayList<Integer>());
//         for(int num : arr){
//             int n = outer.size();
//             for(int i = 0;i<n;i++){
//                 ArrayList<Integer> inner = new ArrayList<>(outer.get(i)); // stores a copy of outer[i]
//                 inner.add(num);
//                 outer.add(inner);
//             }
//         }
//         return outer;
//     }
// }

import java.util.ArrayList;
class SubsetIter{
    public static void main(String[] args) {
        int[] arr =  {1,2,2};
        System.out.println(power(arr));// power is supposed to return a list containing a list
    }
    static ArrayList<ArrayList<Integer>> power(int[] arr){
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        ans.add(new ArrayList<Integer>());

        for(int i = 0;i<arr.length;i++){ // to traverse the array 
            int n = ans.size(); // agar ye nhi karange toh humare inner loop properly nhi chaleha
            for(int j = 0;j<n;j++){ // matlab yaha per n hi aayeha ya n ki jagha ans.size() nhi kar sakte;
                ArrayList<Integer> current = new ArrayList<>(ans.get(j));
                current.add(arr[i]);
                ans.add(current);
            }
        }
        return ans;
    }
}