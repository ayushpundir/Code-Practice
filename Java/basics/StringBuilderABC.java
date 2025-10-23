class StringBuilderABC{
    public static void main(String[] args) {
        String series = "";
        for(int i =0;i<26;i++){
            char ch = (char)('a'+ i);
            series += ch;
        }
        System.out.println(series);
    }
}/* in the above example the time complexity will be O(n^2) 
because a new object is created everytime in the loop a, ab, abc
... upto abcd....wxy and all these objects without any reference
(Wastage of memory) 

So to avoid this we can use StringBuilder class they are 
MUTUABLE, previous string will be modified no new object will 
be created. */