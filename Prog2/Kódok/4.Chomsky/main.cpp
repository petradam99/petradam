#include <iostream>
#include "mlp.hpp"
#include <png++/png.hpp>

int main (int argc, char **argv)
{
    png::image <png::rgb_pixel> png_image (argv[1]);

    int size = png_image.get_width() * png_image.get_height();
    
    Perceptron* p = new Perceptron (3, size, 256, size);
    
    double* image = new double[size];
    
    for (int i = 0; i<png_image.get_width(); ++i)
        for (int j = 0; j<png_image.get_height(); ++j)
            image[i*png_image.get_width() + j] = png_image[i][j].red;
    
        
    double* value = (*p) (image);
    
    //Kiszínezzük az értékek alapján valahogy a beolvasott képet
    for (int i = 0; i<png_image.get_width(); ++i)
        for (int j = 0; j<png_image.get_height(); ++j)
        {
            png_image[i][j].red = value[i*png_image.get_width() + j];
            png_image[i][j].green = value[i*png_image.get_height() + i];
        }
    
    png_image.write("szinezett.png");
    
    std::cout << *value << std::endl;
    
    delete p;
    delete [] image;
    
}
