
#include "keypad.h"
#include "lcd.h"
#include <util/delay.h>

int main ()
{
LCD_init();

	int i=0 , result =0 ;
	DDRC  |= 0xFF;

	int m[3] ;
	while(1)
	{	LCD_clearScreen();
	 LCD_displayStringRowColumn(0,0,"Enter N then #");
	while (   i<3 )
	{

		m[i]= KeyPad_getPressedKey();
		if (m[i] == '#')
		{
			break;
		}
		i++;
_delay_ms(200) ;

	}

	switch ( i )
	{
	case 1 : result= m[0] ; break ;
	case 2 : result= m[0]*10 + m[1] ; break;
	case 3 :  result= m[0]*100 + m[1]*10 + m[2]  ; break;
}
	LCD_clearScreen();
	LCD_displayStringRowColumn(0,0,"Duty Cycle : ");
	 LCD_goToRowColumn(1,0);
	 LCD_intgerToString(result);
	 i=0;
	 _delay_ms(1500) ;

	//return result;
	}

}




