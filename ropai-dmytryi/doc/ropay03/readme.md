# ������ ��'����. �����������, ����������, �����������, �������� {#mainpage} 
 
## ����

�������� ������ ������ �������� ������� �������� ����� �� ������������� �������� ���������� �� �����������.
 
## 1. ������������ �������� 
 
�������� ���� Mouse �������������� ����������� �� Manipulator � ���������� ����� ������ ����� ����������� ����� -�MouseScreen. 
������� ������� ���� BaseView ��� Screen �� GraphScreen �� �������� ����������� �� ����������� �������� ShowHeader(), ShowContent(),ShowFooter(). ��������� �������� ���������� � ������� ����, ����������� ���������� �������� � ��������� ���������� �������. �������� ���� MouseScreen �� ������� ��������� ���� � �������� ���������� ��� ����� �����. �������� ������ ����������� �� ������� ������������ ������� ����� �������� �� ������� ���� ��� ��'���� Manipulator �� Mouse.

## 2. �������� ��������

### 2.1 ������ ���
� ��� �������� �������� ���� ���������� ��� ������ ���: 
- ��������� � ����� �ᒺ�� ����� ���� �������, ��� ����������� ���� ������.
- �����������
- ������������ - ���� ��'���� ������ ��� �����������,�������� �� ���� ������ �� ����� �� ��������� ������� �� �������, ��� ���������� �� ��������� �������� ����� ���, � �� ��������� ��, ��� ���������� �����������.
 
### 2.2 �������� �� ��������� �����
�� ��� 2.1 ������ �������� �����.


![�������� �����](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay03/%D0%98%D0%B5%D1%80%D0%B0%D1%80%D1%85%D0%B8%D1%8F.jpg)
������� 2.1 � �������� �����

### ���� �������� 
�� ���. 2.2 ������ ��������� �������.

![��������� �������](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay03/%D0%A1%D1%82%D1%80%D1%83%D0%BA%D1%82%D1%83%D1%80%D0%B0.jpg)
������� 2.2 � ��������� �������


�� ���. 2.3 ������ ����������� �����.

![����������� �����](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay03/%D0%9F%D1%80%D0%B7%D0%BD%D0%B0%D1%87%D0%B5%D0%BD%D0%BD%D1%8F.jpg)
������� 2.3 � ����������� �����

���� 2 �����. ���������� Manipulator �� ����������� Screen. ����������(Manipulator) ����� ������� ����������� �����������, ����� ���� ��� �� ������� ������. ³����������(Screen) ��������������� ��� ������ ����� � �ᒺ��� Manipulator � �������. � ������� main() ���������� ������ ��������.

### 2.4 ������ �������� ��������

� �������� ��� ��������� ����� �� ����� ��������: 

#### ���� `BaseView.h` ������� ����������� �� �������� ������:
	
```
protected:

	Manipulator *manip;

	virtual void showHeader() = 0;

	virtual void showContent() = 0;

	virtual void showFooter() = 0;

public:
	BaseView();

	BaseView(Manipulator *manip);

	void Display();

	virtual ~BaseView();
	```

	
	#### ������������ ������ ��������:

	```
int main() {

		const int COUNT_MANIP1 = 5;
			const string TYPE_MANIP1 = "Joystick";
			Manipulator manip1(COUNT_MANIP1, TYPE_MANIP1);

			const int COUNT_MANIP2 = 2;
			const string TYPE_MANIP2 = "Mouse";
			Manipulator manip2(COUNT_MANIP2, TYPE_MANIP2);

			const int COUNT_MANIP3 = 4;
			const string TYPE_MANIP3 = "Mouse";
			const string CONNECTION = "Wireless";
			const string SENSOR_TYPE = "Laser";
			Mouse mouse(COUNT_MANIP3, TYPE_MANIP3, CONNECTION, SENSOR_TYPE);

			cout << "From Screen " << endl;

			cout << "manip1: \n";
			Screen view(&manip1);
			view.Display();

			cout << "manip2: \n";
			Screen view2(&manip2);
			view2.Display();


			GraphScreen gscreen;
			cout << "From Graph Screen \n";
			gscreen.setDataSource(&manip1);
			gscreen.Display();

			MouseScreen mscreen(&mouse);
			cout << "From mouse: \n";
			mscreen.Display();

			return 0;
	
}
```


## 3. ���������� ������
���������� ������ �������� �� ���.3.1

![���������� ������](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay03/%D0%A0%D0%B5%D0%B7%D1%83%D0%BB%D1%8C%D1%82%D0%B0%D1%82%D1%8B.jpg)
������� 3.1 � ���������� ������
## �������� 
������� ������ ������ �������� ������� �������� ����� �� ������������� �������� ���������� �� �����������.
