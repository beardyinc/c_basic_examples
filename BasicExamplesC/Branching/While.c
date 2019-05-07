#include <stdio.h>
#include <stdbool.h>

bool readDoorSensor() {
	int a = rand() % 101;
	//simulate sensor delay 
	Sleep(1000);
	return a <= 85;
}

void main() {
	srand(time(NULL));

	bool isDoorOpen = true;

	while (isDoorOpen) {
		printf("door is still open\n");
		isDoorOpen = readDoorSensor();
	}
	printf("door is closed!");
}