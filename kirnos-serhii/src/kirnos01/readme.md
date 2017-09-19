# ���� 1: ������ ��'����. �����������, ����������, �����������, ��������

## ����
��������� ���������� ��'����. �������� �������� ��������� ��'���� �� ����� � ����� �������� ��'���� �� ��������.
## 1 ����²������� ��������
�������� ���� ����� People �� ����� ����������� ����� - PeopleViewer. ��'��� ����������� ������������� �� ����� ������� main() ��'����� �����, �� ���������� ��������� �� �����. ���������� People �� ��������. People �� �� ������ ���� �� ������. PeopleViewer ���� ������ ����������� ����� � ���� <����� ����>=<��������>; �� ���� ������ �� �������� ������.

## 2 �������� ��������

### 2.1 ������ ���
� ��� �������� �������� ���� ���������� ��� ������ ���:

* ����������.
* ������������.

### 2.2 �������� �� ��������� �����
�������� ����� �������� �� ���. 2.1

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/kirnos-serhii/doc/screen/Hierarchy.png)

*������� 2.1 � �������� �����*

### 2.3 ���� ��������
��������� ������� �������� �� ���. 2.2.

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/kirnos-serhii/doc/screen/Struct.png)

*������� 2.2 � ��������� �������*

� ������� ���� �������� ��� �����. ����������� ������������� ����� �������� �� ���. 2.3.

![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/kirnos-serhii/doc/screen/Clas.png)

*������� 2.3 � ����������� �����*

### 2.4 ������ ��������� ��������

#### 2.4.1 ������������ ������ (������� main())
	{
		Room r;
		r.SetField1_data1(10.1);
		r.SetField2_data1(20.2);
		r.SetField3_data1(30.3);
		cout << endl;
		Screen view1(r);
		view1.ShowContent();
		cout << "---" << endl;
		{
			Room* r1 = new Room();
			Room r2 = *r1;
			Room r3(*r1);
			delete r1;
		}
		cout << "---" << endl;
	}
	return 0;
	}
#### 2.4.2 ����������� ��������� ��'���� Screen �� ����� Room
	Screen::Screen(Room r) {
		room = new Room(r);
		cout << "Screen(Room)" << endl;
	}
#### 2.4.3 ������� ����� Screen ��� ��������� ���� ����� ���� Room � ShowContent()
	void Screen::ShowContent() {
		cout << "ShowContent()" << endl;
		cout << "field1_data1 = " << *((*room).field1_data1) << endl;
		cout << "field2_data1 = " << *((*room).field2_data1) << endl;
		cout << "field3_data1 = " << *((*room).field3_data1) << endl;
	}

## ���������� ������
  ���������� ������ �������� �� ���. 3.1.
  
![Image alt](https://raw.githubusercontent.com/kit25a/se-cpp/master/kirnos-serhii/doc/screen/Result.png)

*������� 3.1 � ���������� ������*

## ��������
� ��� ��������� ����������� ������ �������� ���������� �ᒺ���, ������� �������� ��������� �ᒺ��� �� ����� � ����� �������� �ᒺ��� �� ��������.