#include "esp_log.h"
#include "qpc.h"
#include "freertos/FreeRTOS.h"

Q_DEFINE_THIS_FILE

static const char * TAG = "main";

static QSubscrList subscrSto[10];

void app_main(void)
{
    /* Initialzie QP/C Framework */
    QF_init();

    /* initialize publish-subscribe... */
    QF_psInit(subscrSto, Q_DIM(subscrSto));

    ESP_LOGI(TAG, "This is QP test");

    QF_run();
}
