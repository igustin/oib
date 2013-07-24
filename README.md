oib
===

OIB check

Minimalistički C program za provjeru ispravnosti OIB-a. Povratna vrijednost je 0 za ispravan OIB, a u svim
ostalim slučajevima vraća 1 (neispravan kontrolni broj, nisu brojke, nema dovoljno znamenki, nema argumenta).

Pisano i testirano na Linuxu, ali trebalo bi raditi na svim platformama.

Kompajliranje:

  gcc oib.c -o oib
  
Korištenje:

  ./oib \<oib\>
