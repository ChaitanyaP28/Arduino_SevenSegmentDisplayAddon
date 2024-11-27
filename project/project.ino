String x;
String y;
int num_array[11][7] =
{{ 0, 1, 1, 1, 1, 1, 1 },
{ 0, 0, 0, 1, 0, 0, 1 },
{ 1, 0, 1, 1, 1, 1, 0 },
{ 1, 0, 1, 1, 0, 1, 1 },
{ 1, 1, 0, 1, 0, 0, 1 },
{ 1, 1, 1, 0, 0, 1, 1 },
{ 1, 1, 1, 0, 1, 1, 1 },
{ 0, 0, 1, 1, 0, 0, 1 },
{ 1, 1, 1, 1, 1, 1, 1 },
{ 1, 1, 1, 1, 0, 1, 1 },
{ 1, 1, 1, 0, 1, 1, 0}};
void Num_Write( const int [11][7] );

void setup()
{
  Serial.begin(115200);
  Serial.setTimeout(1);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  x = Serial.readString();
  if (x!=NULL)
    y=x;
  Num_write(num_array[y.toInt()]);
  delay(1000);
}

void Num_write(int num[])
{
  digitalWrite(6, 0);
  digitalWrite(7, num[6]);
  digitalWrite(8, num[5]);
  digitalWrite(9, num[4]);
  digitalWrite(10, num[3]);
  digitalWrite(11, num[2]);
  digitalWrite(12, num[1]);
  digitalWrite(13, num[0]);
  delay(1000);
}
