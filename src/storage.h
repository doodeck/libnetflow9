#ifndef STORAGE_H
#define STORAGE_H

#include <netflow9.h>
#include <stdexcept>
#include "types.h"

struct out_of_memory_error : public std::runtime_error
{
    using std::runtime_error::runtime_error;
};

bool save_template(data_template& tmpl, stream_id& sid, nf9_state& state,
                   nf9_parse_result& result);

bool save_option(nf9_state& state, device_id& dev_id, device_options& dev_opts);

#endif
