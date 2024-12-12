#include "pico/stdlib.h"

// initialize the GPIO pins
#define GPIO_UP		4
#define GPIO_DOWN	5
#define GPIO_LEFT	6
#define GPIO_RIGHT	7
#define GPIO_A		9
#define GPIO_B		10
#define GPIO_START	11
#define GPIO_SELECT	12
#define GPIO_MENU	2

// Emulator Settings
#define ENABLE_SOUND	0
#define ENABLE_SD	0
#define ENABLE_LCD	0

#if ENABLE_SOUND
#endif

#if ENABLE_SD
#endif

#if ENABLE_LCD
#endif


// A function to inialitze all the GPIO Files
void gpio_setup(void) {
	gpio_init(GPIO_UP);
	gpio_init(GPIO_DOWN);
	gpio_init(GPIO_LEFT);
	gpio_init(GPIO_RIGHT);
	gpio_init(GPIO_A);
	gpio_init(GPIO_B);
	gpio_init(GPIO_START);
	gpio_init(GPIO_SELECT);
	gpio_init(GPIO_MENU);

	gpio_set_dir(GPIO_UP, GPIO_IN);
	gpio_set_dir(GPIO_DOWN, GPIO_IN);
	gpio_set_dir(GPIO_LEFT, GPIO_IN);
	gpio_set_dir(GPIO_RIGHT, GPIO_IN);
	gpio_set_dir(GPIO_A, GPIO_IN);
	gpio_set_dir(GPIO_B, GPIO_IN);
	gpio_set_dir(GPIO_START, GPIO_IN);
	gpio_set_dir(GPIO_SELECT, GPIO_IN);
	gpio_set_dir(GPIO_MENU, GPIO_IN);
}


int main() {

}
