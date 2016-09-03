#include <iostream>
#include <ihm/MapView.hpp>

using namespace std;

int main(int argc, char** argv){

	cout << "I choose war!!!!!!!!!!!!!" << endl;

	MapView mapView = MapView(800, 600);
	mapView.displayLoop();

	return 0;
}
