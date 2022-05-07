#include "std_lib_facilities.h"

/*
  1.   int ga[10] = { 1,2,4,8,16,32,64,128,256,512 };
  2.   void f(int arr[], int n)
  3.   {
           int la[10];
           for(int i=0;i<10;i++)
                la[i]=ga[i];
           cout<<la[i]<<" ";
           int* a=new int[n];
           for(int i=0;i<10;i++)
                a[i]=arr[i];
           cout<<endl;
           for(int i=0;i<10;i++)
                cout<<a[i]<<" ";
           cout<<endl;
           delete[] a;
       }
  4.   int main()
       {
           f(ga, 10);//task 4(a); 
	   int aa[10] = { 1,2,6,24,120,720,5040,40320,362880,3628800 };
	   f(aa, 10);
           return 0;
       }
