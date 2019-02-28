// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na ko�cu tego
// pliku.

// Prosze napisac strukture MapPoint, ktore reprezentuje punkt na
// mapie skladajacy sie z nazwy, dlugosci (longitude) i szerokosci
// (latitude) geograficznej (bez oznaczania polkol).

// Funkcja inTheMiddle powinna tworzyc nowy punkt na mapie o zadanej
// nazwie i polozeniu, ktore jest srednia arytmetyczna z polozen
// podanych punktow czyli x = (x_1 + x_2)/2

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Zarzadzanie procesem kompilacji oraz definicjami zmiennych preprocesora
// mo�na wykona� poprzez dedykowany Makefile lub CMakeLists.txt (pro�ciej).

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym w�asnych wczesniej
// przygotowanych plikow opr�cz makefile)

// Pliki programu prosz� uporz�dkowa� wed�ug nast�puj�cego schematu:
// Lab04/
//      /CMakeLists.txt (lub Makefile)
//      /Main.cpp
//      /include/MapPoint.h
//      /include/MapDistance.h
//      /src/MapPoint.cpp
//      /src/MapDistance.cpp
//
// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

#include <iostream>
#include "MapPoint.h"

#ifdef MAPCALC
#include "MapDistance.h"
#endif

int main()
{
  const double longitude = 19.938333;
  const double latitude = 50.061389;
  MapPoint krk = construct("Krakow", latitude, longitude);
  print(krk); //ok
  MapPoint nyc = construct("NYC", 40.7127, -74.0059);
  print(nyc); //ok
  MapPoint irkutsk = construct("Irkutsk", 52.283333, 104.283333);
  print(irkutsk);                           //ok
  const MapPoint &siberiaCapital = irkutsk; //&
  print(siberiaCapital);                    //ok

#ifdef MAPCALC
  const double longitudeShift = 4.1234;
  const double latitudeShift = -25.987;
  movePoint(irkutsk, latitudeShift, longitudeShift);                        //ok //zmienić na *irkutsk
  print(siberiaCapital);                                                    //ok
  MapPoint mp = inTheMiddle(krk, siberiaCapital, "Somewhere but not here"); //ok
  print(mp);                                                                //ok
  clear(mp);
#endif

  clear(nyc);
  clear(krk);
  clear(irkutsk);
}
/** Wynik dzialania programu:
brachwal@vbox:[build]$ ./Lab04
Position of Krakow. Latitude: 50.0614. Longitude: 19.9383
Position of NYC. Latitude: 40.7127. Longitude: -74.0059
Position of Irkutsk. Latitude: 52.2833. Longitude: 104.283
Position of Irkutsk. Latitude: 52.2833. Longitude: 104.283
Position of Irkutsk. Latitude: 26.2963. Longitude: 108.407
Position of Somewhere but not here. Latitude: 38.1789. Longitude: 64.1725
*/
