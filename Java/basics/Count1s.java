class Count1s{
    public static void main(String[] args) {
        int n = 5;
        int cnt1 = 0;
        while(n>0){
            int lastBit = n&1;
            if(lastBit == 1) cnt1++;
            n = n>>1;

        }
        System.out.println(cnt1);
    }
}