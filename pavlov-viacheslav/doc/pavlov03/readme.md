# ����������� ������ � 3: ����������� �� �����������

## ���� 
�������� ������ ��� ���������� ��'���� �� ������������� ���� ������� �� const-������������.
## 1.����²������� ��������

������ 10. �������� ���� `Button` �������������� ����������� �� ����� `Window`. ������� ������� ���� `BaseScreen` ��� `Screen` �� `GraphScreen` �� �������� `BaseScreen::Desplay()` �� ���������� ����������� ���������, ���� ������������ �� ��: `showHeader()`, `showContent()`, `showFooter()`. �������� ����, ������ ���� ��������� ����������� ��� �ᒺ��� �����-�������. ������ ��������� ���� � �������� ��� �����.
 

## 2.�������� ��������
### 2.1 ������ ���
� ��� �������� �������� ���� ���������� ��� ������ ���:
- ���������� - ����� ��'��� ����� ���� �������� �������, ��� ����������� ���� ������.
- ������������ - ���� ��'���� ������ ��� �����������,�������� �� ���� ������ �� ����� �� ��������� ������� �� �������, ��� ���������� �� ��������� �������� ����� ���, � �� ��������� ��, ��� ���������� �����������. 
- ����������� - ��� �������� �������� ������ ��������� � ���� ������ �������.

### 2.2 �������� �� ��������� �����
�� ��� 2.1 ������ �������� �����


<p align="center">

![�������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov03/screen/classGraph.png)

 ������� 2.1 �������� �����
</p>


### 2.3 ���� ��������
�� ��� 2.2 ������ ��������� �������.

<p align="center">

![��������a �������](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov03/screen/projectStruct.PNG?raw=true)
 ������� 2.2 ��������a �������
</p>

�� ��� 2.3 ������ ����������� �����.


<p align="center">

![����������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov03/screen/classes.PNG)
 ������� 2.3 ����������� �����
</p>

� ��� ����������� ����� ��� ����� `Window` �������� ��������� `Button`, ���� �������� ��������� `Window` ������ ������. ����� ������ �����, `ButtonScreen`, ���� � ���������� `Screen`, ��� ��� ��������� `Screen`, ������� ������� ����� `BaseScreen`, � ����� ������� ������ ��� ��� ���������. 

### 2.4 ������ ��������� ��������
� �������� ��� ��������� ����� �� ����� ��������: 

#### ���� `BaseScreen` ������� ��������� �����:

```
void BaseScreen::Display() {
	showHeader();
	showContent();
	showFooter();
}
```
�� ������ ������� ��� ������� ��������: 

```
	/**
	 * Outputs header of information.
	 */
	virtual void showHeader()=0;
	/**
	 * Outputs main information about window.
	 */
	virtual void showContent()=0;

	/**
	 * Outputs footer of information.
	 */
	virtual void showFooter()=0;
```

#### ������������ ������ ��������:

```
	//Constants for  object1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 11;
	const int Y1_1 = 12;
	const int X2_1 = 13;
	const int Y2_1 = 14;

	//Constants for  object2 initialization
	const int WINDOW_ID_2 = 2;
	const int X1_2 = 21;
	const int Y1_2 = 22;
	const int X2_2 = 23;
	const int Y2_2 = 24;

	//Constants for  object3 initialization
	const int WINDOW_ID_3 = 3;
	const int X1_3 = 31;
	const int Y1_3 = 32;
	const int X2_3 = 33;
	const int Y2_3 = 34;
	const string LABEL_3 = "Label 3";
	const string BORDER_COLOR_3 = "Border color 3";

	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	Window win2(WINDOW_ID_2, X1_2, Y1_2, X2_2, Y2_2);

	Screen view1_1(&win1);
	cout << "Data from win1:\n";
	view1_1.Display();

	Screen view1_2(&win2);
	cout << "Data from win2:\n";
	view1_2.Display();

	GraphScreen view2;
	view2.setDataSource(&win1);
	cout << "Graph view of win1:\n";
	view2.Display();

	cout << "Graph view of win2::\n";
	view2.Display();

	Button btn1(WINDOW_ID_3, X1_3, Y1_3, X2_3, Y2_3, LABEL_3, BORDER_COLOR_3);
	ButtonScreen test(&btn1);
	cout << "Data from btn1:\n";
	test.Display();
```


## 3.���������� ������


��������� ������ �������� �� ��� 3.1.


<p align="center">

![����������� �����](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov03/screen/res1.PNG?raw=true)
 ������� 3.1 ��������� ������
</p>

##��������
� ��������� ����������� ������ ���� ���������� �������� � ������������� ���� ������� �� const ������. ���� ������� ������� ������ � ���� �����������.