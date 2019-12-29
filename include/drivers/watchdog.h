/*
 * Copyright © 2017-2019 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#ifndef DRIVERS_WATCHDOG_H
#define DRIVERS_WATCHDOG_H

#include <device.h>
#include <intrusive.h>
#include <stdint.h>

#define WATCHDOG_OPS(dev) \
	(&container_of((dev)->drv, const struct watchdog_driver, drv)->ops)

struct watchdog_driver_ops {
	void (*disable)(const struct device *dev);
	int  (*enable)(const struct device *dev, uint32_t timeout);
	void (*restart)(const struct device *dev);
};

struct watchdog_driver {
	struct driver              drv;
	struct watchdog_driver_ops ops;
};

/**
 * Disable the watchdog.
 *
 * @param dev The watchdog device.
 */
static inline void
watchdog_disable(const struct device *dev)
{
	WATCHDOG_OPS(dev)->disable(dev);
}

/**
 * Enable and restart the watchdog.
 *
 * @param dev     The watchdog device.
 * @param timeout The watchdog timeout in clock cycles.
 */
static inline int
watchdog_enable(const struct device *dev, uint32_t timeout)
{
	return WATCHDOG_OPS(dev)->enable(dev, timeout);
}

/**
 * Restart the watchdog. This must be called before the watchdog times out.
 *
 * @param dev The watchdog device.
 */
static inline void
watchdog_restart(const struct device *dev)
{
	WATCHDOG_OPS(dev)->restart(dev);
}

#endif /* DRIVERS_WATCHDOG_H */
