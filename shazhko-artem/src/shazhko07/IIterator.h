#pragma once
/**
* @file IIterator.h
* @brief �������� ���������� ������ IIterator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/

namespace Iterator {
	/**
	* ����������� ����� ������� ������ ��������� ����������
	*/
	template<typename item>
	class IIterator abstract {
	public:
		/**
		* ����������
		*/
		virtual ~IIterator() {}
		/**
		* ������� ��������� �� ������ �������
		*/
		virtual void First() = 0;
		/**
		* ������� ��������� �� ��������� �������
		*/
		virtual void Last() = 0;
		/**
		* ������� ��������� �� ��������� �������
		*/
		virtual void Next() = 0;
		/**
		* ������� ��������� �� ���������� �������
		*/
		virtual void Previous() = 0;
		/**
		* ��������� �� ���������� ������
		*/
		virtual bool IsDone() const = 0;
		/**
		* ��������� �������� ��������
		*/
		virtual item CurrentItem() const = 0;
	};
}