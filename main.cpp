#include "hashmap_m.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	try {
	  HashMap<int> hm;
	  hm.insert("EM02", 345);
	  cout << hm.find("EM02") << endl;
	  hm.remove("EM02");
	  cout << hm.find("EM02") << endl;
	  cout << hashFunc("EM02") << endl;
	  
	  return 0;
	} catch (exception const& ex) { 
	  cerr << "Exception: " << ex.what() <<endl; 
	  return -1;
	} 
}
