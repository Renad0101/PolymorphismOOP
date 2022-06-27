#pragma once
class Car
{
protected :
	int _id, _productionTime;
	float _carEngine, _carPrice;
	string _carVendor, _carModel, _carColor;

public:
	Car(int id, string carVendor, string carModel, string carColor, int productionTime, float carPrice, float carEngine)
	{
		this->_id = id;
		this->_carVendor = carVendor;
		this->_carModel = carModel;
		this->_carColor = carColor;
		this->_productionTime = productionTime;
		this->_carPrice = carPrice;
		this->_carEngine = carEngine;
	}
	virtual void CarInfo()
	{
		cout << "Information about Cars:" << endl;
		cout << "Car Vendor :" << _carVendor << endl;
		cout << "Car Model :" << _carModel << endl;
		cout << "Car Color:" << _carColor << endl;
		cout << "Production Time:" << _productionTime << endl;
		cout << "Car Price:" << _carPrice << endl;
		cout << "Car Engine:" << _carEngine << endl;
		cout << endl;
	}
};

class Hybrid : public Car
{
protected:
	int _horsePower;

public:
	Hybrid (int id , string carVendor , string carModel, string carColor, int productionTime , float carPrice , float carEngine)
		:Car(id , carVendor , carModel , carColor , productionTime , carPrice , carEngine){}

	virtual void CarInfo () override
	{
		cout << "Information about Cars:" << endl;
		cout << "Car Vendor:" << _carVendor << endl;
		cout << "Car Model:" << _carModel << endl;
		cout << "Car Color:" << _carColor << endl;
		cout << "Production Time:" << _productionTime << endl;
		cout << "Car Price:" << _carPrice << endl;
		cout << "Car Engine:" << _carEngine << endl;
	}

	int getHorsePower() { return _horsePower; }
};

class Manual : public Car
{
protected:
	int _carCount;

public:
	Manual(int id , string carVendor , string carModel , string carColor , int productionTime , float carPrice , float carEngine)
		:Car(id , carVendor , carModel , carColor , productionTime , carPrice , carEngine){}

	virtual void CarInfo() override
	{
		cout << "Information about Cars:" << endl;
		cout << "Car Vendor:" << _carVendor << endl;
		cout << "Car Model:" << _carModel << endl;
		cout << "Car Color:" << _carColor << endl;
		cout << "Production Time:" << _productionTime << endl;
		cout << "Car Price:" << _carPrice << endl;
		cout << "Car Engine:" << _carEngine << endl;
		cout << endl;
	}

	int getCarCount() { return _carCount; }
};

class Automatic : public Car
{
private :
	int  _carSpeed;

public:
	Automatic(int id , string carVendor , string carModel , string carColor , int productionTime , float carPrice , float carEngine)
		:Car(id , carVendor , carModel , carColor , productionTime , carPrice , carEngine) {}

	virtual void CarInfo() override
	{
		cout << "Information about Cars:" << endl;
		cout << "Car Vendor:" << _carVendor << endl;
		cout << "Car Model:" << _carModel << endl;
		cout << "Car Color:" << _carColor << endl;
		cout << "Production Time:" << _productionTime << endl;
		cout << "Car Price:" << _carPrice << endl;
		cout << "Car Engine:" << _carEngine << endl;

	}

	int getCarSpeed() { return _carSpeed; }
};

void display(Car cars)
{
	cars.CarInfo();
}

//class Car
//{
//protected:
//	int _id , _productionTime;
//	float _carEngine  , _carPrice;
//	string _carVendor ,  _carModel ,  _carColor;
//	
//
//public:
//	Car(int id, string carVendor, string carModel, string carColor, int productionTime,float carPrice , float carEngine)
//	{
//		this->_id = id;
//		this->_carVendor = carVendor;
//		this->_carModel = carModel;
//		this->_carColor = carColor;
//		this->_productionTime = productionTime;
//		this->_carPrice = carPrice;
//		this->_carEngine = carEngine;
//	}
//
//	virtual void CarInfo() 
//	{
//		cout << "Information about Cars:" << endl;
//		cout << "Car Vendor:" << _carVendor << endl;
//		cout << "Car Model:" << _carModel << endl;
//		cout << "Car Color:" << _carColor << endl;
//		cout << "Production Time:" << _productionTime << endl;
//		cout << "Car Price :" << _carPrice << endl;
//		cout << "Car Engine:" << _carEngine << endl;
//		cout << endl;
//	}
//};
//
//
//class Hybrid :public Car
//{
//protected:
//	int _horsePower;
//public:
//	Hybrid(int id, string carVendor, string carModel, string carColor, int productionTime,float carPrice, float carEngine)
//		:Car(id, carVendor, carModel, carColor, productionTime,carPrice, carEngine) {}
//
//	virtual void CarInfo() override
//	{
//		cout << "Information about Cars:" << endl;
//		cout << "Car Vendor:" << _carVendor << endl;
//		cout << "Car Model:" << _carModel << endl;
//		cout << "Car Color:" << _carColor << endl;
//		cout << "Production Time:" << _productionTime << endl;
//		cout << "Car Price:" << _carPrice << endl;
//		cout << "Car Engine:" << _carEngine << endl;
//
//	}
//
//	int getHorsePower() { return _horsePower; }
//
//};
//
//
//
//class Manual :public Car
//{
//protected:
//	int _countCars;
//public:
//	Manual(int id, string carVendor, string carModel, string carColor, int productionTime,float carPrice, float carEngine)
//		:Car(id, carVendor, carModel, carColor, productionTime,carPrice, carEngine) {}
//
//	virtual void CarInfo() override
//	{
//		cout << "Information about Cars:" << endl;
//		cout << "Car Vendor:" << _carVendor << endl;
//		cout << "Car Model:" << _carModel << endl;
//		cout << "Car Color:" << _carColor << endl;
//		cout << "Production Time:" << _productionTime << endl;
//		cout << "Car Price:" << _carPrice << endl;
//		cout << "Car Engine:" << _carEngine << endl;
//	}
//
//
//	int getCountCars() { return _countCars; }
//
//};
//
//
//class Automatic :public Car
//{
//private:
//	int _carSpeed;
//public:
//	Automatic(int id, string carVendor, string carModel, string carColor, int productionTime,float carPrice ,  float carEngine)
//		:Car(id, carVendor, carModel, carColor, productionTime, carPrice, carEngine) {}
//
//	virtual void CarInfo() override
//	{
//		cout << "Information about Cars:" << endl;
//		cout << "Car Vendor:" << _carVendor << endl;
//		cout << "Car Model:" << _carModel << endl;
//		cout << "Car Color:" << _carColor << endl;
//		cout << "Production Time:" << _productionTime << endl;
//		cout << "Car Price:" << _carPrice << endl;
//		cout << "Car Engine:" << _carEngine << endl;
//	}
//
//
//	int getSpeed() { return _carSpeed; }
//};
//
//void display(Car cars)
//{
//	cars.CarInfo();
//}