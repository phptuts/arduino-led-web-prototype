void setup()
{
    // put your setup code here, to run once:
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);

    Serial.begin(9600);
    Serial.setTimeout(10);
}

void loop()
{
    // put your main code here, to run repeatedly:
    String word = Serial.readStringUntil(':');

    if (word.length() > 0)
    {
        Serial.println(word);
    }
    if (word == "7-on")
    {
        digitalWrite(7, HIGH);
    }

    if (word == "7-off")
    {
        digitalWrite(7, LOW);
    }

    if (word == "6-off")
    {
        digitalWrite(6, LOW);
    }

    if (word == "6-on")
    {
        digitalWrite(6, HIGH);
    }

    if (word == "5-on")
    {
        digitalWrite(5, HIGH);
    }

    if (word == "5-off")
    {
        digitalWrite(5, LOW);
    }
}