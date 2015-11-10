#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
     char xs[] = "0123456789";

  do
  {
  cout << xs << endl;
  } while ( next_permutation(xs, xs+sizeof(xs)-1) );

 return 0;
}
