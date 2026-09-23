/*
 * Project: Timer Interrupt Based LED Controller
 * Platform: Arduino Uno
 *
 * The LED is controlled using a Timer1 overflow interrupt.
 * No delay() function is used.
 */

const int LED_PIN = 13;

volatile bool ledState = false;

// Timer1 Overflow Interrupt Service Routine
ISR(TIMER1_OVF_vect)
{
  ledState = !ledState;
  digitalWrite(LED_PIN, ledState);

  // Reload Timer1
  TCNT1 = 34286;
}

void setup()
{
  // Set LED pin as output
  pinMode(LED_PIN, OUTPUT);

  // Configure Timer1
  TCCR1A = 0;
  TCCR1B = 0;

  // Initial timer value
  TCNT1 = 34286;

  // Enable Timer1 overflow interrupt
  TIMSK1 |= (1 << TOIE1);

  // Set Timer1 prescaler to 256
  TCCR1B |= (1 << CS12);

  // Enable global interrupts
  sei();
}

void loop()
{
  // LED operation is handled by the Timer1 interrupt.
}
