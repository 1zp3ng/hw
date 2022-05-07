#include "std_lib_facilities.h"

/*
  1.   vector<int> gv = { 1,2,4,8,16,32,64,128,256,512 };
  2.   void f(vector <int> v)
  3.   {
           vector<int> lv;
           for(int i=0;i<v.size();i++)
                lv.push_back(gv[i]);
           for(int i=0;i<lv.size();i++)
                cout<<lv[i]<<endl;
           cout<<endl;
           
           vector<int> lv2;
           for(int i=0;i<v.size();i++)
                lv2.push_back(v[i]);
           for(int i=0;i<lv2.size();i++)
                cout<<lv2[i]<<endl;
           cout<<endl;
       }
  4.   int main()
       {
           f(gv);
           vector<int> vv={1,2,6,24,120,720,5040,40320,362880,3628800};
           f(vv);
           return 0;
       }
          
