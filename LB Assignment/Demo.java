
class Maths
{
    public int iNo1;        //characteristics
    public int iNo2;        //characteristics

    public Maths()          //default constructor
    {
        System.out.println("inside default constructor");
        iNo1=0;
        iNo2=0;
    }
    public Maths(int a,int b)      //parameterized constructor
    {
        System.out.println("inside parameterized constructor");
        iNo1=a;
        iNo2=b;
    }
    public int Addition()       //behavior
    {
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;
    }
    public int subtraction()    //behavior
    {
        int iAns=0;
        iAns=iNo1-iNo2;
        return iAns;
    }
}   //end of maths class
class Demo

{
    public static void main(String Arr[])
    {
       System.out.println("inside main function");

       Maths mobj1=new Maths();
       Maths mobj2=new Maths(10,11);

       int iRet=0;
       iRet=mobj1.Addition();
       System.out.println("Addition is :"+iRet );

       iRet=mobj2.Addition();
       System.out.println("Addition is :"+iRet );
    }
}
