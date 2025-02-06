class ArrayDemo
{
public static void main(String arg[])
{
    //ways of creating single dimensional array

    int Arr4[]={10,20,30,40};

   // int Arr2[4]={10,20,30,40};    expplicite size is not allowed in java
   int Arr3[]=new int [4];    //dynamic memory allocation
   Arr3[0]=10;
   Arr3[1]=20;
   Arr3[3]=30;
   Arr3[4]=40;

   int Arr4[]=new int[]{10,20,30,40};//dynamic memory with initialization list
}
}

