int analogPin= 0;
int raw= 0;
int Vin= 5;
float Vout= 0;
float R1= 220;
float R2= 0;
float buffer= 0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
raw= analogRead(analogPin);
if(raw) 
{
buffer= raw * Vin;
Vout= (buffer)/1024.0;
buffer= (Vin/Vout) -1;
R2= R1 * buffer;
//Serial.print("Vout: ");
//Serial.println(Vout);
//Serial.print("R2: ");
//Serial.println(R2);
if (R2>  92  && R2 < 108 ) {Serial.println(" 100  ohm");}
if (R2>  138  && R2 < 162 ) {Serial.println(" 150  ohm");}
if (R2>  203  && R2 < 237 ) {Serial.println(" 220  ohm");}
if (R2>  304  && R2 < 356 ) {Serial.println(" 330  ohm");}
if (R2>  433  && R2 < 507 ) {Serial.println(" 470  ohm");}
if (R2>  626  && R2 < 734 ) {Serial.println(" 680  ohm");}
if (R2>  920  && R2 < 1080 ) {Serial.println("1K");}
if (R2>  1380  && R2 < 1620 ) {Serial.println("1.5K");}
if (R2>  2024  && R2 < 2376 ) {Serial.println("2.2K");}
if (R2>  3036  && R2 < 3564 ) {Serial.println("3.3K");}
if (R2>  4324  && R2 < 5076 ) {Serial.println("4.7Km");}
if (R2>  6256  && R2 < 7344 ) {Serial.println("6.8K");}
delay(100);
}
}

