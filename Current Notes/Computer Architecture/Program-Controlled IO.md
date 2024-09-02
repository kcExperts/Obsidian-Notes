>[!def|*] Program-Controlled IO
>A program-controlled IO are [[Input and Output]] devices that are controlled by a program instead of the hardware. 

>[!exm|*]- The Keyboard and Display
>Consider a standard keyboard and display. A program that checks for which key was pressed, then storing it in memory until it can transfer it to the display then displayed is an example of a program-controlled IO. But a main problem is to get everything working in unison. Consider:
>![[Pasted image 20240227101119.png]]
>Our program would work by polling the `KIN` status flag. Once it returns a ready state, we will read from `KBD_DATA` and then the hardware automatically sets the `KIN` flag to false. Afterwards, `KBD_DATA` is stored in memory until the `DISP_STATUS` is true. The character is then transferred to `DISP_DATA`.

>[!exm|*]- Wait Loop for Polling I/O Status
>```peusdocode
>READWAIT:
>	LoadByte R4, KBD_STATUS #Compare against 0
>	And  R4, R4, #2  #Where 2 is the binary represenation of 10
>	#The previous line allos us to isolate the bit of interest
>	Branch_if_[R4] = 0  READWAIT  #We verify status flag
>	LoadByte  R5, KBD_DATA  #Read data if status flag ready
>```

