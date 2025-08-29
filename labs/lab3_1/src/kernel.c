#include "uart.h"

extern void load_store_test(void);

void kernel_main(void)
{
    load_store_test();

	uart_init();
	uart_send_string("Welcome RISC-V!\r\n");
}
