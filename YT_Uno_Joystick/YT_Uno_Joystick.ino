/*
 * Wiring :
 *    Jostick Pin     |   Arduino Pin
 * ====================================
 *    GND             |   GND
 *    +5V             |   5V
 *    VRX             |   A0
 *    VRY             |   A1
 *    SW              |   D2
 */

int button_Pin = 2;
int x_Pin = A1; 
int y_Pin = A0; 
 
int x_Position = 0;
int y_Position = 0;
int buttonState = 0;
 
void setup() {
  Serial.begin(115200);
  pinMode(x_Pin, INPUT);
  pinMode(y_Pin, INPUT);
  pinMode(button_Pin, INPUT_PULLUP);
}
 
void loop() {
  x_Position = analogRead(x_Pin);
  y_Position = analogRead(y_Pin);
  buttonState = digitalRead(button_Pin);
   
  Serial.print("X: ");Serial.print(x_Position);
  Serial.print(" | Y: ");Serial.print(y_Position);
  Serial.print(" | Button: ");Serial.println(buttonState);
   
  delay(1000); 
}
