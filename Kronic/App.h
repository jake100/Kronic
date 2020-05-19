#include "Core.h"
namespace Kronic
{

	class KRONIC_API App
	{
	public:
		App();
		virtual ~App();
		void Run();
	};
	App* CreateApp();
}
