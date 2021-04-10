#pragma once

#include "winrt/Microsoft.ReactNative.h"

namespace winrt::react_native_windows_file_picker_example::implementation
{
    struct ReactPackageProvider : winrt::implements<ReactPackageProvider, winrt::Microsoft::ReactNative::IReactPackageProvider>
    {
    public: // IReactPackageProvider
        void CreatePackage(winrt::Microsoft::ReactNative::IReactPackageBuilder const &packageBuilder) noexcept;
    };
} // namespace winrt::react_native_windows_file_picker_example::implementation

