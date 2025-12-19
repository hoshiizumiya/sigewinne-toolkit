#pragma once

#include "MainView.g.h"
#include <winrt/Windows.UI.Xaml.Interop.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

namespace winrt::App6::implementation
{
    struct MainView : MainViewT<MainView>
    {
        MainView()
        {
            DispatcherQueue().TryEnqueue(
                [this]()
                {
                    HeaderText().Text(L"Home");
                    contentFrame().Navigate(
                        winrt::xaml_typename<winrt::App6::HomePage>()
                    );
                });
	        // Xaml objects should not call InitializeComponent during construction.
	        // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }


        void NavView_ItemInvoked(winrt::Microsoft::UI::Xaml::Controls::NavigationView const& sender, winrt::Microsoft::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs const& args);
        
    };
}

namespace winrt::App6::factory_implementation
{
    struct MainView : MainViewT<MainView, implementation::MainView>
    {
    };
}
