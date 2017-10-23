# ���� 2: ����� �������, ���������, const, ���������

## ����
�������� ������ ��� ���������� ��'���� � ����� �� ������������� ���� ������� �� const-������������.
## 1 ����²������� ��������
���������� � Room ����� ������� private, public. ����������� ���� GraphScreen ������� ������ ����� ������� � ���� �������� ���������� ����� Window �� ������������� ������������� ��� �������� ����������� ���'������� ��'����. GraphScreen ������� ������ ���� ����� ����� � �������������� ������� �� ������� ������:

* SetDataSource() - ��� ���� ��'����-������� �����.
* PrintData() - ���������� ���������� ��� ��������� ��'��� � ����� ���������. ������� Screen ��� ���������� ��������������� ����� ����� ��� ����� � ��������� Window.

## 2 �������� ��������

### 2.1 ������ ���
� ��� �������� �������� ���� ���������� ��� ������ ���:

* ����������.
* ������������.

### 2.2 �������� �� ��������� �����
�������� ����� �������� �� ���. 2.1

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos02/screen/Hierarchy.png)

*������� 2.1 � �������� �����*

### 2.3 ���� ��������
��������� ������� �������� �� ���. 2.2.

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos02/screen/Struct.png)

*������� 2.2 � ��������� �������*

� ������� ���� �������� ��� �����: 
* ���� Room, ���� ������ �������� ������, ������ � ������� ������;
* ����b Screen �� GraphScreen ��� ��������� ���� ��'���� ���� Room. 
����������� ������������� ����� �������� �� ���. 2.3.

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos02/screen/Clas.png)

*������� 2.3 � ����������� �����*

### 2.4 ������ ��������� ��������
������������ ������ (������� main())

```
int main() {
	cout << "Begin." << endl;
	Room r(10, 11, 12);
	GraphScreen gs(r);
	gs.PrintData();
	Room r2(1, 2, 3);
	gs.PrintData(r2);
	cout << "done." << endl;
	system("pause");
	return 0;
} 
```

������� PrintData ����� GraphScreen ��� ��������� ���� ����� ���� Room

```
void GraphScreen::PrintData(const Room& R) const{
	char lh = 201, rh = 187, h = 205, hd = 209, l = 186, r = 186, c = 179, ld =
			200, rd = 188, dh = 207;
	cout << lh;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << hd;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << rh << endl;
	cout << l << setw(10) << left << "height" << c << setw(10) << R.getHeight()
			<< r << endl;
	cout << l << setw(10) << left << "width" << c << setw(10) << R.getWidth()
			<< r << endl;
	cout << l << setw(10) << left << "length" << c << setw(10) << R.getLength()
			<< r << endl;
	cout << ld;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << dh;
	for (int i = 0; i < 10; i++, cout << h)
		;
	cout << rd << endl;
}
```

## ���������� ������
  ���������� ������ �������� �� ���. 3.1.
  
![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos02/screen/Result.png)

*������� 3.1 � ���������� ������*

## ��������
� ��� ��������� ����������� ������ ���� �������� ���� ��� ����������� ����� �� ��������� ������������� �� ������������� ���� ������� �� const-������������ ��� �������� ��'���� � ����.