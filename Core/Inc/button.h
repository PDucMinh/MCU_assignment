#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button1_flag, button2_flag, button3_flag, button4_flag;

void SubKeyProcess1();
void SubKeyProcess2();
void SubKeyProcess3();
void SubKeyProcess4();
int Button1_Is_Pressed();
int Button2_Is_Pressed();
int Button3_Is_Pressed();
int Button4_Is_Pressed();
void GetKeyInput1();
void GetKeyInput2();
void GetKeyInput3();
void GetKeyInput4();