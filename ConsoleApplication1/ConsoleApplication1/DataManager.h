#include <iostream>
#define DataMgr DataManager::instance();
using namespace std;

class DataManager{
private:
	int hp, mp;
	string name;
public:
	DataManager();
	~DataManager();
	int getHp(){
		return hp;
	}
	int getMp(){
		return mp;
	}
	string getName(){
		return name;
	}
	static DataManager *instance();
};