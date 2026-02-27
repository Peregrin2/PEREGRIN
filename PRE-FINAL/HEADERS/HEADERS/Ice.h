

#ifndef ICE_H
#define ICE_H
using namespace std;


class Ice : public Element{
public:

	 void attack() override {
		cout << "This Ice is attacking" << endl;
	}


	 void attack(double atk) override {
		 cout << "Attack power (sqrt): Floor: " << sqrt(floor(atk)) << " Ceil: " << ceil(sqrt(atk)) << endl;
	}



};

#endif#pragma once
