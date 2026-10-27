
//IronArt v0.125
//Данный файл сгенерирован автоматически системой IronArt и не должен редактироваться
//
#ifndef ROKI4GIBON_H
#define ROKI4GIBON_H
#include <Sv8Sys.h>

//Средние значения акселерометра
int svImuAccX         _at_ 2560;
int svImuAccY         _at_ 2561;
int svImuAccZ         _at_ 2562;
//Сырые значения акселерометра непосредственно с сенсора
int svImuAccRawX      _at_ 2563;
int svImuAccRawY      _at_ 2564;
int svImuAccRawZ      _at_ 2565;

//Средние значения гироскопа
int svImuGyroX        _at_ 2566;
int svImuGyroY        _at_ 2567;
int svImuGyroZ        _at_ 2568;
//Сырые значения гироскопа непосредственно с сенсора
int svImuGyroRawX     _at_ 2569;
int svImuGyroRawY     _at_ 2570;
int svImuGyroRawZ     _at_ 2571;

//Значения кватерниона
int svImuQuaterX      _at_ 2572;
int svImuQuaterY      _at_ 2573;
int svImuQuaterZ      _at_ 2574;
int svImuQuaterW      _at_ 2575;
int svImuQuaterAcc    _at_ 2576;

//Медленные значения акселерометра
int svImuAccSlowX     _at_ 2577;
int svImuAccSlowY     _at_ 2578;
int svImuAccSlowZ     _at_ 2579;


//Напряжение питания
int svAdc             _at_ 2580;

//Реакция на кнопки
//Запишите сюда номер слота, который должен выполняться при нажатии на кнопку
int svButtonLeft      _at_ 2581; //На левой кнопке по умолчанию расслабление
int svButtonRight     _at_ 2582; //На правой кнопке по умолчанию напряжение
int svButtonPress     _at_ 2583; //Состояние нажатых кнопок

//Маскирование управления движками от головы
int svHeadControlMask _at_ 2584;

//Количество фреймов при прямой записи целевого угла в движок
int svDefFrameCount   _at_ 2585;

//Маскирование управления движками от нейросети
int svNNControlMask   _at_ 2589;

//Значения воздействия для нейросети
int svNNControlX      _at_ 2590;
int svNNControlY      _at_ 2591;
int svNNControlT      _at_ 2592;

//Углы Эйлера, получаемые после конвертации с помощью функции sfQuaternionToEuler
float svEulerYaw      _at_ 2600;
float svEulerPitch    _at_ 2601;
float svEulerRoll     _at_ 2602;


#define SV_BUTTON_LEFT_PRESS  1 //Битовая маска для левой кнопки
#define SV_BUTTON_RIGHT_PRESS 2 //Битовая маска для правой кнопки




//Управление от внешнего пульта
int svRemoteStatus         _at_ 3250;  //Состояние пульта (подключен или нет)
int svRemoteButton         _at_ 3251;  //Состояние кнопок пульта (битовое поле, 0 - не нажата, 1 - нажата)
int svRemoteLeftJoystick   _at_ 3252;  //Кнопка левого джойстика
int svRemoteLeftJoystickX  _at_ 3253;  //Смещение левого джойстика по X
int svRemoteLeftJoystickY  _at_ 3254;  //Смещение левого джойстика по Y
int svRemoteRightJoystick  _at_ 3255;  //Кнопка правого джойстика
int svRemoteRightJoystickX _at_ 3256;  //Смещение правого джойстика по X
int svRemoteRightJoystickY _at_ 3257;  //Смещение правого джойстика по Y

//Константы кнопок Android-пульта (AndroidRemoteButtons)
//Аппаратные кнопки
#define ARB_A                    1
#define ARB_B                    2
#define ARB_X                    4
#define ARB_Y                    8
#define ARB_L1                  16
#define ARB_R1                  32
#define ARB_L2                  64
#define ARB_R2                 128
#define ARB_LEFT_JOYSTICK      256
#define ARB_RIGHT_JOYSTICK     512
#define ARB_SELECT            1024
#define ARB_START             2048
//Нажатия pad-а генерит также левый джойстик, когда его значения превышают некий порог
#define ARB_LEFT_PAD_UP       4096
#define ARB_LEFT_PAD_RIGHT    8192
#define ARB_LEFT_PAD_DOWN    16384
#define ARB_LEFT_PAD_LEFT    32768

//Программные кнопки
#define ARB_WALK_FAST        65536
#define ARB_WALK_SLOW       131072
#define ARB_KICK_RIGHT      262144
#define ARB_KICK_LEFT       524288
#define ARB_GETUP_STOMACH  1048576
#define ARB_GETUP_FACEUP   2097152
#define ARB_APPLAUSE       4194304
#define ARB_BEEP           8388608



//Отладочные переменные
int svDebug0         _at_ 2603;
int svDebug1         _at_ 2604;
int svDebug2         _at_ 2605;
int svDebug3         _at_ 2606;

int svRotaryEncoder  _at_ 2586;
int svMenuValue      _at_ 2588;



//Индексы слотов, которые можно применять в svButtonLeft, svButtonRight
#define SV_SLOT_MAX            64 //Максимальное количество слотов для скриптов
#define SV_SLOT_STOP           65 //Остановить текущий скрипт
#define SV_SLOT_RESTART_RUN    66 //Перезапустить текущий скрипт и сразу стартовать
#define SV_SLOT_RESTART_PAUSE  67 //Перезапустить текущий скрипт в режиме паузы
#define SV_SLOT_ZERO_POS       68 //Перейти в нулевую позицию
#define SV_SLOT_RELAX          69 //Расслабить моторы
#define SV_SLOT_INACTIVE       -1 //Нет операции со слотом

//Константы, используемые для переключения движков в специальные состояния
#define SV_MOTOR_PWM_ON        32754 //Константа для переключения движка в ШИМ-режим
#define SV_MOTOR_PWM_OFF       32753 //Константа для отключения в движке ШИМ-режима



//Модель гуманоидного робота для вычисления прямой и обратной кинематики
int svHumoModelDistPelvic       _at_ 3264;  //Расстояние от центра до точки поворота таза
int svHumoModelLengthPelvicHip  _at_ 3265;  //Расстояние от точки поворота таза до поворота бедра вбок
int svHumoModelLengthHipHip     _at_ 3266;  //Расстояние между осями поворота бедра вбок и вперед
int svHumoModelLengthHipKnee    _at_ 3267;  //Длина бедра до колена
int svHumoModelLengthKneeFoot   _at_ 3268;  //Длина голени от колена до поворота стопы вперед
int svHumoModelLengthFootFoot   _at_ 3269;  //Расстояние между осями поворота стопы вбок и вперед
int svHumoModelDistFootFloor    _at_ 3270;  //Расстояние между осью поворота стопы вбок и землей
int svHumoModelFootLength       _at_ 3271;  //Длина стопы
int svHumoModelFootWidth        _at_ 3272;  //Ширина стопы
int svHumoModelFootCenterBack   _at_ 3273; //Расстояние от задника стопы до оси поворота
int svHumoModelFootCenterInner  _at_ 3274; //Расстояние от внутренней части стопы до оси поворота

int svHumoModelAngPelvic        _at_ 3258; //Угол поворота таза
int svHumoModelAngHipSide       _at_ 3260; //Угол поворота бедра вбок
int svHumoModelAngHip           _at_ 3259; //Угол поворота бедра вперед
int svHumoModelAngKnee          _at_ 3261; //Угол поворота колена
int svHumoModelAngFoot          _at_ 3262; //Угол поворота ступни вперед
int svHumoModelAngFootSide      _at_ 3263; //Угол поворота ступни вбок



//Система вычисления обратной кинематики по методу Азера
float svIkA5   _at_ 3275;  // мм расстояние от оси симметрии до оси сервы 5
float svIkB5   _at_ 3276;  // мм расстояние от оси сервы 5 до оси сервы 6 по горизонтали
float svIkC5   _at_ 3277;  // мм расстояние от оси сервы 6 до нуля Z по вертикали
float svIkA6   _at_ 3278;  // мм расстояние от оси сервы 6 до оси сервы 7
float svIkA7   _at_ 3279;  // мм расстояние от оси сервы 7 до оси сервы 8
float svIkA8   _at_ 3280;  // мм расстояние от оси сервы 8 до оси сервы 9
float svIkA9   _at_ 3281;  // мм расстояние от оси сервы 9 до оси сервы 10
float svIkA10  _at_ 3282;  // мм расстояние от оси сервы 10 до центра стопы по горизонтали
float svIkB10  _at_ 3283;  // мм расстояние от оси сервы 10 до низа стопы
float svIkC10  _at_ 3284; // мм расстояние от оси сервы 6 до оси сервы 10 по горизонтали

//Лимиты вращения двигателей в радианах
float svIkLimA5min  _at_ 3285;
float svIkLimA5max  _at_ 3286;
float svIkLimA6min  _at_ 3287;
float svIkLimA6max  _at_ 3288;
float svIkLimA7min  _at_ 3289;
float svIkLimA7max  _at_ 3290;
float svIkLimA8min  _at_ 3291;
float svIkLimA8max  _at_ 3292;
float svIkLimA9min  _at_ 3293;
float svIkLimA9max  _at_ 3294;
float svIkLimA10min _at_ 3295;
float svIkLimA10max _at_ 3296;

int svIkOutPresent  _at_ 3297; //Флаг наличия результатов вычисления, 0 - когда нету решения

int svIkEncA5       _at_ 3298; //Угол поворота таза
int svIkEncA6       _at_ 3299; //Угол поворота бедра вбок
int svIkEncA7       _at_ 3300; //Угол поворота бедра вперед
int svIkEncA8       _at_ 3301; //Угол поворота колена
int svIkEncA9       _at_ 3302; //Угол поворота ступни вперед
int svIkEncA10      _at_ 3303; //Угол поворота ступни вбок


//Ссылки для прямого доступа к двигателям
// motorTarget   - целевой угол двигателя или ШИМ в зависимости от режима двигателя
// motorCurrent  - текущий фактический угол поворота выходного вала двигателя
// motorPwm      - текущий ШИМ, подаваемый на двигатель
// motorVelo     - текущая скорость двигателя
// motorFlags    - текущие флаги двигателя
// motorAddonMix - добавочная величина, которая добавляется при к целевому углу двигателя
//где motor - имя двигателя в таблице юнитов
//Правый таз
int rightPelvicTarget _at_ 2610;
int rightPelvicCurrent _at_ 2611;
int rightPelvicPwm _at_ 2612;
int rightPelvicVelo _at_ 2613;
int rightPelvicFlags _at_ 2615;
int rightPelvicAddonMix _at_ 2617;
//Левый таз
int leftPelvicTarget _at_ 2626;
int leftPelvicCurrent _at_ 2627;
int leftPelvicPwm _at_ 2628;
int leftPelvicVelo _at_ 2629;
int leftPelvicFlags _at_ 2631;
int leftPelvicAddonMix _at_ 2633;
//Правое бедро вбок
int rightHipSideTarget _at_ 2642;
int rightHipSideCurrent _at_ 2643;
int rightHipSidePwm _at_ 2644;
int rightHipSideVelo _at_ 2645;
int rightHipSideFlags _at_ 2647;
int rightHipSideAddonMix _at_ 2649;
//Левое бедро вбок
int leftHipSideTarget _at_ 2658;
int leftHipSideCurrent _at_ 2659;
int leftHipSidePwm _at_ 2660;
int leftHipSideVelo _at_ 2661;
int leftHipSideFlags _at_ 2663;
int leftHipSideAddonMix _at_ 2665;
//Правое бедро
int rightHipTarget _at_ 2674;
int rightHipCurrent _at_ 2675;
int rightHipPwm _at_ 2676;
int rightHipVelo _at_ 2677;
int rightHipFlags _at_ 2679;
int rightHipAddonMix _at_ 2681;
//Левое бедро
int leftHipTarget _at_ 2690;
int leftHipCurrent _at_ 2691;
int leftHipPwm _at_ 2692;
int leftHipVelo _at_ 2693;
int leftHipFlags _at_ 2695;
int leftHipAddonMix _at_ 2697;
//Правое колено
int rightKneeTarget _at_ 2706;
int rightKneeCurrent _at_ 2707;
int rightKneePwm _at_ 2708;
int rightKneeVelo _at_ 2709;
int rightKneeFlags _at_ 2711;
int rightKneeAddonMix _at_ 2713;
//Левое колено
int leftKneeTarget _at_ 2722;
int leftKneeCurrent _at_ 2723;
int leftKneePwm _at_ 2724;
int leftKneeVelo _at_ 2725;
int leftKneeFlags _at_ 2727;
int leftKneeAddonMix _at_ 2729;
//Правая стопа вперед
int rightFootFrontTarget _at_ 2738;
int rightFootFrontCurrent _at_ 2739;
int rightFootFrontPwm _at_ 2740;
int rightFootFrontVelo _at_ 2741;
int rightFootFrontFlags _at_ 2743;
int rightFootFrontAddonMix _at_ 2745;
//Левая стопа вперед
int leftFootFrontTarget _at_ 2754;
int leftFootFrontCurrent _at_ 2755;
int leftFootFrontPwm _at_ 2756;
int leftFootFrontVelo _at_ 2757;
int leftFootFrontFlags _at_ 2759;
int leftFootFrontAddonMix _at_ 2761;
//Правая стопа вбок
int rightFootSideTarget _at_ 2770;
int rightFootSideCurrent _at_ 2771;
int rightFootSidePwm _at_ 2772;
int rightFootSideVelo _at_ 2773;
int rightFootSideFlags _at_ 2775;
int rightFootSideAddonMix _at_ 2777;
//Левая стопа вбок
int leftFootSideTarget _at_ 2786;
int leftFootSideCurrent _at_ 2787;
int leftFootSidePwm _at_ 2788;
int leftFootSideVelo _at_ 2789;
int leftFootSideFlags _at_ 2791;
int leftFootSideAddonMix _at_ 2793;
//Правая ключица
int rightClavicleTarget _at_ 2802;
int rightClavicleCurrent _at_ 2803;
int rightClaviclePwm _at_ 2804;
int rightClavicleVelo _at_ 2805;
int rightClavicleFlags _at_ 2807;
int rightClavicleAddonMix _at_ 2809;
//Левая ключица
int leftClavicleTarget _at_ 2818;
int leftClavicleCurrent _at_ 2819;
int leftClaviclePwm _at_ 2820;
int leftClavicleVelo _at_ 2821;
int leftClavicleFlags _at_ 2823;
int leftClavicleAddonMix _at_ 2825;
//Правое плечо
int rightShoulderTarget _at_ 2834;
int rightShoulderCurrent _at_ 2835;
int rightShoulderPwm _at_ 2836;
int rightShoulderVelo _at_ 2837;
int rightShoulderFlags _at_ 2839;
int rightShoulderAddonMix _at_ 2841;
//Левое плечо
int leftShoulderTarget _at_ 2850;
int leftShoulderCurrent _at_ 2851;
int leftShoulderPwm _at_ 2852;
int leftShoulderVelo _at_ 2853;
int leftShoulderFlags _at_ 2855;
int leftShoulderAddonMix _at_ 2857;


//Маски двигателей для групповых операций
#define MASK_RIGHT_PELVIC 1 //Правый таз
#define MASK_LEFT_PELVIC 2 //Левый таз
#define MASK_RIGHT_HIP_SIDE 4 //Правое бедро вбок
#define MASK_LEFT_HIP_SIDE 8 //Левое бедро вбок
#define MASK_RIGHT_HIP 16 //Правое бедро
#define MASK_LEFT_HIP 32 //Левое бедро
#define MASK_RIGHT_KNEE 64 //Правое колено
#define MASK_LEFT_KNEE 128 //Левое колено
#define MASK_RIGHT_FOOT_FRONT 256 //Правая стопа вперед
#define MASK_LEFT_FOOT_FRONT 512 //Левая стопа вперед
#define MASK_RIGHT_FOOT_SIDE 1024 //Правая стопа вбок
#define MASK_LEFT_FOOT_SIDE 2048 //Левая стопа вбок
#define MASK_RIGHT_CLAVICLE 4096 //Правая ключица
#define MASK_LEFT_CLAVICLE 8192 //Левая ключица
#define MASK_RIGHT_SHOULDER 16384 //Правое плечо
#define MASK_LEFT_SHOULDER 32768 //Левое плечо

#define MASK_ALL 65535 //Маска всех доступных моторов



//Индексы двигателей для индивидуальных операций
#define IDX_RIGHT_PELVIC 0 //Правый таз
#define IDX_LEFT_PELVIC 1 //Левый таз
#define IDX_RIGHT_HIP_SIDE 2 //Правое бедро вбок
#define IDX_LEFT_HIP_SIDE 3 //Левое бедро вбок
#define IDX_RIGHT_HIP 4 //Правое бедро
#define IDX_LEFT_HIP 5 //Левое бедро
#define IDX_RIGHT_KNEE 6 //Правое колено
#define IDX_LEFT_KNEE 7 //Левое колено
#define IDX_RIGHT_FOOT_FRONT 8 //Правая стопа вперед
#define IDX_LEFT_FOOT_FRONT 9 //Левая стопа вперед
#define IDX_RIGHT_FOOT_SIDE 10 //Правая стопа вбок
#define IDX_LEFT_FOOT_SIDE 11 //Левая стопа вбок
#define IDX_RIGHT_CLAVICLE 12 //Правая ключица
#define IDX_LEFT_CLAVICLE 13 //Левая ключица
#define IDX_RIGHT_SHOULDER 14 //Правое плечо
#define IDX_LEFT_SHOULDER 15 //Левое плечо



//Ссылки для прямого доступа к датчикам
// gaugeChannel0 - канал 0
// gaugeChannel1 - канал 1
// gaugeChannel2 - канал 2
//где gauge - имя датчика в таблице юнитов

#endif //ROKI4GIBON_H

