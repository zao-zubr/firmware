/*
  Проект "Ходок"
  Автор
    Зубр ОВК
  Описание
    Скрипт обеспечивает переназначение кнопок.
    Левая кнопка снова запускает этот скрипт, который переназначает кнопки и одновременно расслабляет все двигатели
*/
#include <roki4Gibon.h>


void main() {
  //SV_MENU_SLOTS
  
  //На правую кнопку назначаем "Напрячся", на левую - этот скрипт, в котором расслабляемся
  svButtonRight = sfSlotIndex("roki4TenseUp.cpp");
  svButtonLeft  = sfSlotIndex("roki4Init.cpp");
  svHeadControlMask = svNNControlMask = 0;
  //Расслабиться
  sfFreeGroup( MASK_ALL );
  //... и завершить
  sfStop();
  }
