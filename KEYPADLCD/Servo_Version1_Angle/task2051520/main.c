/*
 * task1.c
 *
 *  task2 application
 *
 */

#include"Timer1.h"
#include"servo.h"
#include"keypad.h"
#include"lcd.h"
#include"Servo.h"
uint8 get_enterd_number ();

int main()
{
	    SET_BIT(DDRD,5);
	    LCD_init();
	   	DDRC  |= 0xFF;
	   	LCD_clearScreen();
	   	Servo_init();
	while(1)
	{
		Servo_set_angle(get_enterd_number ());
		_delay_ms(1000);


	}
}

uint8 get_enterd_number ()
{
	uint8 i=0 , result =0 ;
	uint8 m[3] ;
	LCD_displayStringRowColumn(0,0,"type angle then#");
	while (   i<3 )
	{

		m[i]= KeyPad_getPressedKey();
		if (m[i] == '#')
		{
			break;
		}
		 LCD_goToRowColumn(1,i);
		 if(i==0)
			 {
			 LCD_displayString("   ");
			 LCD_goToRowColumn(1,i);
			 }
		 LCD_intgerToString(m[i]);
		i++;
		_delay_ms(200) ;

	}

	switch ( i )
	{
	case 1 : result= m[0] ; break ;
	case 2 : result= m[0]*10 + m[1] ; break;
	case 3 :  result= m[0]*100 + m[1]*10 + m[2]  ; break;
	}
	 if(result>180)
		result=180;
	 LCD_clearScreen();
	 LCD_displayStringRowColumn(0,0,"angle : ");
	 LCD_goToRowColumn(1,0);
	 LCD_intgerToString(result);

	return result;


}
