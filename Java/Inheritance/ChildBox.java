public class ChildBox extends Box{
        int vol;

        public ChildBox(int l, int b, int h, int vol){
            //super(l, b,h); when commented now defaut constructor will be called box();
            //is not commented then box(l,b,h);
            this.vol = vol;
        }
        public ChildBox(int vol){
            this.vol = vol;
        }
        public ChildBox(ChildBox other){
            super(other);
            this.vol = other.vol;
        }

         
}