// C++ code
//
int potencia = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  potencia = map(analogRead(A0), 0, 1023, 1, 7);
  Serial.println(potencia);
  if (potencia == 1) {
    analogWrite(3, 255);
    analogWrite(5, 0);
    analogWrite(6, 0);
  }
  if (potencia == 2) {
    analogWrite(3, 255);
    analogWrite(5, 0);
    analogWrite(6, 132);
  }
  if (potencia == 3) {
    analogWrite(3, 148);
    analogWrite(5, 0);
    analogWrite(6, 211);
  }
  if (potencia == 4) {
    analogWrite(3, 5);
    analogWrite(5, 79);
    analogWrite(6, 119);
  }
  if (potencia == 5) {
    analogWrite(3, 0);
    analogWrite(5, 128);
    analogWrite(6, 0);
  }
  if (potencia == 6) {
    analogWrite(3, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
  }
  if (potencia == 7) {
    analogWrite(3, 0);
    analogWrite(5, 255);
    analogWrite(6, 0);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
