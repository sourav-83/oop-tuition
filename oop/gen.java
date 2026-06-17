class generic {
    private Object o;

        void setObj(Object ob)
    {
        o = ob;
    }
    Object getObj()
    {
        return o;
    }
}


public class gen {

    public static void main(String[] args)
    {
        generic g = new generic();
        g.setObj("ggg");
        //g.setObj(10);
        //System.out.println(g.getObj());




        String s = "abcdefghijkl";
        //String sb = s.substring(0,3);
        String sb = s.substring(1);
        //System.out.println(sb);

        // String surname = "prithy";
        String fullname = "prithy s i";
        // System.out.println(fullname.startsWith(surname));
        //int pos = fullname.indexOf('i');
        int pos = fullname.lastIndexOf('i');
        System.out.println(pos);
        
    }
    
}
