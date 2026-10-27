/*
  Проект "Ходок"
  Автор
    Зубр ОВК
  Описание
    Скрипт обеспечивает приседание.
*/
#include <roki4Gibon.h>

#define MASK_CLAVICLE (MASK_LEFT_CLAVICLE | MASK_RIGHT_CLAVICLE)
#define MASK_SHOULDER (MASK_LEFT_SHOULDER | MASK_RIGHT_SHOULDER)

int angle;
int slide;
int velo;
int factor;
int frames;


void main() {
  //Начальные значения
  velo = 20;
  angle = 8000;
  factor = 100;
  slide = 300;

  //Вытянуться в 0
  sfPoseGroup( MASK_ALL, 0, 100 );
  sfPoseGroup( MASK_CLAVICLE, 620, 100 );
  sfWaitFrame( 100 );

  sfPoseGroup( MASK_SHOULDER, -1820, 100 );
  sfWaitFrame( 100 );
  
  while(1) {
    frames = angle / velo;
    
    //Присели
  sfPoseGroup( MASK_CLAVICLE, 7800, frames );
  sfPoseGroup( MASK_SHOULDER, -1820, frames );
//    sfPoseGroup( MASK_CLAVICLE, angle, frames );
    //sfPoseGroup( MASK_SHOULDER, angle, frames );
    sfWaitFrame( frames );
    sfWaitFrame( 100 );
    
    //Встали
  sfPoseGroup( MASK_CLAVICLE, 620, frames );
  sfPoseGroup( MASK_SHOULDER, -1820, frames );
//    sfPoseGroup( MASK_CLAVICLE, 0, frames );
//    sfPoseGroup( MASK_SHOULDER, 0, frames );
    sfWaitFrame( frames );

    sfWaitFrame( 100 );
    }
  }

