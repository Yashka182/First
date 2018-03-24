#include <iostream>

using namespace std;

#include "Stack.h"

int main()
{
   Stack<int> S;
   int ct = 0;
   while (ct++ != 5)
   {
       int tmp;
       cin >> tmp;
       S.push(tmp);
   }
   S.printStack();
   return 0;
}
