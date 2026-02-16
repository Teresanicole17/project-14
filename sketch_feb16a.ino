// Project 14 – Using long Variables
// Modified to accept two numbers and calculate power

long baseNumber = 0;
long exponentNumber = 0;
long result = 1;
long a = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("Enter base number:");
}

long readNumber()
{
  long number = 0;
  long digit = 0;

  // Wait for user input
  while (Serial.available() == 0)
  {
    // do nothing
  }

  // Read all incoming digits
  while (Serial.available() > 0)
  {
    number = number * 10;
    digit = Serial.read() - '0';
    number = number + digit;
    delay(5);
  }

  return number;
}

void loop()
{
  // Read base number
  baseNumber = readNumber();
  Serial.print("Base entered: ");
  Serial.println(baseNumber);

  Serial.println("Enter exponent:");

  // Read exponent number
  exponentNumber = readNumber();
  Serial.print("Exponent entered: ");
  Serial.println(exponentNumber);

  // Calculate power
  result = 1;
  for (int i = 0; i < exponentNumber; i++)
  {
    result = result * baseNumber;
  }

  Serial.print("Result: ");
  Serial.println(result);

  Serial.println("\nEnter base number again:");

  delay(1000);
}