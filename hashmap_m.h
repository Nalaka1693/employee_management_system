#include <string>
#include <sstream>
#include <exception>
using namespace std;

#ifndef HASHMAP_M_H
#define HASHMAP_M_H

template <class T>
class HashMap {
	private:
		T map[125];
	public:
		void insert(const string key, T const &val);
		void remove(const string key);
		T find(const string key) const;
};

int hashFunc(const string key);

#endif