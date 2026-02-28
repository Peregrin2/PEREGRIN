#ifndef FIRE_H
#define FIRE_H
using namespace std;


class Fire : public Element{
public:

	 void attack() override {
		cout << "This Fire is attacking" << endl;
	}


	 void attack(double atk) override {
		 cout << "Attack power (sqrt): Floor: " << sqrt(floor(atk)) << " Ceil: " << ceil(sqrt(atk)) << endl;
	}

};

#endif#pragma once
