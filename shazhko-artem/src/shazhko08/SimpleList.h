#pragma once
/**
* @file SimpleList.h
* @brief �������� ���������� ������ SimpleList
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ICollection.h"
#include <stdlib.h>

namespace Collection {

	/**
	* ����� ���������, ������� ��������� ��������� ICollection<item>
	*/
	template <typename item>
	class SimpleList : public ICollection<item> {
	protected:
		/**
		* ���������, ��������� ������� ����������� �������� ����� ����� � ������ ���������������� ������
		*/
		struct Node {
			Node(Node *_previous, Node *_next, item _element) :previous(_previous), next(_next), element(_element) {}
			// ��������� �� ��������� �������
			Node * next;
			// ��������� �� ���������� �������
			Node * previous;
			// ���������������� ������
			item element;
		}*top, *bottom;
		// ���������� ��������� � ���������
		int count;

		/**
		* ����� ��������, ��������� �������� ����� ������ ����� ���������
		*/
		class SimpleListIterator : public Iterator::IIterator<item>
		{
		public:
			/**
			* �����������
			* @param _begin ��������� �� ������ ������� ������
			* @param _end ��������� �� ��������� ������� ������
			*/
			SimpleListIterator(Node *_begin, Node *_end);
			/**
			* ����������
			*/
			virtual ~SimpleListIterator();
			/**
			* ������� ��������� �� ������ �������
			*/
			virtual void First();
			/**
			* ������� ��������� �� ��������� �������
			*/
			virtual void Last();
			/**
			* ������� ��������� �� ��������� �������
			*/
			virtual void Next();
			/**
			* ������� ��������� �� ���������� �������
			*/
			virtual void Previous();
			/**
			* ��������� �� ���������� ������
			*/
			virtual bool IsDone() const;
			/**
			* ��������� �������� ��������
			*/
			virtual item CurrentItem()const;
		protected:
			// ��������� �� ������ �������
			Node *begin;
			// ��������� �� ��������� �������
			Node *end;
			// ��������� �� ������� �������
			Node *currentItem;
		};

	public:
		/**
		* �����������
		*/
		SimpleList<item>();
		/**
		* ����������
		*/
		~SimpleList<item>();
		/**
		* �������� ����������
		* @param i ������
		* @return ������, ������� �������� ���������� �������
		*/
		virtual item operator[](int i);
		/**
		* ������� �������� � ��������� �������
		* @param index ������ �� �������� ����� �������� �������
		* @param _element �������, ������� ����� ��������
		*/
		virtual void Insert(const int index, const item&);
		/**
		* ���������� � ����� ���������
		* @param _element �������, ������� ����� ��������
		*/
		virtual void Push(const item&);
		/**
		* ��������� �������� �� ����� ��������� � ��������������� ��������� �� ������
		* @return ������� �� ����� ��������
		*/
		virtual item Pop();
		/**
		* �������� ��������
		* @param _element �������, ������� ����� �������
		* @param ����� ���������� ��������
		*/
		virtual bool Remove(const item&);
		/**
		* �������� ��������
		* @param i ������ ��������, ������� ����� �������
		* @param ����� ���������� ��������
		*/
		virtual void RemoveAt(const int i);
		/**
		* �������� ���� ���������
		*/
		virtual void RemoveAll();
		/**
		* ��������� ���������� ��������� � ���������
		* @return ����������
		*/
		virtual int Count()const;
		/**
		* �������� ��������� ��� ������ ���������
		* @return ��������
		*/
		virtual Iterator::IIterator<item>* CreateIterator()const;
	};
}