/*!****************************************************************************
 *
 * \file Lib_LCD.c
 *
 * \brief File for FreeRTOS LCD implementation
 *
 * \author  
 *
 * \details Contains all functions for two line LCD operation in FreeRTOS
 *			
 *			
 *
 * Modification History:
 * 11/18/2013 - Pulled all Functions in
 * 11/16/2013 - Original File
 *
 ******************************************************************************
 */
 
 
 /* #includes go here */
 
 /*****************************************************************************/
/****************************/
/*Library LCD Initialization*/
/****************************/

/*!****************************************************************************
*
* \fn vLCD_INITIALIZATION(void)
*
* \brief Function to initialize the LDC 
*
* \details Function is called to initialize the LCD into either 
*		   4 bit or 8 bit mode with the following specifications:
*		   DB0 sets blink		  
*		   DB1 sets cursors
*		   DB2 sets display on 
*		   DB3 set to display 2 lines on the LCD
*
* \params[in] none
*
* \returns nothing
*
* Modification History:
*
* 11/17/2013 - Original Function
*
******************************************************************************
*/
void vLCD_INITIALIZATION(void)
{
	/*! Delay 30ms after powering up*/
	/*! Function set*/
	/*! Delay 50us*/
	/*! Set Display on*/
	/*! Delay 50us*/
	/*! Delay 1.53ms*/
	/*! Entry Mode set, increments, no shift*/
}

/*****************************************************************************/
/*************************************/
/*Library LCD Write and Write Command*/
/*************************************/

/*!****************************************************************************
*
* \fn vWRITE_COMMAND_TO_LCD(void)
*
* \brief Function to write commands to the LCD
*
* \details Function is write commands to the LCD using the read/write 
*		   commands and the register select 
*
* \params[in] RS, data
*
* \returns nothing
*
* Modification History:
*
* 11/17/2013 - Original Function
*
******************************************************************************
*/
void vWRITE_COMMAND_TO_LCD(uint8_t RS, uint8_t data)
{
 ////a;lskdur;laiud;lrakjs;lkajs;ldrkja;lsiudr;liuas;ldkur;laskud;rlkua;lskdu;lrkaud;lrkaajsd;lkruajsd;lkrua;lksujdr;lku	
}

/*!****************************************************************************
*
* \fn vLCD_WRITE_STRING(void)
*
* \brief Function to write strings to the LCD
*
* \details Function is used to take in a string of characters and display 
*		   the string to the LCD
*
* \params[in] *str_ptr
*
* \returns nothing
*
* Modification History:
*
* 11/17/2013 - Original Function
*
******************************************************************************
*/
void vLCD_WRITE_STRING(char *str_ptr)
{
	
}

/*****************************************************************************/

/*****************************************************************************/
/*************************/
/*Library Clear Functions*/
/*************************/

/*!****************************************************************************
*
* \fn vLCD_CLEAR(void)
*
* \brief Function to clear the LCD Display
*
* \details Function is called to clear all data displayed on the LCD. Also
*		   returns the cursor to the home location on the top row. The command
*		   used to clear the display takes 1.53ms to run. Proper time needs
*		   allocated to ensure no commands are sent to the display for that time
*	
* \params[in] nothing
*	
* \returns nothing	
*
* Modification History:
*
* 11/17/2013 - Original Function
*
******************************************************************************
*/
void vLCD_CLEAR(void)
{
	/*! Call write command to send 0x01 command (clear) to the controller */
	/*! Delay 1.53 ms to allow for clear command to run */
}

/*!****************************************************************************
*
* \fn vLCD_CLEAR_TOP(void)
*
* \brief Function to clear the top line of the LCD Display
*
* \details Calls the function to set the cursor to the home position of the top
*		   row, write 24 spaces as a string, then return to the home position
*		   of the top row.
*	
* \params[in] nothing
*	
* \returns nothing	
*
* Modification History:
*
* 11/17/2013 - Original Function
*
******************************************************************************
*/
void vLCD_CLEAR_TOP(void)
{
	/*! Call function to set cursor for top row's home position */
	/*! Call function to write string of 24 spaces to clear the top row */
	/*! Call function to set cursor for top row's home position */
}

/*!****************************************************************************
*
* \fn vLCD_CLEAR_BOTTOM(void)
*
* \brief Function to clear the bottom line of the LCD Display
*
* \details Calls the function to set the cursor to the home position of the
*		   bottom row, write 24 spaces as a string, then return to the home 
*		   position of the bottom row.
*	
* \params[in] nothing
*	
* \returns nothing	
*
* Modification History:
*
* 11/17/2013 - Original Function
*
******************************************************************************
*/
void vLCD_CLEAR_BOTTOM(void)
{
	/*! Call function to set cursor for bottom row's home position */
	/*! Call function to write string of 24 spaces to clear the bottom row */
	/*! Call function to set cursor for bottom row's home position */
}

/*!****************************************************************************
*
* \fn vLCD_ON_OFF(void)
*
* \brief Function to toggle LCD on and off
*
* \details Checks the current status of the LCD. If the LCD is on, toggle it
*		   so it's off. If the LCD is off, turn it on. Uses the vLCD_WRITE
*		   command to send instructions to the LCD.
*	
* \params[in] nothing
*	
* \returns nothing	
*
* Modification History:
*
* 11/18/2013 - Original Function
*
******************************************************************************
*/
void vLCD_CLEAR_BOTTOM(void)
{
	/*! If statements to check status of LCD */
	/*! Toggle LCD */
}
/*****************************************************************************/

/*****************************************************************************/
/***************************/
/*Library Length Functions*/
/*************************/

/*!****************************************************************************
 *
 * \fn xGet_Top_Length(void)
 *
 * \brief Function to get the amount of space used on the top line
 *
 * \details Function is called to calculate the amount of characters used
 *			on the top line of the LCD.
 *
 *			This allows for tracking the amount of line space available.
 *			
 * \params[in] 	nothing
 *			
 * \returns nothing			
 *
 * Modification History:
 *
 * 11/17/2013 - Original Function
 *
 ******************************************************************************
 */
void xGet_Top_Length(void)
{
	//find current cursor position on the top line
	//stores that value into a Length variable
}

/*!****************************************************************************
 *
 * \fn xGet_Bottom_Length(void)
 *
 * \brief Function to get the space available on the bottom line of the LCD.
 *
 * \details Function is called to calculate the amount of characters used
 *			on the top line of the LCD.
 *
 *			This allows for tracking the amount of line space available
 *			
 * \params[in] 	nothing
 *			
 * \returns nothing
 *
 * Modification History:
 *
 * 11/17/2013 - Original Function
 *
 ******************************************************************************
 */
void xGet_Bottom_Length(void)
{
	//find current cursor position on the bottom line
	//stores that value into a Length variable
}

/*!****************************************************************************
 *
 * \fn xGet_String_Length(void)
 *
 * \brief Function to get the length of a string
 *
 * \details Function is called to calculate the amount of characters in a string and return the value.
 *		
 *			This allows for checking string length with available line space before printing.
 *			
 * \params[in] string check - number to find the length of
 *			
 * \returns length			
 *
 * Modification History:
 *
 * 11/15/2013 - Original Function
 *
 ******************************************************************************
 */
uint8_t xGet_String_Length(check)
{
	//calculate length of string
	//return value
}

/*****************************************************************************/

/*****************************************************************************/
/************************/
/*Library Home Functions*/
/************************/

/*!****************************************************************************
 *
 * \fn vLCD_GO_TO_Position(uint8_t, uint8_t)
 *
 * \brief Function to directly control LCD cursor Position
 *
 * \details Function is called to move the LCD cursor to a specific location 
 *				on the LCD.
 *
 *			Allows for direct control of where data can be written, rather
 *				than only from the beginning of a line
 *			
 * \params[in] 	Character, Row 	
 *			
 * \returns nothing			
 *
 * Modification History:
 *
 * 11/15/2013 - Original Function
 *
 ******************************************************************************
 */
void vLCD_GO_TO_POSITION(uint8_t x, uint8_t y)
{
	//save the current position
	
	// For each line o the LCD
	switch(y)
	{
		case 0: 
			//for the top line, set the DDRAM address 
			//move a certain number of characters to the right
		break;
		
		case 1: 
			//for the bottom line, set the DDRAM address 
			//move a certain number of characters to the right
		break;
		
		default: 
			//default to the top left of the LCD if nothing is specified
	}
	
	// send a command to set the data address
	
}

/*!****************************************************************************
 *
 * \fn vLCD_HOME_TOP_LINE(void)
 *
 * \brief Function to return to home position on the top line of the LCD
 *
 * \details Function is called to return the cursor to the first position
 *				on the top line of the LCD.
 *			
 *			This allows for the the top line to be ready to write 
 *				independently from the bottom line.
 *			
 * \params[in] none		
 *			
 * \returns nothing			
 *
 * Modification History:
 *
 * 11/15/2013 - Original Function
 *
 ******************************************************************************
 */
void vLCD_HOME_TOP_LINE(void)
{
	//move cursor to the top left position of the LCD
}

/*!****************************************************************************
 *
 * \fn vLCD_HOME_BOTTOM_LINE(void)
 *
 * \brief Function to return to home position on the bottom line of the LCD
 *
 * \details Function is called to return the cursor to the first position
 *				on the bottom line of the LCD.
 *			
 *			This allows for the the bottom line to be ready to write 
 *				independently from the top line.
 *			
 * \params[in] none		
 *			
 * \returns nothing			
 *
 * Modification History:
 *
 * 11/15/2013 - Original Function
 *
 ******************************************************************************
 */
void vLCD_HOME_BOTTOM_LINE(void)
{
	//move the cursor to the bottom left position on the LCD
}

/*****************************************************************************/
 
 
