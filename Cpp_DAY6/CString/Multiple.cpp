#include <iostream>
#include <string.h>

using namespace std;
class Camera
{
public :
	int pixel;

public:
	Camera():pixel(100){}
	void display() { cout << "display camera"<<endl; }
};
class Mp3
{
	int pixel;
public: void display() { cout << " display palying song"<<endl; }


};
class Radio
{
	public: void display() { cout << "play old song" << endl; }
};
class Phone : public Camera, public Mp3, public Radio
{

};
//int main()
//{
//	Phone myiphone;
//	myiphone.Mp3::display();
//	myiphone.Radio::display();
//	myiphone.Camera::display();
//	//cout << myiphone.pixel;
//}