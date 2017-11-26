#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

int hashFunc(string key);

template <class T>
class HashMap {
	private:
		T map[125];
	public:
		void insert(const string key, T const &val);
		void remove(const string key);
		T find(const string key) const;
};

template <class T>
void HashMap<T>::insert(const string key, T const &val) {
	int index = hashFunc(key);
	map[index] = val;
}

template <class T>
void HashMap<T>::remove(const string key) {
	int index = hashFunc(key);
	map[index] = 0;
}

template <class T>
T HashMap<T>::find(const string key) const {
	int index = hashFunc(key);
	return map[index];
}

int hashFunc(const string key) {
	int index = 0;
	string ff = key.substr(0, 2);
	if (ff == "EM") {
		stringstream conv(key.substr(2, 5));
		conv >> index;
		return index - 1;
	} else if (ff == "TR") {
		stringstream conv(key.substr(2, 5));
		conv >> index;
		return 99 + index;
	} else {
		throw invalid_argument("invalid employee ID: " + key);
	}
}

int main() {
	try {
	  HashMap<int> hm;
	  hm.insert("EM02", 345);
	  hm.insert("EM03", 123);
	  cout << hm.find("EM02") << endl;
	  cout << hm.find("EM03") << endl;
	  
	  hm.remove("EM02");
	  cout << hm.find("EM02") << endl;
	  
	  return 0;
	} catch (exception const& ex) { 
	  cerr << "Exception: " << ex.what() <<endl; 
	  return -1;
	} 
}
