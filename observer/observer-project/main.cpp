#include "TrafficLights.h"
#include "SelfDrivingCar.h"

int main() {
    TrafficLights lights = TrafficLights();

    auto* car1 = new SelfDrivingCar("Car 1");
    auto* car2 = new SelfDrivingCar("Car 2");
    auto* car3 = new SelfDrivingCar("Car 3");
    auto* car4 = new SelfDrivingCar("Car 4");

    lights.subscribe(car1);
    lights.subscribe(car2);
    lights.subscribe(car3);
    lights.subscribe(car4);

    lights.changeLight();
    lights.changeLight();

    lights.unsubscribe(car2);
    lights.unsubscribe(car3);

    lights.changeLight();

    return 0;
}
