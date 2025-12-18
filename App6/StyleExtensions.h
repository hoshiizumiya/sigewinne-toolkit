#pragma once
#include "StyleExtensions.g.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

namespace winrt::App6::implementation
{
    struct StyleExtensions : StyleExtensionsT<StyleExtensions>
    {
        StyleExtensions() = default;

        static DependencyProperty ResourcesProperty();

        static Microsoft::UI::Xaml::ResourceDictionary GetResources(Microsoft::UI::Xaml::Style const& obj);
        static void SetResources(Microsoft::UI::Xaml::Style const& obj, Microsoft::UI::Xaml::ResourceDictionary const& value);

       
    private:
        struct StyleExtensionResourceDictionary : Microsoft::UI::Xaml::ResourceDictionary
        {

        };
        static DependencyProperty s_ResourcesProperty;

    };
}

namespace winrt::App6::factory_implementation
{
    struct StyleExtensions : StyleExtensionsT<StyleExtensions, implementation::StyleExtensions>
	{
	};
}
