#include <iostream>
#include <numbers> // For std::numbers::pi

using namespace std;

void calcCylinderStats(double radius, double height)
{
  // double smallRadius = 3.0, smallHeight = 8.0;
  double smallEnds = 2 * numbers::pi * radius * radius;
  double smallSide = 2 * numbers::pi * radius * height;
  double smallArea = smallEnds + smallSide;
  double smallVolume = numbers::pi * radius * radius * height;
  // cout << "Small container:" << endl;
  cout << "Surface area: " << smallArea << " square cm" << endl;
  cout << "Volume: " << smallVolume << " cubic cm\n" << endl;
}

int main()
{
  cout << "Small container:" << endl;
  calcCylinderStats(3.0, 8.0);

  cout << "Medium container:" << endl;
  calcCylinderStats(5.0, 12.0);

  cout << "Large container:" << endl;
  calcCylinderStats(7.0, 18.0);
}