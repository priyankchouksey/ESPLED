#define CONFIG_MAX_SIZE 4096    /* Sanity limit for config file */

typedef struct {
  String ssid;
  String passphrase;
  String hostname;
  unit8_t ip[4];
  unit8_t netmask[4];
  unit8_t gateway[4];
  bool dhcp;
} config_t;

