# ����������� ������ � 2: ����� �������, const, ��������� ���������
 
## ����
 
�������� ������ ��� ���������� ��'���� �� ������������� ���� ������� �� const-������������.
 
## 1. ������������ �������� 
 
���������� � `Manipulator` ����� ������� private, public.
���������� ���� `GraphScreen` ������� ������ ����� ������� � ���� �������� ���������� ����� `Manipulator` �� ������������� ������������� ��� �������� ����������� ���'������� ��'����.
	`GraphScreen` ������� ������ ���� ����� ����� � �������������� ������� �� ������� ������:
	- `SetDataSource()` - ��� ���� ��'����-������� �����.
	-  `PrintData()` - ���������� ���������� ��� ��������� ��'��� � ����� ���������.
������� `Screen` ��� ���������� ��������������� ����� ����� ��� ����� � ��������� `Manipulator`. 

## 2. �������� ��������

### 2.1 ������ ���
� ��� �������� �������� ���� ���������� ��� ������ ���: 
- ��������� � ����� �ᒺ�� ����� ���� �������, ��� ����������� ���� ������.
- ������������ - ���� ��'���� ������ ��� �����������,�������� �� ���� ������ �� ����� �� ��������� ������� �� �������, ��� ���������� �� ��������� �������� ����� ���, � �� ��������� ��, ��� ���������� �����������. 
 
## 2.2 �������� �� ��������� �����
�� ��� 2.1 ������ �������� �����.

![�������� �����](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay02/Folder1.jpg?raw=true)

������� 2.1 � �������� �����

### 2.3 ���� �������� 
�� ���. 2.2 ������ ��������� �������.

![��������� �������](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay02/Capture2.JPG?raw=true)

������� 2.2 � ��������� �������


�� ���. 2.3 ������ ����������� �����.

![����������� �����](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay02/Capture3.JPG?raw=true)

������� 2.3 � ����������� �����

���� 2 �����. ���������� Manipulator �� ����������� Screen. ����������(Manipulator) ����� ������� ����������� �����������, ����� ���� ��� �� ������� ������. ³����������(Screen) ��������������� ��� ������ ����� � �ᒺ��� Manipulator � �������. � ������� main() ���������� ������ ��������.

### 2.4 ������ �������� ��������

� �������� ��� ��������� ����� �� ����� ��������: 

#### ���� `GraphScreen` ������� ��������� ����� �� ��������� �������������:
	
```
void GraphScreen::printData(const Manipulator& manip){


	cout  << "           /	        \n";
	cout  << "          /	        \n";
	cout  << "         /	        \n";
	cout  << "        /	            \n";
	cout  << "       /           	\n";
	cout  << "       \\	            \n";
	cout  << "        \\	        \n";
	cout  << "         \\	        \n";
	cout  << "          \\	        \n";
	cout  << "       ---------  	\n";
	cout  << "      /   **    \\	\n";
	cout  << "     /    **     \\   \n";
	cout  << "     |    ||      |	\n";
	cout  << "     |    ||      | 	\n";
	cout  << "     |            | 	\n";
	cout  << "     |            | 	\n";
	cout  << "     |            | 	\n";
	cout  << "      \\          / 	\n";
	cout  << "       \\        / 	\n";
	cout  << "        --------	    \n";


	cout << "" << endl;
	cout << "Device type: " << manip.getType() << endl;
	cout << "Number of buttons: " << manip.getCount() << endl;
	cout << "" << endl;
}
	```

	
	#### ������������ ������ ��������:

	```
int main() {

	Manipulator manip1(5, "Joystick");
	Manipulator manip2(2, "Mouse");


	cout << "From Screen" << endl;

	cout << "manip1: " << endl;
	Screen view(manip1);
	view.dataOutput();

	cout << "manip2: " << endl;
	Screen view2(manip2);
	view2.dataOutput();


	GraphScreen gscreen;
	cout << "From Graph Screen" << endl;

	gscreen.setDataSource(&manip1);

	cout << "manip1: " << endl;
	gscreen.printData();

	cout << "manip2: " << endl;
	gscreen.printData(manip2);

	cout << "ʳ������ ������ �� ��� �����? (manip1):" << manip1.isSimple() << endl;
	cout << "ʳ������ ������ ����� ��� ���� 4? (manip1):" << manip1.isGame() << endl;
	cout << "" <<endl;
	cout << "ʳ������ ������ �� ��� �����? (manip2):" << manip2.isSimple() << endl;
	cout << "ʳ������ ������ ����� ��� ���� 4? (manip2):" << manip2.isGame() << endl;

		return 0;
}
```

## 3. ���������� ������
���������� ������ �������� �� ���.3.1

![���������� ������](https://github.com/kit25a/se-cpp/blob/master/ropai-dmytryi/doc/ropay02/Capture4.JPG?raw=true)

������� 3.1 � ���������� ������
## �������� 
� ��������� ����������� ������ ���� ���������� �������� � ������������� ���� ������� �� const ������. ���� ������� ������� ������ � ���� �����������.
