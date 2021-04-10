#pragma once

#include "ReactPackageProvider.g.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::react_native_windows_file_picker::implementation
{
  struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider>
  {
    ReactPackageProvider() = default;

    void CreatePackage(IReactPackageBuilder const& packageBuilder) noexcept;
  };
}

namespace winrt::react_native_windows_file_picker::factory_implementation
{
  struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider, implementation::ReactPackageProvider> {};
}
