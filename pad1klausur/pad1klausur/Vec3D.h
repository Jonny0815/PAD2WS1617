#pragma once
class Vec3D
{
private:
	double x;
	double y;
	double z;


public:

	void print();
	double length();
	Vec3D add(Vec3D);
	Vec3D sub(Vec3D);


	Vec3D();
	Vec3D(double);
	Vec3D(double, double);
	Vec3D(double, double, double);
	~Vec3D();
};

