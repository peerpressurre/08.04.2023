#include "Phone.h"

struct PhoneProvider
{
	void Phones()
	{
		const int size = 6;
		Phone* phones = new Phone[size];
		phones[0] = { "Apple", "Ios", "Iphone 14", "Dual 12MP cameras", 128, 6.1 };
		phones[1] = { "Apple", "Ios", "Iphone 12", "Dual rear cameras", 256, 6.1 };
		phones[2] = { "Apple", "Ios", "Iphone 12 mini", "Dual rear cameras", 128, 5.4 };
		phones[3] = { "Samsung", "Android", "Galaxy Z Flip", "12MP + 12MP", 256, 6.7 };
		phones[4] = { "Samsung", "Android", "Galaxy Z Flip", "50MP + 10MP + 12MP", 512, 7.6 };
		phones[5] = { "Samsung", "Android", "Galaxy S21", "12MP + 12MP + 64MP", 128, 6.2};
	}

	void PrintPhones(switch_on, Phone* phones)
	{
		switch (int switch_on)
		{
		case 1:
		{
			cout << "Filter: Iphone" << endl;
			cout << endl;
			cout << "1:" << endl;
			cout << "Brand: " << phones[0]->getBrand << endl;
			cout << "Operating system: " << phones[0]->getOs << endl;
			cout << "Model: " << phones[0]->getModel << endl;
			cout << "Camera: " << phones[0]->getCamera << endl;
			cout << "Storage: " << phones[0]->getStorage << endl;
			cout << "Display: " << phones[0]->getDisplay << endl;
			cout << endl;
			cout << "2:" << endl;
			cout << "Brand: " << phones[1]->getBrand << endl;
			cout << "Operating system: " << phones[1]->getOs << endl;
			cout << "Model: " << phones[1]->getModel << endl;
			cout << "Camera: " << phones[1]->getCamera << endl;
			cout << "Storage: " << phones[1]->getStorage << endl;
			cout << "Display: " << phones[1]->getDisplay << endl;
			cout << endl;
			cout << "3:" << endl;
			cout << "Brand: " << phones[2]->getBrand << endl;
			cout << "Operating system: " << phones[2]->getOs << endl;
			cout << "Model: " << phones[2]->getModel << endl;
			cout << "Camera: " << phones[2]->getCamera << endl;
			cout << "Storage: " << phones[2]->getStorage << endl;
			cout << "Display: " << phones[2]->getDisplay << endl;
		}break;
		case 2:
		{
			cout << "Filter: Samsung" << endl;
			cout << endl;
			cout << "4:" << endl;
			cout << "Brand: " << phones[3]->getBrand << endl;
			cout << "Operating system: " << phones[3]->getOs << endl;
			cout << "Model: " << phones[3]->getModel << endl;
			cout << "Camera: " << phones[3]->getCamera << endl;
			cout << "Storage: " << phones[3]->getStorage << endl;
			cout << "Display: " << phones[3]->getDisplay << endl;
			cout << endl;
			cout << "5:" << endl;
			cout << "Brand: " << phones[4]->getBrand << endl;
			cout << "Operating system: " << phones[4]->getOs << endl;
			cout << "Model: " << phones[4]->getModel << endl;
			cout << "Camera: " << phones[4]->getCamera << endl;
			cout << "Storage: " << phones[4]->getStorage << endl;
			cout << "Display: " << phones[4]->getDisplay << endl; 
			cout << endl;
			cout << "6:" << endl;
			cout << "Brand: " << phones[5]->getBrand << endl;
			cout << "Operating system: " << phones[5]->getOs << endl;
			cout << "Model: " << phones[5]->getModel << endl;
			cout << "Camera: " << phones[5]->getCamera << endl;
			cout << "Storage: " << phones[5]->getStorage << endl;
			cout << "Display: " << phones[5]->getDisplay << endl;
		}break;
		case 3:
		{
			cout << "Filter: All" << endl;
			cout << endl;
			cout << "1:" << endl;
			cout << "Brand: " << phones[0]->getBrand << endl;
			cout << "Operating system: " << phones[0]->getOs << endl;
			cout << "Model: " << phones[0]->getModel << endl;
			cout << "Camera: " << phones[0]->getCamera << endl;
			cout << "Storage: " << phones[0]->getStorage << endl;
			cout << "Display: " << phones[0]->getDisplay << endl;
			cout << endl;
			cout << "2:" << endl;
			cout << "Brand: " << phones[1]->getBrand << endl;
			cout << "Operating system: " << phones[1]->getOs << endl;
			cout << "Model: " << phones[1]->getModel << endl;
			cout << "Camera: " << phones[1]->getCamera << endl;
			cout << "Storage: " << phones[1]->getStorage << endl;
			cout << "Display: " << phones[1]->getDisplay << endl;
			cout << endl;
			cout << "3:" << endl;
			cout << "Brand: " << phones[2]->getBrand << endl;
			cout << "Operating system: " << phones[2]->getOs << endl;
			cout << "Model: " << phones[2]->getModel << endl;
			cout << "Camera: " << phones[2]->getCamera << endl;
			cout << "Storage: " << phones[2]->getStorage << endl;
			cout << "Display: " << phones[2]->getDisplay << endl;
			cout << endl;
			cout << "4:" << endl;
			cout << "Brand: " << phones[3]->getBrand << endl;
			cout << "Operating system: " << phones[3]->getOs << endl;
			cout << "Model: " << phones[3]->getModel << endl;
			cout << "Camera: " << phones[3]->getCamera << endl;
			cout << "Storage: " << phones[3]->getStorage << endl;
			cout << "Display: " << phones[3]->getDisplay << endl;
			cout << endl;
			cout << "5:" << endl;
			cout << "Brand: " << phones[4]->getBrand << endl;
			cout << "Operating system: " << phones[4]->getOs << endl;
			cout << "Model: " << phones[4]->getModel << endl;
			cout << "Camera: " << phones[4]->getCamera << endl;
			cout << "Storage: " << phones[4]->getStorage << endl;
			cout << "Display: " << phones[4]->getDisplay << endl;
			cout << endl;
			cout << "6:" << endl;
			cout << "Brand: " << phones[5]->getBrand << endl;
			cout << "Operating system: " << phones[5]->getOs << endl;
			cout << "Model: " << phones[5]->getModel << endl;
			cout << "Camera: " << phones[5]->getCamera << endl;
			cout << "Storage: " << phones[5]->getStorage << endl;
			cout << "Display: " << phones[5]->getDisplay << endl;
		}break;
		default:
			break;
		}
	}
};