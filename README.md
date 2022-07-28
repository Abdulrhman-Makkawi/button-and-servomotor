**Control on Servomotor**


In this mission, I control the servomotor using an if else statement based on the condition of Pushbutton. The state of the Pushbutton is constantly monitored by the Arduino Uno. I used digitalRead() to read the Pushbutton status. When the Pushbutton state changes to high, Arduino instructs the servomotor to rotate 180 degrees. Otherwise, it remains at 0 degrees.

A 10 Kilo Ohm resistor is connected to the Pushbutton in the circuit design. It serves as a pull-up resistor. It is used to verify that a signal has a known condition (here, HIGH). When a switch/Pushbutton is closed, a straight path to Ground is created. When the switch/Pushbutton is opened, a well-defined logic HIGH at signal is produced.
