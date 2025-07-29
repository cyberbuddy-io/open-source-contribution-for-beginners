class Dimensionss{
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
    public void surfaceAreaOfCylinder(){
        System.out.println("Surface area of cylinder "+2*3.14*r*(r+h));
    }
    public void volumeOfCylinder(){
        System.out.println("volume of cylinder is "+3.14*(Math.pow(r, 2))*h);
    }
}
public class FormulaeForCylinder {
    public static void main(String[] args) {
        Dimensionss d=new Dimensionss();
        d.setRadius(5.0f);
        d.setHeight(13.0f);
        System.out.println(d.getRadius());
        System.out.println(d.getHeight());
        d.volumeOfCylinder();
        d.surfaceAreaOfCylinder();
    }
}
