#pragma once

namespace Delegate {

	class IDelegateVoid
	{
	public:
		virtual ~IDelegateVoid() {}
		virtual void Invoke() = 0;
		virtual bool Compare(IDelegateVoid* pDelegate) = 0;
	};
}