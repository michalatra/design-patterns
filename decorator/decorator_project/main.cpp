#include <iostream>
#include "Picture.h"
#include "ICamera.h"
#include "Camera.h"
#include "BrightnessDecorator.h"
#include "ContrastDecorator.h"
#include "SaturationDecorator.h"

int main() {

    ICamera* camera = new Camera();
    ICamera* brightenedCamera = new BrightnessDecorator(camera);
    ICamera* contrastyCamera = new ContrastDecorator(brightenedCamera);
    ICamera* saturatedCamera = new SaturationDecorator(contrastyCamera);

    Picture picture = saturatedCamera->takePicture();
    std::cout<<picture.getPictureData()<<"\n";
    return 0;
}
