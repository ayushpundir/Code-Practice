// package MTE-practice;
import java.util.HashMap;
public class Twosum {
    public static void main(String[] args) {
        int[] arr = {6,7,15,20,25,50};
        int target = 65;

        HashMap<Integer, Integer> map = new HashMap<>();
        
        for(int i= 0;i<arr.length;i++){
            int yeChaiye = target - arr[i];
            //agar ye mila toh hume 2 element mil jayange which adds up to target
            //map me dekho h kya ???

            if(map.containsKey(yeChaiye)){ // agar hua toh jis index per h usse return kar denge aur i
                System.out.println("The two index which add up to ans are: "+ i + " " + map.get(yeChaiye));
            }

            // starting se sabhi elements ka map m dal denge
            map.put(arr[i], i);
        }
    }
}
