#pragma once

#include "SettingsCard.g.h"
#include <microsoft.ui.xaml.window.h>
#include <winrt/Microsoft.UI.Interop.h>
#include <winrt/Microsoft.UI.Windowing.h>
#include <winrt/Windows.UI.Xaml.Interop.h>

namespace winrt::App6::implementation
{
    struct SettingsCard : SettingsCardT<SettingsCard>
    {
        SettingsCard()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        static winrt::Microsoft::UI::Xaml::DependencyProperty HeaderProperty() noexcept
        {
            return s_HeaderProperty;
        }
        auto Header() const noexcept
        {
            return winrt::unbox_value<winrt::hstring>(GetValue(HeaderProperty()));
        }
        void Header(winrt::hstring const& value)
        {
            SetValue(HeaderProperty(), winrt::box_value(value));
        }

        static winrt::Microsoft::UI::Xaml::DependencyProperty DescriptionProperty() noexcept
        {
            return s_DescriptionProperty;
        }
        auto Description() const noexcept
        {
            return winrt::unbox_value<winrt::hstring>(GetValue(DescriptionProperty()));
        }
        void Description(winrt::hstring const& value)
        {
            SetValue(DescriptionProperty(), winrt::box_value(value));
        }

        static winrt::Microsoft::UI::Xaml::DependencyProperty IsOnProperty() noexcept
        {
            return s_IsOnProperty;
        }
        auto IsOn() const noexcept
        {
            return winrt::unbox_value<bool>(GetValue(IsOnProperty()));
        }
        void IsOn(bool const& value)
        {
            SetValue(IsOnProperty(), winrt::box_value(value));
        }

    private:
        static winrt::Microsoft::UI::Xaml::DependencyProperty s_HeaderProperty;
        static winrt::Microsoft::UI::Xaml::DependencyProperty s_DescriptionProperty;
        static winrt::Microsoft::UI::Xaml::DependencyProperty s_IsOnProperty;
    };
}

namespace winrt::App6::factory_implementation
{
    struct SettingsCard : SettingsCardT<SettingsCard, implementation::SettingsCard>
    {
    };
}
