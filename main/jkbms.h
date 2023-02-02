#pragma once

#include <stdint.h>

struct jkbms_0xff_response {
    uint16_t temperature;
    uint32_t voltage_mv;
    uint16_t average_cell_voltage_mv;
    uint8_t calculated_cell_count;
    uint8_t highest_voltage_cell;
    uint8_t lowest_voltage_cell;
    uint8_t balance_and_alarm;
    uint16_t max_voltage_difference_mv;
    uint16_t balance_current_ma;
    uint16_t balance_trigger_voltage_difference_mv;
    uint16_t max_balance_current_ma;
    uint8_t balance_status;
    uint8_t configured_cell_count;
    uint16_t cell_voltage_mv[24];
};

void jkbms_parse_0xff(struct jkbms_0xff_response *data, const uint8_t *buf);