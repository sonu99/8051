#include <reg51.h>  
unsigned char ReceiveSerial() {  
 unsigned char c;  
 TMOD = 0x20; /* configure timer for the correct baud rate */      
 TH1 = 0xe6;     /* 1200 bps for 12 MHz clock */  
 TCON = 0x00;    /* Set timer to not running */  
 SCON = 0x50;    /* Set Serial IO to receive and normal mode */ 
 TR1 = 1; /* start timer to Receive */   
 while( (SCON & 0x01) == 0 ) /* wait for receive data */; 
 c = SBUF;  return c; }  
void SendSerial(unsigned char c) {  
        /* initialize..set values for TMOD, TH1 and TCON */
        /* set the Tx interrupt in SCON to indicate sending data */ 
        /* start timer */         /* write character to SBUF */
        /* wait for completion of sent data */ }  
void main(void) {  
 unsigned char c;  
 while( 1 ) {  
           /* Use ReceiveSerial to read in a character 'c' */
           /* Do some computation on 'c' */
           /* Send the result using SendSerial() */
           } 
  } 
