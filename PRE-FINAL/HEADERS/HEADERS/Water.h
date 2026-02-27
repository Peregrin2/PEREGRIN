


#ifndef WATER_H
#define WATER_H
using namespace std;

class Water : public Element{
public:

	 void attack() override {
		cout << "This Water is attacking" << endl;
	}


	 void attack(double atk) override {
		 cout << "Attack power (sqrt): Floor: " << sqrt(floor(atk)) << " Ceil: " << ceil(sqrt(atk)) << endl;
	}



};


#endif#pragma once
