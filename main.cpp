#include <iostream>
#include <numbers> // For std::numbers::pi

using namespace std;

void calcSmallStats(double smallRadius, double smallHeight)
{
  // double smallRadius = 3.0, smallHeight = 8.0;
  double smallEnds = 2 * numbers::pi * smallRadius * smallRadius;
  double smallSide = 2 * numbers::pi * smallRadius * smallHeight;
  double smallArea = smallEnds + smallSide;
  double smallVolume = numbers::pi * smallRadius * smallRadius * smallHeight;
  // cout << "Small container:" << endl;
  cout << "Surface area: " << smallArea << " square cm" << endl;
  cout << "Volume: " << smallVolume << " cubic cm\n" << endl;
}

int main()
{
  cout << "Small container:" << endl;
  calcSmallStats(3.0, 8.0);

  cout << "Medium container:" << endl;
  calcSmallStats(5.0, 12.0);

  cout << "Large container:" << endl;
  calcSmallStats(7.0, 18.0);
}