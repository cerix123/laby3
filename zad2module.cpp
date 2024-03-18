module zad2;
import <iostream>;

double calculateSphereSurfaceArea(double radius)
{
	return 4 * 3.14 * radius * radius;
}
double calculateSphereVolume(double radius)
{
	return 4 / 3 * 3.14 * radius * radius * radius;
}
void printSphereSurfaceAndVolume(double radius)
{
	std::cout << calculateSphereSurfaceArea(radius) << std::endl;
	std::cout << calculateSphereVolume(radius) << std::endl;
}