#pragma once
#include "BMPHeader.h"
#include "Pixel.h"
#include <string>
using namespace std;

class image {
public:
	BMPHEAD info;
	PIXEL **bitmap;
};

class readImage :public image {
	void readInfoHeader(image&, FILE*);
public:
	image read(const char*);
};

class resizeImage :public image {
public:
	image resize(image&, double);
};

class saveImage :public image {
	void saveInfoHeader(image&, FILE*);
public:
	void save(image&, const char*);
};