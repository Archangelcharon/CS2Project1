// Zach Oryszak-Ley

#ifndef Point3D_H
#define Point3D_H

using namespace std;

//a class defines points in 3D space
class Point3D 
{
	private:
            double x;
            double y;
            double z;
		
	public:
		//default constructor
		Point3D(double enteredX = 0.0, double enteredY = 0.0, 
                        double enteredZ = 0.0) {
                    
                    x = enteredX;
                    y = enteredY;
                    z = enteredZ;
		}
		~Point3D() {};
		double getx() const
                {
                    return x;
                }
		double gety() const
                {
                    return y;
                }
		double getz() const
                {
                    return z;
                }
                void setPos(double setX, double setY, double setZ) {
                    x = setX;
                    y = setY;
                    z = setZ; 
                }
                
		void move(double dx, double dy, double dz)
                {
                    x += dx;
                    y += dy;
                    z += dz;
                }
		bool operator == (const Point3D &p)
                {
                    return ((x == p.getx()) && (y == p.gety() && z == p.getz()));
                }
};
#endif
