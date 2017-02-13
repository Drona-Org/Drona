
  #ifndef P_PORBTOPICS_H_
    #define P_PORBTOPICS_H_
    #include "linker.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum Topics
    {
      Topics_heartbeat_topic = 0,
      Topics_attitude_topic = 1,
      Topics_global_position_topic = 2,
      Topics_local_position_topic = 3,
      Topics_battery_status_topic = 4,
      Topics_gps_raw_int_topic = 5,
      Topics_gps_status_topic = 6,
      Topics_command_ack_topic = 7,
      Topics_extended_sys_state_topic = 8,
      Topics_px4status_topic = 9,
      Topics_altitude_reached_topic = 10,
      Topics_geofence_reached_topic = 11,
      Topics_heartbeat_status_topic = 12,
      Topics_battery_critical_topic = 13,
      Topics_gps_health_topic = 14,
      Topics_vehicle_ready_topic = 15,
      Topics_vehicle_armed_topic = 16,
      Topics_vehicle_disarmed_topic = 17,
      Topics_vehicle_landed_topic = 18,
      Topics_vehicle_loitering_topic = 19,
      Topics_vehicle_crashed_topic = 20,
      _Topics_COUNT = 21
    };

    extern PRT_TYPE P_GEND_TYPE_Topics;
    #ifdef __cplusplus
      }
    #endif
  #endif
  