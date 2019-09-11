# include  <Adafruit_NeoPixel.h>

# define  PIN    D4
# define  LED_NUM  7

Adafruit_NeoPixel leds = Adafruit_NeoPixel (LED_NUM, PIN, NEO_GRB + NEO_KHZ800);

int velocidad = 200 ;

 configuración nula ()
{
  leds comenzar (); // Esto inicializa la biblioteca NeoPixel.
  De serie. comenzar ( 9600 );
}

 bucle vacío ()
{
  para ( int j = 0 ; j < 5 ; j ++)
  {
    para ( int i = 1 ; i <LED_NUM; i ++)
    {
      leds setPixelColor (i, leds. Color ( 0 , 0 , 10 ));
      leds show ();
      retraso (velocidad);
      leds setPixelColor (i, leds. Color ( 0 , 0 , 0 ));
    }
  }
  De serie. println (velocidad);
  velocidad - = 20 ;
  si (velocidad < 20 )
    velocidad = 200 ;
}
