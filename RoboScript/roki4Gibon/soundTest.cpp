/*
  Проект "Ходок"
  Автор
    Зубр ОВК
  Описание
    Скрипт обеспечивает переназначение кнопок.
    Левая кнопка снова запускает этот скрипт, который переназначает кнопки и одновременно расслабляет все двигатели
*/
#include <roki4Gibon.h>

#define SV_MENU_SLOT_NAME "Тест звука"

void main() {
//  sfSoundPlay( sfSoundIndex("waitCommand.rawSound") );
//  while(1) {
    sfSoundPlay( 5 );
//    while( sfSoundIsPlay() )
//      sfWaitNextFrame();
//    }
  sfStop();
  }