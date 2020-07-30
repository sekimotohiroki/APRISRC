#ifndef __GNC_H
#define /* __GNC_H */

extern "C" {
    void gnc_init();
    int gnc_land();
    int gnc_takeoff(float takeoff_alt);
    int gnc_arm();
    void gnc_set_destination(float x, float y, float z, float psi);
    void gnc_set_heading(float heading);
    float gnc_get_current_heading();
    int gnc_check_waypoint_reached(float pos_tolerance, float heading_tolerance);
}

#endif /* __GNC_H */