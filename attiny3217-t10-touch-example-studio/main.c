#include <atmel_start.h>
#include "led_driver.h"

extern volatile uint8_t measurement_done_touch;

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

#if ENABLE_LED == 1u
	init_led_driver();
	led_reset();
#endif

	/* Replace with your application code */
	while (1) {
		touch_process();

		if (measurement_done_touch == 1u) {
			measurement_done_touch = 0;
#if ENABLE_LED == 1u
			led_decode_and_update();
#endif
		}
	}
}
