#include<iostream>
#include<vector>
#define Log(Message) std::cout<<Message<<std::endl;
#define Input(X , Y) std::cin>>X>>Y;
  int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int test;
    std::cin>>test;
    while(test--)
    {
      int L , R;
      Input(L,R);
      std::vector<int> arr;
      int flag;

  
    
       for (int i = L; i <= R; i++) 
       {
  

         if (i == 1 || i == 0)
          {
              continue;
          } 
       
          flag = 1;
  
    
           for (int j = 2; j <= i / 2; ++j) 
           {
              if (i % j == 0) 
               {
                  flag = 0;
                  break;
               }
          }
  
         if (flag == 1)
         {
            arr.push_back(i);
         }
      
      }
        if(arr.size() == 0)
        {
           Log("-1");
        }
       else
       {
          int diff = arr[arr.size() - 1] - arr[0];
          Log(diff);
       }
    }
    
}
  
