# ���� 3: �����������, �����������.

## ����
�������� ������ �������� ������� �������� ����� �� ������������� �������� ���������� �� �����������.

## 1 ����²������� ��������
�������� ���� Data2, �������������� ����������� �� Data1 �� ���������� ����� ����. ���������� �� ������������ ����� ������� �� ����. 

������� ������� ���� BaseView ��� View1 �� View2 �� �������� BaseView::Display() �� ���������� ����������� ���������, ���� ������������ � ��:

```
protected:
BaseView::showHeader();
BaseView::showContent();
BaseView::showFooter();
```

��������� �������� ���������� ����������� � ������� ����, ����������� ���������� �������� � ��������� ���������� �������. ϳ��� �������� ����������� View1 �� View2 ������� ��������� ���������, �� � ����� �2 �� ��'������ ����� Data1 �� ���������. 

�������� ���� View3, ������ ���� ��������� ����������� ��� ��'���� Data2. ������� ��������� ���� � �������� ��� ����� �����. 

�������� ������ ����������� �� ������� ������������ ������� ����� �������� �� �������� ���� ��� ��'���� Data1 �� ��'���� Data2 �� ������������� View-�����. 

|  �  | ���������� ������� | ����� Data2 | ���� Data2 |
|:---:|:-----|:-----|:------|
|3|3-� ������ ������� ��|ʳ����� � ����������� ������|Field1_data2 = ����� ������(�����) Field2_data2 = ������� ���������� ���� Field3_data2 = ����������� ������|


## 2 �������� ��������

### 2.1 ������ ���
� ��� �������� �������� ���� ����������� ��� ������ ���:

* ����������.
* ������������.
* �����������
* ����������

### 2.2 �������� �� ��������� �����
�������� ����� �������� �� ���. 2.1

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos03/screen/Hierarchy.png)

*������� 2.1 � �������� �����*

### 2.3 ���� ��������
��������� ������� �������� �� ���. 2.2.

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos03/screen/Struct.png)

*������� 2.2 � ��������� �������*

� ������� ���� �������� ��� �����: 
* ���� Room, ���� ������ �������� ������, ������ � ������� ������;
* ����b Screen �� GraphScreen ��� ��������� ���� ��'���� ���� Room. 
����������� ������������� ����� �������� �� ���. 2.3.

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos03/screen/Clas.png)

*������� 2.3 � ����������� �����*

### 2.4 ������ ��������� ��������
������������ ������ (������� main()). ������������ ������� ���������� ����� �������� �� ������� ����. 

```
int main() {
	Room **r = new Room*[4];
	r[0] = new RoomHousing(4,8,8,"k 202", 28, PRACTICAL);
	r[1] = new RoomHousing(4,12,10,"k 313", 25, LABORATORY);
	r[2] = new Room(4,10,10);
	r[3] = new Room(4,8,10);

	BaseView **bw = new BaseView*[4];
	bw[0] = new GraphScreen(*r[0]);
	bw[1] = new Screen(*r[1]);
	bw[2] = new GraphScreen(*r[2]);
	bw[3] = new Screen(*r[3]);

	for(int i = 0; i < 4; i++)
		bw[i]->Display();

	for(int i = 0; i < 4; i++){
		delete r[i];
		delete bw[i];
	}
	delete []r;
	delete []bw;

	getchar();
	return 0;
}
```

�������� ���������� ����:

```
const RoomHousing *temp = dynamic_cast<const RoomHousing*>(room);
	if (temp != NULL) {
		...
	}
```

## ���������� ������
  ���������� ������ �������� �� ���. 3.1.
  
![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos03/screen/Result.png)

*������� 3.1 � ���������� ������*

��������� ��������� ��� ��������� ����� ���������� �� ������� 3.2.

![Image alt](https://github.com/kit25a/se-cpp/blob/master/kirnos-serhii/doc/kirnos03/screen/GTest.png)

*������� 3.2 � ���������� ����������*

## ��������
� ��� ��������� ����������� ������ ���� �������� ������ �������� ������� �������� ����� �� ������������� �������� ���������� �� �����������.