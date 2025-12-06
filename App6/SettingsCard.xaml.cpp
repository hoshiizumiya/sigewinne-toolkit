#include "pch.h"
#include "SettingsCard.xaml.h"
#if __has_include("SettingsCard.g.cpp")
#include "SettingsCard.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App6::implementation
{
    DependencyProperty SettingsCard::s_HeaderProperty =
        winrt::Microsoft::UI::Xaml::DependencyProperty::Register(
            L"Header",
            winrt::xaml_typename<winrt::hstring>(),
            winrt::xaml_typename<winrt::App6::SettingsCard>(),
            winrt::Microsoft::UI::Xaml::PropertyMetadata{ winrt::box_value(L"Default value") });

    DependencyProperty SettingsCard::s_DescriptionProperty =
        winrt::Microsoft::UI::Xaml::DependencyProperty::Register(
            L"Description",
            winrt::xaml_typename<winrt::hstring>(),
            winrt::xaml_typename<winrt::App6::SettingsCard>(),
            winrt::Microsoft::UI::Xaml::PropertyMetadata{ winrt::box_value(L"Default value") });

    DependencyProperty SettingsCard::s_IsOnProperty =
        winrt::Microsoft::UI::Xaml::DependencyProperty::Register(
            L"IsOn",
            winrt::xaml_typename<winrt::hstring>(),
            winrt::xaml_typename<winrt::App6::SettingsCard>(),
            winrt::Microsoft::UI::Xaml::PropertyMetadata{ winrt::box_value(false) });
}
