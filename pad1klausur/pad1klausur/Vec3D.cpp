#include "stdafx.h"
#include "Vec3D.h"
#include <iostream>
#include <math.h>

using namespace std;

void Vec3D::print() {

	cout << "(" << x << "|" << y << "|" << z << ")";

}


Vec3D Vec3D::add(Vec3D v) {

	Vec3D v_n;

	v_n.x = this->x + v.x;
	v_n.y = this->y + v.y;
	v_n.z = this->z + v.z;

	return v_n;
}


Vec3D Vec3D::sub(Vec3D v) {

	Vec3D v_n;

	v_n.x = this->x - v.x;
	v_n.y = this->y - v.y;
	v_n.z = this->z - v.z;

	return v_n;
}


double Vec3D::length() {

	double sum = x*x + y*y + z*z;
	return sqrt(sum);

}


Vec3D::Vec3D()
{
	x = 0;
	y = 0;
	z = 0;
}


Vec3D::Vec3D(double a) {

	x = a;
	y = a;
	z = a;


}

Vec3D::Vec3D(double a, double b) {

	x = a;
	y = b;
	z = 0;

}

Vec3D::Vec3D(double a, double b, double c) {

	x = a;
	y = b;
	z = c;

}


Vec3D::~Vec3D()
{
}
