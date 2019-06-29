const int pinLeds1 = 10;
const int pinLeds2 = 9;
const int pinLeds3 = 8;
const int pinLed4 = 7;//laranja
const int pinBuzzer = 2;
const int buttonPin = 6;
int buttonState;
long ran;
int time = 1000;
int timeB = 1000;
int cnt = 0;

void setup ()
{
  pinMode (pinLeds1, OUTPUT);
  pinMode (pinLeds2, OUTPUT);
  pinMode (pinLeds3, OUTPUT);
  pinMode (pinLed4, OUTPUT);
  pinMode (buttonPin, INPUT);
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void loop()
{
  if(cnt > 10000)
    cnt = 0;
  cnt++;
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    //ran = random(1, 7);
    ran = cnt % 6 + 1;
    Serial.println(ran);
    if (ran == 1) {
      digitalWrite (pinLed4, HIGH);
      tone(pinBuzzer, 1000, 500);
      delay (time);
    }
    if (ran == 2) {
      digitalWrite (pinLeds1, HIGH);
      for (int i = 0; i < 2; i++)
      {
        tone(pinBuzzer, 1125, 500);
        delay (timeB);
      }
      delay (time);
    }
    if (ran == 3) {
      digitalWrite (pinLeds3, HIGH);
      digitalWrite (pinLed4, HIGH);
      for (int i = 0; i < 3; i++)
      {
        tone(pinBuzzer, 1250, 500);
        delay (timeB);
      }
      delay (time);
    }
    if (ran == 4) {
      digitalWrite (pinLeds1, HIGH);
      digitalWrite (pinLeds3, HIGH);
      for (int i = 0; i < 4; i++)
      {
        tone(pinBuzzer, 1333, 500);
        delay (timeB);
      }
      delay (time);
    }
    if (ran == 5) {
      digitalWrite (pinLeds1, HIGH);
      digitalWrite (pinLeds3, HIGH);
      digitalWrite (pinLed4, HIGH);
      for (int i = 0; i < 5; i++)
      {
        tone(pinBuzzer, 1500, 500);
        delay (timeB);
      }
      delay (time);
    }
    if (ran == 6) {
      digitalWrite (pinLeds1, HIGH);
      digitalWrite (pinLeds2, HIGH);
      digitalWrite (pinLeds3, HIGH);
      for (int i = 0; i < 6; i++)
      {
        tone(pinBuzzer, 1667, 500);
        delay (timeB);
      }
      delay (time);
    }
  }
  digitalWrite (pinLeds1, LOW);
  digitalWrite (pinLeds2, LOW);
  digitalWrite (pinLeds3, LOW);
  digitalWrite (pinLed4, LOW);
}
