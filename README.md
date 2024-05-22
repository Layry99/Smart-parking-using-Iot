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



![image](https://github.com/Layry99/Smart-parking-using-Iot/assets/161226676/d5ac470e-d912-43ec-95cd-77dbb9b8d395)

Figure 3 : Flow chart of smart parking system

Firstly, the system starts when the program begins, and it gets ready by setting up its parts. After that, it connects to Wi-Fi so it can use the internet for sending and getting information. 
The system then makes the ultrasonic sensors ready on the Arduino board to measure distances. In a loop that keeps going, the system checks if the ultrasonic sensor has been triggered, which means a vehicle is in the parking spot. 


If the sensor doesn't find anything, the loop goes on, waiting for a change in the sensor's status. But if the ultrasonic sensor senses a vehicle, showing that a parking space is taken, the system starts to send out important data, like whether the spot is occupied. This data quickly shows up on the Arduino Cloud platform, so people can see the newest parking information right away. 
The system keeps going in this loop, always watching for changes in the parking status and updating the cloud platform on time.


Result

The Arduino Nano 33 IoT, acting as the central processing unit, demonstrates its efficiency in coordinating the entire system. 
Through the analysis, it becomes evident that the Nano 33 IoT effectively processes data from ultrasonic sensors and controls the LEDs, showcasing its adaptability in managing multiple tasks simultaneously. 
The ultrasonic sensors, responsible for detecting the presence of vehicles in parking spots, contribute crucial data to the analysis. 


By measuring distances, the sensors provide real-time information about parking occupancy. The analysis indicates the reliability of the ultrasonic sensors in accurately determining whether a parking spot is taken or empty, forming a foundation for precise monitoring.
The LEDs, serving as visual indicators, play a significant role in the user interface of the system. 
The data analysis reveals the LEDs' responsiveness to sensor readings, showcasing their effectiveness in conveying parking status information to users. 


The correlation between sensor data and LED behavior underscores the successful integration of visual feedback in the Smart Parking System. The WiFi capabilities of the Arduino Nano 33 IoT, eliminating the need for an additional module, are evident in the data analysis. The system's seamless connection to the internet facilitates communication with IoT platforms, as indicated by the cloud variable "parkingAvailableProperty" shows in figure 4. The analysis emphasizes the importance of this connectivity, enabling real-time monitoring and remote access to parking data through a cloud dashboard.

![image](https://github.com/Layry99/Smart-parking-using-Iot/assets/161226676/daa03b27-ce76-41da-b25e-5722b5cf2e7d)

Figure 4 : Cloud variables



![image](https://github.com/Layry99/Smart-parking-using-Iot/assets/161226676/f3782fac-aad3-48fa-9389-2bb73d4433e0)

Figure 5 : Arduino cloud dashboard

Figure 5 shows our Smart Parking System's Cloud dashboard, linked with Arduino Cloud, showing a simple view of our parking setup. This easy-to-use dashboard has two widget which is the gauge and the chart. They help us see parking info in real-time. The gauge meter, in a big spot, shows how many parking spots are free. It quickly tells us how many cars can still park, which is helpful when lots of cars are coming. The chart is another part that moves as cars park or leave. It shows the number of cars in real-time. This helps us see how busy our car park is at any moment.

Furthermore, the power management aspect emerges as a critical factor in the analysis. The stability of power supply ensures the consistent and reliable operation of all components. The analysis highlights the importance of maintaining proper power levels to prevent issues such as overload or insufficient supply, ensuring the longevity and effectiveness of the Smart Parking System.
