#include "application.h"

struct Phone
{
private:
	string brand
	string os;
	string model;
	string camera;
	int storage;
	float display;
public:
	void setBrand(string brand)
	{
		this->brand = brand;
	}
	void setOs(string os)
	{
		this->os = os;
	}
	void setModel(string model)
	{
		this->model = model;
	}
	void setCamera(string camera)
	{
		this->camera = camera;
	}
	void setStorage(int storage)
	{
		this->storage = storage;
	}
	void setDisplay(float display)
	{
		this->display = display;
	}
	string getBrand()
	{
		return brand;
	}
	string getOs()
	{
		return os;
	}
	string getModel()
	{
		return model;
	}
	string getCamera()
	{
		return camera;
	}
	int getStorage()
	{
		return storage;
	}
	float getDisplay()
	{
		return display;
	}

	//Constructors

	Phone(string brand, string os, string model, string camera, int storage, float display)
	{
		setBrand(brand);
		setOs(os);
		setModel(model);
		setCamera(camera);
		setStorage(storage);
		setDisplay(display);
	}
	~Phone() = default;

	void Info()
	{

	}
};