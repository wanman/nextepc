#define TRACE_MODULE _gtp_path
#include "core_debug.h"
#include "core_pkbuf.h"
#include "core_net.h"

#include "3gpp_message.h"
#include "gtp_path.h"

status_t mme_gtp_open()
{
    return CORE_OK;
}

status_t mme_gtp_close()
{
    return CORE_OK;
}

status_t mme_s11_send_to_sgw(pkbuf_t *pkbuf)
{
    return CORE_OK;
}