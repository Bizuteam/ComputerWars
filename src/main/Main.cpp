#include <iostream>
#include <ihm/MapView.hpp>

using namespace std;

int main(int argc, char** argv){

	cout << "I choose war!!!!!!!!!!!!!" << endl;

	//ONLY FOR TEST
	double **map;
	map = (double**)malloc(sizeof(double*)*20);
	for(int x = 0; x<20; x++){
		map[x] = (double*)malloc(sizeof(double)*20);
		for(int y = 0; y<20 ; y++){
			if(y == 5 || y == 15){
				map[x][y] = 2;
			}
			else if(y > 5 && y < 15){
				map[x][y] = 1;
			}
		}
	}
	MapView mapView = MapView(400, 400, map);
	mapView.displayLoop();
	//ONLY FOR TEST

	return 0;
}
