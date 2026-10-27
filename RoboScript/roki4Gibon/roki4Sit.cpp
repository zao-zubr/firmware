/*
  Проект "Ходок"
  Автор
    Зубр ОВК
  Описание
    Скрипт обеспечивает приседание.
*/
#include <roki4Gibon.h>

#define MASK_HIP (MASK_LEFT_HIP | MASK_RIGHT_HIP)
#define MASK_KNEE (MASK_LEFT_KNEE | MASK_RIGHT_KNEE)
#define MASK_FOOT_FRONT (MASK_LEFT_FOOT_FRONT | MASK_RIGHT_FOOT_FRONT)

int angle;
int slide;
int velo;
int factor;
int frames;


void main() {
  //Начальные значения
  velo = 20;
  angle = 3200;
  factor = 100;
  slide = 300;

  //Вытянуться в 0
  sfPoseGroup( MASK_ALL, 0, 100 );
  sfWaitFrame( 100 );
  
  while(1) {
    frames = angle / velo;
    
    //Присели
    //svPoseGroupDelay( MASK_HIP | MASK_FOOT_FRONT, angle + 25, frames, 0 );
    sfPoseGroupDelay( MASK_HIP | MASK_FOOT_FRONT, angle, frames, 0 );
    sfPoseGroup( MASK_KNEE, angle * 2, frames * factor / 100 );
//    sfPoseGroup( MASK_LEFT_FOOT_SIDE | MASK_LEFT_HIP_SIDE, slide, frames );
//    sfPoseGroup( MASK_RIGHT_FOOT_SIDE | MASK_RIGHT_HIP_SIDE, -slide, frames );
    sfWaitFrame( frames );
    sfWaitFrame( 100 );
    
    //Встали
//    svPoseGroupDelay( MASK_HIP | MASK_FOOT_FRONT, 0, frames, 2 );
    sfPoseGroup( MASK_HIP | MASK_FOOT_FRONT, 0, frames );
    sfPoseGroup( MASK_KNEE, 0, frames );
//    sfPoseGroup( MASK_LEFT_FOOT_SIDE | MASK_LEFT_HIP_SIDE, -slide, frames );
//    sfPoseGroup( MASK_RIGHT_FOOT_SIDE | MASK_RIGHT_HIP_SIDE, slide, frames );
    sfWaitFrame( frames );

    sfWaitFrame( 100 );
    }
  }

