#pragma once
/**
* @file IDelegateVoid.h
* @brief ����������� ������������ ������ IDelegateVoid
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
namespace Delegate {
	/**
	* ������ ���������
	*/
	class IDelegateVoid
	{
	public:
		/**
		* ����������
		*/
		virtual ~IDelegateVoid() {}
		/**
		* ����� �������
		*/
		virtual void Invoke() = 0;
		/**
		* ��������� ���������
		* @return true - ���� �����
		*/
		virtual bool Compare(IDelegateVoid* pDelegate) = 0;
	};
}