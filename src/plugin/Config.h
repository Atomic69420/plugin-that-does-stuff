#pragma once

namespace aptds {

struct Config {
    int  version                = 1;
    bool doGiveClockOnFirstJoin = true;
    bool enableClockMenu        = true;
};

} // namespace aptds