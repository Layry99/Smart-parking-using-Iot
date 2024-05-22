# Smart-parking-using-Iot

Overview of this project

A Smart Parking System functions as a helpful assistant for parking, employing specialized sensors to discern whether parking spots are available or occupied. 
These sensors communicate with an intelligent computer, like the Arduino, which in turn connects to a robust cloud-based system using Wi-Fi. 
The cloud system continually updates in real-time, informing individuals about the availability of parking spaces. 
Users can conveniently access this information through a user-friendly app or website on their phones or computers. 
It is comparable to having an intelligent companion guaranteeing a parking experience without the inconvenience of aimlessly circling around. 
This system not only enhances the efficiency of cities and public spaces but also contributes to environmental well-being by minimizing traffic congestion and reducing pollution. 
While there may be initial setup costs and an adjustment period for users, the ultimate result is a significantly simplified parking process.

System Architecture 

![image](https://github.com/Layry99/Smart-parking-using-Iot/assets/161226676/576d785c-ae4e-4c25-b720-d71878c10ff8)

Figure 1 : System architecture of smart parking system

The system uses a Nano 33 IoT connected to a pair of ultrasonic sensors to detect the presence of cars in a parking lot. 
The sensors are mounted on a breadboard and connected to the Nano 33 IoT. Nano 33 IoT is then connected to the Arduino IoT Cloud Platform via Wi-Fi. 
The Arduino IoT Cloud Platform is a web-based service that allows users to monitor and manage their IoT devices. 
In this case, the platform would be used to monitor the parking lot and display the availability of parking spaces.

![image](https://github.com/Layry99/Smart-parking-using-Iot/assets/161226676/7835c10b-1fb4-4ef7-a06e-95092f2e5297)

Figure 2 : Circuit diagram of smart parking system

To set up the ultrasonic sensors for the Smart Parking System, each sensor typically features four pins: VCC, GND, Trig, and Echo. 
Begin by connecting the VCC of each sensor to the 5V output on the Arduino, ensuring a power supply for accurate sensor readings. 
The GND of each sensor should be connected to the Arduino's ground (GND) to establish a common ground reference. 
Next, link the Trig pin of each sensor to the specified Trig pins in the code, denoted as ultrasonic1, ultrasonic2, and ultrasonic3. 
Additionally, connect the Echo pin of each sensor to the corresponding Echo pins as defined in the code, ensuring proper communication between the sensors and the Arduino.
Moving on to the LED connections, each LED should be linked to a digital pin on the Arduino, with specific assignments according to the code, such as pins 2, 3, and 4. 
To complete the LED circuit, connect the other leg of each LED to a current-limiting resistor, typically within the range of 220-330 ohms. 
This resistor serves to control the current flow through the LED, preventing excessive current and safeguarding the LED. 
Finally, connect the other end of the resistor to the GND pin on the Arduino, establishing a complete circuit for each LED.


This setup ensures that the LEDs can be controlled by the Arduino, providing visual indicators based on the status of the Smart Parking System.
Software
Nano 33 to the IoT Cloud

Flowchart

Image

Hardware
Nano 33 IoT

Nano Cloud
