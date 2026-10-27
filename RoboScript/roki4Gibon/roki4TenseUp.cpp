/*
  Проект "Ходок"
  Автор
    Зубр ОВК
  Описание
    Скрипт обеспечивает переназначение правой кнопки и переводит все сервы в 0
*/
#include <roki4Gibon.h>

void main() {
  //Переназначаем кнопку на хотьбу
  //svButtonRight = sfSlotIndex("roki3AWalk.cpp");
//  sfAccumSetup4( &svDebug0, &svDebug1, &svDebug1, &svDebug1 );
//  sfAccumTrigger();
  svNNControlX = 0;
  svNNControlY = 0;
  svNNControlT = 0;
  //Переводим все сервы в 0
  sfPoseGroup( MASK_ALL, 0, 100 );
  sfWaitFrame( 200 );
  svNNControlMask = MASK_ALL;
  sfWaitFrame( 200 );
  while(1) {
    sfWaitNextFrame();
    svNNControlX = svRemoteRightJoystickY * -1;
    svNNControlY = svRemoteRightJoystickX * -1;
    svNNControlT = svRemoteLeftJoystickX * 20;
    }
  svRemoteLeftJoystick = 0;
  sfWaitFrame( 500 );
  svRemoteLeftJoystick = 0;
  sfStop();
  }
