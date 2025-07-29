class Dimensions{
    float r,h;
    public void setRadius(Float r){
        this.r=r;
    }
    public void setHeight(Float h){
        this.h=h;
    }
    public float getRadius(){
        return r;
    }
    public float getHeight(){
        return h;
    }
}
public class Cylinder {
    public static void main(String[] args) {
        Dimensions d=new Dimensions();
        d.setRadius(5.0f);
        d.setHeight(10.0f);
        System.out.println("Height of cylinder "+d.getHeight());
        System.out.println("Radius of cylinder "+d.getRadius());
    }
}
