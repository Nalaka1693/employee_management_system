#include "hashmap_m.h"
#include <string>
#include <sstream>
#include <exception>

using namespace std;

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
