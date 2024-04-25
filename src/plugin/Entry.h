#pragma once

#include <ll/api/plugin/NativePlugin.h>

namespace aptds {

[[nodiscard]] auto getSelfPluginInstance() -> ll::plugin::NativePlugin&;

} // namespace aptds