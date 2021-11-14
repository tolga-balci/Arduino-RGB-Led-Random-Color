const int red_pin = 3;
const int grn_pin = 5;
const int blu_pin = 6;
int wait = 2000;
int r;
int g;
int b;

void setup() 
{
  pinMode(red_pin, OUTPUT);
  pinMode(grn_pin, OUTPUT);
  pinMode(blu_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
 r = rand() % 255 + 0;
 g = rand() % 255 + 0;
 b = rand() % 255 + 0;
 showColor(r, g, b);
 Serial.println(String(r) + " " + String(g) + " " + String(b));
 delay(wait);

}


void showColor(byte r, byte g, byte b)
{
  analogWrite(red_pin, r);
  analogWrite(grn_pin, g);
  analogWrite(blu_pin, b);
}
