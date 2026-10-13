#include <iostream>
#include <numbers> // For std::numbers::pi

using namespace std;

void calcSmallStats(double smallRadius, double smallHeight)
{
  double smallRadius = 3.0, smallHeight = 8.0;
  double smallEnds = 2 * numbers::pi * smallRadius * smallRadius;
  double smallSide = 2 * numbers::pi * smallRadius * smallHeight;
  double smallArea = smallEnds + smallSide;
  double smallVolume = numbers::pi * smallRadius * smallRadius * smallHeight;
  cout << "Small container:" << endl;
  cout << "Surface area: " << smallArea << " square cm" << endl;
  cout << "Volume: " << smallVolume << " cubic cm\n" << endl;
}

void calcMediumStats()
{
  double mediumRadius = 5.0, mediumHeight = 12.0;
  double mediumEnds = 2 * numbers::pi * mediumRadius * mediumRadius;
  double mediumSide = 2 * numbers::pi * mediumRadius * mediumHeight;
  double mediumArea = mediumEnds + mediumSide;
  double mediumVolume =
      numbers::pi * mediumRadius * mediumRadius * mediumHeight;
  cout << "Medium container:" << endl;
  cout << "Surface area: " << mediumArea << " square cm" << endl;
  cout << "Volume: " << mediumVolume << " cubic cm\n" << endl;
}

void calcLargeStats()
{
  double largeRadius = 7.0, largeHeight = 18.0;
  double largeEnds = 2 * numbers::pi * largeRadius * largeRadius;
  double largeSide = 2 * numbers::pi * largeRadius * largeHeight;
  double largeArea = largeEnds + largeSide;
  double largeVolume = numbers::pi * largeRadius * largeRadius * largeHeight;
  cout << "Large container:" << endl;
  cout << "Surface area: " << largeArea << " square cm" << endl;
  cout << "Volume: " << largeVolume << " cubic cm" << endl;
}

int main()
{
  calcSmallStats(3.0, 8.0);
  calcMediumStats();
  calcLargeStats();
}