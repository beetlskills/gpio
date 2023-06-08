/* 
ESP-EYE GPIO (2 LED and 1 tactile button)
*/
#define FUNC 15 // side tactile button
#define USR0 21 // blue LED
#define USR1 22 // white LED

volatile bool bPressed = false;

void setup()
{
  Serial.begin(115200);
  pinMode(USR0, OUTPUT);
  pinMode(USR1, OUTPUT);
  pinMode(FUNC, INPUT_PULLUP); // must be pulled-up
  attachInterrupt(digitalPinToInterrupt(FUNC), FUNC_ISR, RISING);
}
 
void loop()
{
  // red led, heart beat
  digitalWrite(USR0, HIGH);
  delay(500);
  digitalWrite(USR0, LOW);
  delay(500);  
  // white led, when side tactile switch is pressed
  if (bPressed) {
      Serial.println("Blink USR1");
      digitalWrite(USR1, HIGH);
      delay(500);
      digitalWrite(USR1, LOW);
      delay(500);
      bPressed = false;
  }
}

/* interrupt service routine */
void FUNC_ISR()
{
  Serial.println("Side tactile button press detected");
  bPressed = true;
}