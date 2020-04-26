# Simple programs for IR transmitting, used on an arduino.

## Intro:
**EN**: IRrecord records IR codes, it's mostly default, I've modified only the pin numbers. <br>
**RO**: IRrecord inregistreaza coduri IR, este aproape default, am modificat doar pinii. <br>

**EN**: ir_trans transmits at a given time (the starting time is set at the beginning of the file) an IR code. Easy. It also transmits at an interval of *n* milliseconds the current time (Warning! The time resets at the closing/opening of the serial monitor, I recommend it to be used only for small debugging). <br>
**RO**: ir_trans transmite la un anumit timp (timplul de inceput este setat la inceputul fisierului) un cod IR, simplu. Transmite si la un interval de *n* milisecunde timpul curent (Atentie! Se reseteaza timpul la inchiderea/deschiderea serial monitor-ului, recomand sa se foloseasca doar pentru debugging mic).

### Tip:
**EN**: By default, the IRremote library uses pin #3 for IR transmitting. If you want to change it, you will have to [change the IRremote library itself][stackir]. <br>
**RO**: Fara modificari, libraria IRremote foloseste pinul #3 pentru transmitere IR. Daca vrei sa il schimbi, va trebui sa [schimbi direct din librarie][stackir]. <br>

## Links:
[IRremote][irremote] <br>
[Time/TimeLib][time] <br>

[irremote]: https://github.com/z3t0/Arduino-IRremote
[stackir]: https://arduino.stackexchange.com/a/33557
[time]: https://github.com/PaulStoffregen/Time
