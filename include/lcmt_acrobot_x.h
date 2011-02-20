/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifndef _lcmt_acrobot_x_h
#define _lcmt_acrobot_x_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _lcmt_acrobot_x lcmt_acrobot_x;
struct _lcmt_acrobot_x
{
    int64_t    timestamp;
    double     theta1;
    double     theta1Dot;
    double     theta2;
    double     theta2Dot;
};
 
lcmt_acrobot_x   *lcmt_acrobot_x_copy(const lcmt_acrobot_x *p);
void lcmt_acrobot_x_destroy(lcmt_acrobot_x *p);

typedef struct _lcmt_acrobot_x_subscription_t lcmt_acrobot_x_subscription_t;
typedef void(*lcmt_acrobot_x_handler_t)(const lcm_recv_buf_t *rbuf, 
             const char *channel, const lcmt_acrobot_x *msg, void *user);

int lcmt_acrobot_x_publish(lcm_t *lcm, const char *channel, const lcmt_acrobot_x *p);
lcmt_acrobot_x_subscription_t* lcmt_acrobot_x_subscribe(lcm_t *lcm, const char *channel, lcmt_acrobot_x_handler_t f, void *userdata);
int lcmt_acrobot_x_unsubscribe(lcm_t *lcm, lcmt_acrobot_x_subscription_t* hid);

int  lcmt_acrobot_x_encode(void *buf, int offset, int maxlen, const lcmt_acrobot_x *p);
int  lcmt_acrobot_x_decode(const void *buf, int offset, int maxlen, lcmt_acrobot_x *p);
int  lcmt_acrobot_x_decode_cleanup(lcmt_acrobot_x *p);
int  lcmt_acrobot_x_encoded_size(const lcmt_acrobot_x *p);

// LCM support functions. Users should not call these
int64_t __lcmt_acrobot_x_get_hash(void);
int64_t __lcmt_acrobot_x_hash_recursive(const __lcm_hash_ptr *p);
int     __lcmt_acrobot_x_encode_array(void *buf, int offset, int maxlen, const lcmt_acrobot_x *p, int elements);
int     __lcmt_acrobot_x_decode_array(const void *buf, int offset, int maxlen, lcmt_acrobot_x *p, int elements);
int     __lcmt_acrobot_x_decode_array_cleanup(lcmt_acrobot_x *p, int elements);
int     __lcmt_acrobot_x_encoded_array_size(const lcmt_acrobot_x *p, int elements);
int     __lcmt_acrobot_x_clone_array(const lcmt_acrobot_x *p, lcmt_acrobot_x *q, int elements);

#ifdef __cplusplus
}
#endif

#endif
