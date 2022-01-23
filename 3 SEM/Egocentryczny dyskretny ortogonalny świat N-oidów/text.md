ASD_2_1 - Egocentryczny dyskretny ortogonalny świat N-oidów
Zapewne nie jest Ci obca opowieść o płaszczakach, płaskich istotach żyjących w przestrzeni dwuwymiarowej. Płaszczaki mogą się poruszać tylko po płaszczyźnie. W ich świecie, każdą zmianę położenia można opisać przy pomocy wektora o dwóch składowych.

W przeciwieństwie do płaszczaków, ludzie żyją w przestrzeni trójwymiarowej. Mogą wobec tego poruszać się w dowolnym kierunku w poziomie, a dzięki zdobyczom techniki także w pionie. W tym przypadku, zmianę położenia opisuje wektor o trzech składowych.

Wyobraź sobie, że gdzieś we wszechświecie można spotkać stworki, których przestrzeń ma n wymiarów. Na potrzeby naszej opowieści stworki te nazwiemy N-oidami. Świat N-oidów jest egocentryczny, dyskretny i ortogonalny:

Egocentryczny, gdyż każdy z nich ma własny i dla niego jedyny kartezjański układ odniesienia, ze środkiem w jego własnym domu.
Dyskretny, gdyż w tym świecie są znane tylko liczby całkowite.
Ortogonalny, gdyż N-oidy poruszają się odcinkami po liniach prostych. Dodatkowo, dwa sąsiednie odcinki ich wędrówki są zawsze wzajemnie prostopadłe.
N-oid zanim wyjdzie z domu, w swoim notatniku ma zapisane kolejne odcinki swojej wędrówki w postaci ciągu wektorów o n całkowitych składowych. Wędrując, najpierw wyrusza w kierunku pierwszego wektora, a potem zmierza w kierunku kolejnych wektorów.

Dotychczas, w opisie wędrówki N-oidów nigdy nie było błędów: marszruta składała się z ciągu niezerowych wektorów, które w stosunku do wektora poprzedniego zawsze były prostopadłe. Niestety ostatnimi czasy sprawa się nieco skomplikowała. W opisie marszruty, z nieznanych przyczyn, zaczęły pojawiać się błędy. A to pojawia się wektor nie prostopadły do poprzednika, a to wektor o składowych zerowych.

Napisz program, który pomóże N-oidowi w jego wędrówce.

Dla każdego zestawu danych w opisie marszruty N-oida program powinien wyeliminować wektory zerowe lub nieprostopadłe do ostatniego prawidłowego wektora. Na końcu należy wypisać współrzędne punktu, do którego powinien dotrzeć N-oid wędrując zgodnie z prawidłowym opisem.

Przed przystąpieniem do napisania programu należy przyjąć następujące założenia:

N-oid wystartował ze środka kartezjańskiego układu odniesienia
Pierwszy wektor w marszrucie jest zdefiniowany prawidłowo
Wejście
Pierwsza linijka wejścia zawiera dokładnie jedną liczbę całkowitą d ∈ [1;4], określającą liczbę zestawów danych.

Każdy zestaw zaczyna się liczbą n ∈ [2;10] będącą rozmiarem przestrzeni, następnie w zestawie danych pojawia się liczba m ∈ [2;500] określająca liczbę wektorów w opisie marszruty. Następnie w m wierszach znajdują się współrzędne wektorów.

Wyjście
W d liniach wyjścia należy podać dla każdego zestawu danych wektor określający położenie N-oida po zakończeniu wędrówki.

Przykład
Wejście:

3
2
3
1 1
1 -1
0 2
4
5
1 2 3 1
0 2 -1 -1
1 0 1 -1
1 2 3 4
1 0 0 1
3
2
0 1 2
2 0 1
Wyjście:

2 0 
3 6 6 3 
0 1 2