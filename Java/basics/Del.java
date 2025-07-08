// class Del{
//     public static void main(String[] args) {
//         int[] nums = {1, 2, 3, 5, 1, 5, 20, 2, 12, 10};
//         int size = nums.length;
        
//         for(int i = 0;i<size;i++){
//             int key = nums[i];
//             boolean isunique = true;
//             for(int j=0;j<size;j++){
//                 if(nums[i]==nums[j] && i!=j){
//                 isunique=false;
//                 break;}
//             }
//             if(isunique)
//             System.out.print(key + " ");
//         }
//     }
// }

// import java.util.Arrays;

// class Del{
//     public static void main(String[] args) {
//         int[] a = {1,4,6,9,15};
//         int[] b = {2,5,8,10};

//         int mergerlength = a.length + b.length;
//         int[] newarr = new int[mergerlength];

//         int index1=0, index2=0, newindex= 0;

//         while(index1<a.length && index2<b.length){
//             if(a[index1]<b[index2]){
//                 newarr[newindex]=a[index1];
//                 index1++;
//             }
//             else{
//                 newarr[newindex]=b[index2];
//                 index2++;
//             }
//             newindex++;
//         }
//         while(index1<a.length){
//             newarr[newindex]=a[index1];
//             newindex++;
//             index1++;
//         }
//         while(index2<b.length){
//             newarr[newindex]=b[index2];
//             newindex++;
//             index2++;
//         }
//         System.out.println(Arrays.toString(newarr));
//     }
// }
// class Del{
//     void greetings(){
//         System.out.println("Hello my dear! how are you ?");
//     }
//     public static void main(String[] args) {

//         Del obj = new Del();
//         obj.greetings();

//         /*expain the difference between calling a method directly
//          like i can create a static method greeting, and i can
//         call greeting() directly and what i have done in this code.
//         which is a good practice and when to do what*/
//     }
// }
class Del {
 
    int multiplyNumbers(double num1, double num2) {
        int product = (int)(num1 * num2);
        return product;
    }
 
    public static void main(String[] args) {
 
        Del obj = new Del();
 
        int result = obj.multiplyNumbers(3.5, 4.6);
        System.out.println(result);
    }
}