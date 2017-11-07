# ����������� ������ � 5: ��������� �����, ����������, ����������

## ���� 
��������� ������������� ��������� ��� ������ ����� �� ������� ������ ����������.
## 1.����²������� ��������

���������� ��� ������� �� ����� ����� �� �������� ��������� ���������� �� ������������ ����� �� ��������� ����� `CFileStorage` ���� �������� �� ����������� ������ � ������ ��������.
�������� � ��� ������� ���� ����������� ����� �� ������� ��� �� ������� ��'����.
� ��������� ������� ������� ����� `CFileStorage` �� ������������� ������� �����������. 
 

## 2.�������� ��������
### 2.1 ������ ���
� ��� �������� �������� ���� ���������� ��� ������ ���:
- ���������� - ����� ��'��� ����� ���� �������� �������, ��� ����������� ���� ������.
- ������������ - ���� ��'���� ������ ��� �����������,�������� �� ���� ������ �� ����� �� ��������� ������� �� �������, ��� ���������� �� ��������� �������� ����� ���, � �� ��������� ��, ��� ���������� �����������. 
- ����������� - ��� �������� �������� ������ ��������� � ���� ������ �������.

### 2.2 �������� �� ��������� �����
�� ��� 2.1 ������ �������� �����


<p align="center">

![�������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov05/screen/classGraph.png)

 ������� 2.1 �������� �����
</p>


### 2.3 ���� ��������
�� ��� 2.2 ������ ��������� �������.

<p align="center">

![��������a �������](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov05/screen/projectStruct.PNG?raw=true)
 ������� 2.2 ��������a �������
</p>

�� ��� 2.3 ������ ����������� �����.


<p align="center">

![����������� �����](https://raw.githubusercontent.com/kit25a/se-cpp/master/pavlov-viacheslav/doc/pavlov05/screen/classes.PNG)
 ������� 2.3 ����������� �����
</p>

� ��� ����������� ����� ����� `Window`, �� ���� ������� `Button` ��������� ��������� `MStorageInterface`. � ��� ������� ���������� ������ `OnStore(std::ostream& aStream)` �� `OnLoad(std::istream& aStream)` ��� ���������� ����� �� �������� ���� ������������ � ����������� ��� �� ����������� � ����. 

### 2.4 ������ ��������� ��������
� �������� ��� ��������� ����� �� ����� ��������: 

#### ���� `Window` ������� ������ � ����:

```
void Window::OnStore(std::ostream& aStream) {
	aStream << toBitsetString();
}
```
�� ������� �� ��������������� � ����������.

#### ���� `Window` ������� �������� � ����������� ���:
```
string Window::toBitsetString() {

	string res;
	res += bitset<32>(this->getWindowId()).to_string();
	res += bitset<32>(this->getX1()).to_string();
	res += bitset<32>(this->getX2()).to_string();
	res += bitset<32>(this->getY1()).to_string();
	res += bitset<32>(this->getY2()).to_string();

	return res;
}

```

#### ���� `Button` ������� �������� � ����������� ���:
```
string Button::toBitsetString() {
	string res = Window::toBitsetString();

	for (unsigned int i = 0; i < this->getLabel().length(); i++) {
		res += bitset<9>(this->getLabel().at(i)).to_string();
	}
	res += " ";
	for (unsigned int i = 0; i < this->getBorderColor().length(); i++) {
		res += bitset<9>(this->getBorderColor().at(i)).to_string();
	}
	res += " ";
	return res;
}

```

#### ���� `Window` ������� ���������� � �����:
```
void Window::OnLoad(std::istream& aStream) {

	bitset<32> input;
	aStream >> input;
	this->windowId = input.to_ulong();
	aStream >> input;
	this->x1 = input.to_ulong();
	aStream >> input;
	this->x2 = input.to_ulong();
	aStream >> input;
	this->y1 = input.to_ulong();
	aStream >> input;
	this->y2 = input.to_ulong();

}

```

#### ���� `Button` ������� ���������� � �����:
```
void Button::OnLoad(std::istream& aStream) {

	Window::OnLoad(aStream);
	string tmpStr;
	bitset<8> input;

	while (aStream.get() != ' ') {
		aStream >> input;
		tmpStr += (char) input.to_ulong();
	}
	this->setLabel(tmpStr);
	tmpStr.clear();

	while (aStream.get() != ' ') {
		aStream >> input;
		tmpStr += (char) input.to_ulong();
	}
	this->setBorderColor(tmpStr);
}

```

#### ������������ ������ ��������:

```
int main() {

	Window test(1, 100, 100, 100, 100);
	CFileStorage *testStorage = CFileStorage::Create(test, "Test.bin");
	testStorage->Store();
	Window test2;
	testStorage = CFileStorage::Create(test2, "Test.bin");
	testStorage->Load();
	cout << test2;

	Button btest(1, 100, 100, 100, 100, "label", "borderColor");
	CFileStorage *testStorageB = CFileStorage::Create(btest, "Test2.bin");
	testStorageB->Store();
	Button btest2;
	testStorageB = CFileStorage::Create(btest2, "Test2.bin");

	testStorageB->Load();
	cout << btest2.toString();
	return 0;
}

```

## 3.���������� ������


��������� ������ �������� �� ��� 3.1.


<p align="center">

![����������� �����](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov05/screen/res1.PNG?raw=true)
 ������� 3.1 ��������� ������
</p>

���� ����� � ����������� ������ �������� �� ��� 3.2.


<p align="center">

![����������� �����](https://github.com/kit25a/se-cpp/blob/master/pavlov-viacheslav/doc/pavlov05/screen/res2.PNG?raw=true)
 ������� 3.2 ���� ����� � ����������� ������
</p>

##��������
 � ��������� ����������� ������ ���� ���������� �������� � ������������� ����������. ���� ������� ��� ������� ����������:
- ��� ��������� ��'���� ������� ������������ ����, � ���������� �������, ��� �������� ����� ����, ���� ��������� �������� � ���� ���� ������� ��'����. 
	г�����: �������� ������� ��� ���������� ������, ��� �������� ��������� ����������� �������, �� ���� �� ������������ ���, ��� �������� � ����.
- ���� �������� �� `nullptr` � �����������, �� ���� �������� �� �������. 
	г�����: ��������� �� `nullptr` ��� �������� ��'����.
- ��� ������ � ���� ������� `OnStore` ������ ����� ������, ��� ����� ����� ��������� ��������� `MStorageInterface` ����� ������ �� �����, �� ������ ��������� ����, ��� ������ ���� �� nullptr.
	г�����: ������� `OnStore` �� �������, ��� ���� ��������� ��� ��'���� � ��������� ���������� ������, �� ���������� � ����� `Store` � ���� ��������� ���� �������.