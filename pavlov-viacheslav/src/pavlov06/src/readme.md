# ����������� ������ � 6: ����������

## ���� 
�������� ������ �������� ������� ����������, �� ��� �������� ������.
## 1.����²������� ��������

��������� ����� ��������� `Container` ����� �� ��������� ������ (`WindowVector` - �� ����� �������) � �������� ������� ���� �������������� �������� []. ���� ������� ���������� ���������� �� �������� ������������ �� �����, ��������� �� FileStoreLibrary. 
 

## 2.�������� ��������
### 2.1 ������ ���
� ��� �������� �������� ���� ���������� ��� ������ ���:
- ���������� - ����� ��'��� ����� ���� �������� �������, ��� ����������� ���� ������.
- ������������ - ���� ��'���� ������ ��� �����������,�������� �� ���� ������ �� ����� �� ��������� ������� �� �������, ��� ���������� �� ��������� �������� ����� ���, � �� ��������� ��, ��� ���������� �����������. 
- ����������� - ��� �������� �������� ������ ��������� � ���� ������ �������.

### 2.2 �������� �� ��������� �����
�� ��� 2.1 ������ �������� �����


<p align="center">

![�������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov06/screen/classGraph.png)

 ������� 2.1 �������� �����
</p>


### 2.3 ���� ��������
�� ��� 2.2 ������ ��������� �������.

<p align="center">

![��������a �������](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov06/screen/projectStruct.PNG?raw=true)
 ������� 2.2 ��������a �������
</p>

�� ��� 2.3 ������ ����������� �����.


<p align="center">

![����������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov06/screen/classes.PNG)
 ������� 2.3 ����������� �����
</p>

� ��� ����������� ����� �������� ����� '', ���� �������� �� �����. � ����� ��������� ����� ������� (���������, ���������, ��������� �������� �� ��������, �������), � ����� ������� ��� ���������� �������� ������ � ����.  

### 2.4 ������ ��������� ��������
� �������� ��� ��������� ����� �� ����� ��������: 

#### ���� `WindowVector` ������� ������ � ����:

```
void WindowVector::save(string filename) {
	ofstream fileStream;
	fileStream.open(filename,
			ios_base::out | ios_base::binary | ios_base::trunc);

	for (int i = 0; i < this->vSize; i++) {
		this->get(i)->OnStore(fileStream);
		fileStream << " ";
	}
	fileStream.close();

}

```


#### ���� `WindowVector` ������� ���������� � �����:
```
void WindowVector::load(string filename) {
	ifstream fileStream;
	fileStream.open(filename,
			ios_base::out | ios_base::binary | ios_base::trunc);

	while (fileStream.get()) {
		Window tmp;
		tmp.OnLoad(fileStream);
		this->push(tmp);
	}
	fileStream.close();
}

```

#### ������������ ������ ��������:

```
int main() {

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

	WindowVector vec1;
	vec1.push(win1);
	vec1.push(win2);

	for (int i = 0; i < vec1.size(); i++) {
		cout << vec1[i]->toString() << "\n";
	}

	return 0;
}

```

## 3.���������� ������


��������� ������ �������� �� ��� 3.1.


<p align="center">

![����������� �����](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov06/screen/res1.PNG?raw=true)
 ������� 3.1 ��������� ������
</p>

##��������
 � ��������� ����������� ������ ���� �������� ������� �������� ������� � �������� ������������. 