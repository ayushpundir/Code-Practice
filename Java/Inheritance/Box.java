public class Box {
    int l;
    private int b;
    int h;

    public Box(){
        l=-1;
        b=-1;
        h=-1;
    }
    public Box(int l, int b, int h){
        this.l=l;
        this.b=b;
        this.h=h;
    }
    public Box(Box other){
        this.l = other.l;
        this.b = other.b;
        this.h = other.h;
    }
}
