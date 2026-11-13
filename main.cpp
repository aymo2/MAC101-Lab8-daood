#include <iostream> // Library to get inputs and outputs
using namespace std;

int main()
{

  int coffeeBronx = 1;
  int coffeeBrooklyn = 2;

  int changer1;
  int changer2;

  changer1 = coffeeBrooklyn;
  changer2 = coffeeBronx;


  coffeeBrooklyn = changer2;
  coffeeBronx = changer1;

  cout << "coffeeBronx is " << coffeeBronx << " & coffeeBrooklyn is " << coffeeBrooklyn << endl;

  return 0;

}
