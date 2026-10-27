/*
  Проект "Пластиковый робот"
  Автор
    Зубр ОВК
  Описание
    Скрипт прошивки серийного номера
*/
#include <roki1p.h>

import VPS_SERIAL_SET   void sfSerialSet( int serial );
import VPS_SERIAL_GET   int  sfSerialGet();

int s;

void main() {
  s = sfSerialGet();
  sfSerialSet(141);
  sfStop();
  }


