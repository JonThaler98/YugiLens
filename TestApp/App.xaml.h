//
// App.xaml.h
// Declaration of the App class.
//

#pragma once
#include "CardDatabase.h"
#include "App.g.h"

namespace TestApp
{
	/// <summary>
	/// Provides application-specific behavior to supplement the default Application class.
	/// </summary>
	ref class App sealed
	{
	public:
		App();
		virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args) override;

	private:
		void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);

        CardDatabase m_CardDatabase;
	};
}
