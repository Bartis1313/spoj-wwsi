
ASD_4_2 - Kolejka
Przed ponad dwunastu laty, w roku 2006 na portalu Spoj umieszczono zadanie STOS, którego celem miało być pokazanie sposobu działania stosu, poprzez jego zasymulowanie przy pomocy niewielkiej tablicy. Zadanie STOS miało walor dydaktyczny i dlatego zainspirowało nas do tego, aby podobny problem rozwiązać dla kolejki. Naszym celem będzie napisanie programu, który pozwoli zasymulować działanie kolejki, również przy pomocy niewielkiej tablicy.

Napisać program, który w 10-elementowej tablicy mogącej pomieścić liczby całkowite będzie symulował działanie kolejki. Kolejka na początku jest pusta. Potem, w zależności od pojawiających się na wejściu poleceń, ma się zapełniać lub opróżniać.

Język obsługujący kolejkę składa się z trzech komend. System poprawnie reaguje na każdą komendę, stosownie do jej treści, a następnie na konsoli pojawia się odpowiedni komunikat informujący o wykonanej czynności:

Enqueue x - komenda nakazująca umieszczenie liczby całkowitej x w kolejce. Po próbie jej wykonania, w osobnym wierszu pojawi się napis:
---> - informacja o poprawnym zapisie liczby x w kolejce;
Error: queue is full - informacja o tym, iż z powodu zapełnienia kolejki, liczba x nie może być w niej zapisana.
Dequeue - komenda nakazująca zdjęcie liczby z kolejki. Po próbie jej wykonania, w osobnym wierszu pojawi się napis:
x - wartość liczby zdjętej z kolejki;
Error: queue is empty - informacja o tym, iż kolejka jest pusta;
Print - komenda nakazująca wydrukowanie na konsoli zawartości kolejki w kolejności od głowy do jej ogona. Po próbie jej wykonania, w osobnym wierszu pojawi się napis:
Print: x1, x2, ..., xn - gdy kolejka nie jest pusta, na konsoli zostaną wydrukowane liczby całkowite tworzące zawartość kolejki;
Print: Queue is empty - napis informuje o tym, że kolejka jest pusta.
Wejście
Na wejście programu podana zostanie pewna liczba poprawnych komend. Każda komenda zostanie zapisana w jednej linii.

Wyjście
Na wyjściu programu w osobnych liniach pojawią się odpowiednie komunikaty informujące o skutkach wykonanych komend.

Przykład
Wejście:

Enqueue 1
Enqueue 2
Enqueue 3
Enqueue 4
Enqueue 5
Print
Enqueue 6
Enqueue 7
Enqueue 8
Enqueue 9
Enqueue 10
Enqueue 11
Dequeue
Dequeue
Dequeue
Dequeue
Print
Dequeue
Dequeue
Dequeue
Dequeue
Dequeue
Print
Enqueue 12
Dequeue
Dequeue
Print
Wyjście:

--->
--->
--->
--->
--->
Print: 1 2 3 4 5
--->
--->
--->
--->
--->
Error: queue is full
1
2
3
4
Print: 5 6 7 8 9 10
5
6
7
8
9
Print: 10
--->
10
12
Print: Queue is empty