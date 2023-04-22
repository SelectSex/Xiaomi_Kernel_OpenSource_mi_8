#include <linux/mi_io.h>

#define IO_SYSCALL_DEFAULT	300
#define IO_BLK_DEFAULT		300
#define IO_BLK_DRIVER_DEFAULT	50
#define IO_BLK_SUBMIT_BIO_DEFAULT	200
#define IO_JBD2_DEFAULT		290
#define IO_ELV_DEFAULT		260
#define IO_DETAIL_SHOW_DEFAULT		0
#define IO_SHOW_LOG_DEFAULT		1

int show_io_level[level_max] = {
	IO_SYSCALL_DEFAULT,
	IO_BLK_DEFAULT,
	IO_BLK_DRIVER_DEFAULT,
	IO_BLK_SUBMIT_BIO_DEFAULT,
	IO_JBD2_DEFAULT,
	IO_ELV_DEFAULT,
	IO_DETAIL_SHOW_DEFAULT,
	IO_SHOW_LOG_DEFAULT,
};