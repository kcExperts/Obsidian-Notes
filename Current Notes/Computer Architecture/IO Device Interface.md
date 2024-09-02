>[!def|*] IO Device Interface
>An IO device interface is a circuit between a device and the interconnection network. This allows for easy data transfer and exchange of information. It includes:
> - Data Register
> - Status Register
> - Control Register (Not the focus of this course)

>[!def|*]- Data Register
>Contains or holds information depending on the type of device. As an example, a keyboard would hold the current key being pressed.

>[!def|*]- Status Register
>The status register contains a single `status flag`. With a bit of code, this allows the computer to know if the device is “ready” to transfer or receive information. However, this flag needs to be checked continuously.
>
>For now, we will check it using the (very inefficient) method of polling.

>[!def|*]- Polling
>Polling consists of the act of repeatedly looping to check something. In this case, we are checking the status register continuously. Unfortunately, this approach means that we cannot do other actions in the meantime. Hence our program halts until the status register returns a “ready” state. 

See [[Program-Controlled IO]].


