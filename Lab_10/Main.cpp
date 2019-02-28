// Nazwa pliku wykonywalnego: SmartGeo

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na ko�cu tego
// pliku.

// Prosze napisac klasy Point2D, Point2DSmartPtr, oraz Point2DAverage
// reprezentujace odpowiednio:
// 1) punkt na plaszczyznie (x,y);
// 2) inteligentny wskaznik (na obiekt typu Point2D);
// 3) funktor
//
// ad.1 klasa reprezentuj�ca punkt na plaszczyznie (x,y). Dodatkowo
//      trzeba zdefiniowac dla niej operatory post/pre inkrementacji
//      (modyfikuj�ce odpowiednio zar�wno x jak i y o warto�� 1).
//      Obikety tej klasy mo�na w prosty spos�b przekazywa� do standardowego
//      wyjscia (std::cout)
//
// ad.2. klasa b�d�ca opakowaniem dla normalnych wska�nik�w na obiekt Point2D
//       zapewniaj�ca wobec nich dodatkowe, zachowanie:
//       - w destruktorze klasy Point2DSmartPtr wywolany jest operator delete,
//       dzieki czemu klasa ta moze sluzyc do bezpiecznego obchodzenia si� z pami�ci�.
//
// ad.3. klasa stanowiaca obiekt funkcyjny (funktor), obliczaj�cy �redni�
//       arytmetyczn� z podanych w argumencie Point2D (srednia arytmetyczna osobno dla x i y)
//       i aktualizuj�cy wynik z ka�dym kolejnym wywo�aniem.
//       Funkcja Reset() to funkcja resetuj�ca stan funktora.
//
// Pliku Main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).
//
// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie SmartGeo. Program nalezy kompilowac z flagami -Wall -g.
//
// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile)
//
// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.
//
// Rozwiazanie (czyli dodane pliki, makefile i Main.cpp) nalezy wgrac
// do UPEL

#include <iostream>
#include "Point2DSmartPtr.h"
#include "Point2DAverage.h"
# include "Point2D.h"
using namespace std;

int main() {

  cout << "*** POINTS ON THE PLANE ***"<< endl;

  Point2D point1(1.2, 0.5), point2(0.8, 0.5), point3;

  cout << "Point(1):: " << point1 << endl;
  cout<< "Point(2):: " << --point2 << endl;
  cout<< "Point(3):: " << point3++ << endl;

  point3 = 0.5 + point1 + point2;
  cout<< "Point(4):: " << point3 << endl;


  Point2DSmartPtr point_smart_ptr = new Point2D(0.5, 1.2);
  cout<< "Point(5):: " << *point_smart_ptr << " (smart ptr)" << endl;


  cout << "*** AVEDRAGE POINT ON THE PLANE ***"<< endl;

  Point2DAverage AveragePoint;

  cout<< "Point(1):: " << AveragePoint(point1) << endl;
  cout<< "Point(2):: " << AveragePoint(point2) << endl;

  AveragePoint.Reset();

  cout<< "Point(3):: " << AveragePoint(point1) << endl;
  cout<< "Point(3):: " << AveragePoint(point2) << endl;
  cout<< "Point(3):: " << AveragePoint(point3) << endl;


  
  return 0;
}
/* Wynik dzialania programu

*** POINTS ON THE PLANE ***
Point(1):: (1.2,0.5)
Point(2):: (-0.2,-0.5)
Point(3):: (0,0)
Point(4):: (1.5,0.5)
Point(5):: (0.5,1.2) (smart ptr)
*** AVEDRAGE POINT ON THE PLANE ***
Point(1):: (1.2,0.5)
Point(2):: (0.5,0)
Point(3):: (1.2,0.5)
Point(3):: (0.5,0)
Point(3):: (0.833333,0.166667)
*/