class generic <Type> {

    Type obj;
    generic(Type obj)
    {
        this.obj = obj;
    }
    void setObj(Type obj)
    {
        this.obj = obj;
    }
    Type setObj()
    {
        return obj;
    }




}
public class genProper {
    
    public static void main(String[] args)
    {
        Integer i = 10;
        //generic<Integer> g = new generic(i);
        generic<String> g = new generic("str");
        g.setObj("str");

    }
    


    
}
