# ����������� ������ � 2: ����� �������, const, ��������� ���������

## ���� 
�������� ������ ��� ���������� ��'���� �� ������������� ���� ������� �� const-������������.
## 1.����²������� ��������
���������� � `Window` ����� ������� private, public.
����������� ���� `GraphScreen` ������� ������ ����� ������� � ���� �������� ���������� ����� `Window` �� ������������� ������������� ��� �������� ����������� ���'������� ��'����.
`GraphScreen` ������� ������ ���� ����� ����� � �������������� ������� �� ������� ������:
- `SetDataSource()` - ��� ���� ��'����-������� �����.
-  `PrintData()` - ���������� ���������� ��� ��������� ��'��� � ����� ���������.
������� `Screen` ��� ���������� ��������������� ����� ����� ��� ����� � ��������� `Window`. 

## 2.�������� ��������
### 2.1 ������ ���
� ��� �������� �������� ���� ���������� ��� ������ ���:
- ���������� - ����� ��'��� ����� ���� �������� �������, ��� ����������� ���� ������.
- ������������ - ���� ��'���� ������ ��� �����������,�������� �� ���� ������ �� ����� �� ��������� ������� �� �������, ��� ���������� �� ��������� �������� ����� ���, � �� ��������� ��, ��� ���������� �����������. 

### 2.2 �������� �� ��������� �����
�� ��� 2.1 ������ �������� �����


<p align="center">

![�������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov02/screen/classGraph.png)

 ������� 2.1 �������� �����
</p>


### 2.3 ���� ��������
�� ��� 2.2 ������ ��������� �������.

<p align="center">

![��������a �������](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov02/screen/projectStruct.PNG?raw=true)
 ������� 2.2 ��������a �������
</p>

�� ��� 2.3 ������ ����������� �����.


<p align="center">

![����������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov02/screen/classes.PNG)
 ������� 2.3 ����������� �����
</p>

� ���������� ����������� ������ ���������� ����� `Window` �� `Screen`. � `Window` ������ ������������ �������, ������ 2 ������, �� �������� ������ �� ������ ����. ������ ������ ����� `Screen` ������, ��� �������� ������ � `private` �� `public` ������. ������ ����� `GraphScreen` � ����� ������� ������������� �� �������� ��� `Window`.

### 2.4 ������ ��������� ��������
� �������� ��� ��������� ����� �� ����� ��������: 

#### ���� `GraphScreen` ������� ��������� ����� �� ��������� �������������:

```
void GraphScreen::printData(const Window& data) {

	for (int i = 0; i < data.width(); i++)
		cout << "1";

	for (int i = 0; i < data.height(); i++) {
		cout << "\n1";
		for (int j = 1; j < data.width() - 1; j++)
			cout << " ";
		cout << "1";
	}
	cout << "\n";
	for (int i = 0; i < data.width(); i++)
		cout << "1";
	cout << "\n";
}
```


#### ������������ ������ ��������:

```
int main(void) {

	//Constants for  object1 initialization
	const int WINDOW_ID_1 = 1;
	const int X1_1 = 0;
	const int Y1_1 = 0;
	const int X2_1 = 10;
	const int Y2_1 = 5;

	//Constants for  object2 initialization
	const int WINDOW_ID_2 = 1;
	const int X1_2 = 0;
	const int Y1_2 = 0;
	const int X2_2 = 5;
	const int Y2_2 = 7;

	Window win1(WINDOW_ID_1, X1_1, Y1_1, X2_1, Y2_1);

	Window win2(WINDOW_ID_2, X1_2, Y1_2, X2_2, Y2_2);

	cout << "Data from win1:\n";
	Screen view1_1(win1);
	view1_1.viewWindow();

	cout << "Data from win2:\n";
	Screen view1_2(win2);
	view1_2.viewWindow();

	cout << "Graph view of win1:\n";
	GraphScreen view2;
	view2.setDataSource(&win1);
	view2.printData();

	cout << "Graph view of win2::\n";
	view2.printData(win2);

	return 0;
}
```


## 3.���������� ������


��������� ������ �������� �� ��� 3.1.


<p align="center">

![����������� �����](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov02/screen/res1.PNG?raw=true)
 ������� 3.1 ��������� ������
</p>

##��������
� ��������� ����������� ������ ���� ���������� �������� � ������������� ���� ������� �� const ������. ���� ������� ������� ������ � ���� �����������.