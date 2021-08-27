#include <casadi/casadi.hpp>
using namespace casadi;
using namespace std;

int main(){
  SX x = SX::sym("x");
  SX y = SX::sym("y");
  
  cout << x+y << endl;
	return -1;	
}
