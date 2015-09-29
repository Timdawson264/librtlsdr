#ifndef __RTLSDR_H
#define __RTLSDR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <linux/ioctl.h>
#include <sys/ioctl.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

struct rtlsdr_ctrltransfer {
	uint8_t bRequestType;
	uint8_t bRequest;
	uint16_t wValue;
	uint16_t wIndex;
	uint16_t wLength;
	uint32_t timeout;  /* in milliseconds */
 	void *data;
};

#define RTLSDR_CONTROL          _IOWR('R', 0, struct rtlsdr_ctrltransfer)
#define RTLSDR_RESET            _IO('R', 1)
#define RTLSDR_SETTIMESTAMP    _IOW('R', 2, uint8_t)

#ifdef __cplusplus
}
#endif

#endif /* __RTLSDR_H */
