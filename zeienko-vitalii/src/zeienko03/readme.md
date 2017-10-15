# ���� 3: ����������� �� ����������. {#mainpage}

## ����

�������� ������ �������� ������� �������� ����� �� ������������� �������� ���������� �� �����������.


## 1. �������� ��������
	�������� ���� Data2, �������������� ����������� �� Data1 �� ���������� ����� ����. 
	���������� �� ������������ ����� ������� �� ����. <br>
	������� ������� ���� BaseView ��� View1 �� View2 �� �������� BaseView::Display() �� ���������� 
	����������� ���������, ���� ������������ � ��:
	protected:
	BaseView::showHeader();
	BaseView::showContent();
	BaseView::showFooter();
	��������� �������� ���������� ����������� � ������� ����, ����������� ���������� �������� � ��������� ���������� 
	�������. ϳ��� �������� ����������� View1 �� View2 ������ ��������� ���������, �� � ����� �2
	�� ��'������ ����� Data1 �� ���������.
	�������� ���� View3, ������ ���� ��������� ����������� ��� ��'���� Data2.
	������� ��������� ���� � �������� ��� ����� �����. 
	�������� ������ ����������� �� ������� ������������ ������� ����� 
	�������� �� �������� ���� ��� ��'���� Data1 �� ��'���� Data2 �� ������������� View-�����.
	��������� �������: �����
	����� Data2: ����� ����'������
	���� Data2: 
	* ��������� �'�������
	* ��� �������

## 2. �������� �������
### 2.1. ������ ���
� ���������� ������� ���� ���������� ������� ������ ���: <br>
- ������������
- �����������
- ����������
<br>

### 2.2. �������� �� ��������� �����
�� ���. 2.1 �������� �������� �����: BaseView, ManipulatorView, GraphicalView and ComputerManipulatorView.
�� �� ���. 2.2 ��������� ��������  ����� Manipulator �� ComputerManipulator.
<br>

 Hierarchy |
---------- |
![img_HierarchyFormBaseView](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/hierarchy_classBV.png)|
������� 2.1 - �������� �����: BaseView, ManipulatorView, GraphicalView and ComputerManipulatorView|
 <br>

| Hierarchy |
| :-: |
|![img_HierarchyFromManipulator](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/hierarchy_classManipulator.png)|
|������� 2.2 - ��������  ����� Manipulator �� ComputerManipulator|
 <br>

### 2.3. ���� ��������
� ���� ����� ���� ����� ������� �����: ComputerManipulator �� ComputerManipulatorView, � ����� ��� ����� 
����� ���� Utility.h, � ������� ����������� ������� instanceof ��� �������� �����������. 
�� ������� 2.3 �������� ��������� ������������ �������: 
<br><br><br><br><br><br>
<br><br><br><br><br><br>
 Project structure |
---------- |
![img_project_struct](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/project.png)|
 ������� 2.3 - ��������� ������|
<br>
 
### 2.4. ������ ��������� ��������
� ���������� ������� ��� ��������� ����� �� ������������� ���������� ������.
���������� ����� BaseView::display(), � ������� ����������� ������������ ������: showHeader(), showContent(), showFooter() � �������� ����� BaseView, 
�� ��������� ��������� BaseView �� ������� ��'���� ����� �������� ����� � �������� ����������� ���� ���������� ���������� ��� ��'��� ���
������� ���� �������� ��������� BaseView.
���� ����������� ���������������� � �. ��������� ������, ������� 3.1.
�� ������� 2.4 ���������� �������� ������� main().
 Function main() |
---------- |
![img_main](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/main.png)|
������� 2.4. � �������� ������� main() |
<br>

��� ������ ������� ���� ��������� ������� ����� �� ��������� GoogleTest Framework.
ֳ ����� ���������� ���������� �������� ������ ����� Manipulator �� ComputerManipul�tor.
������� ������ �� ��������� ��� ����� ��������� �� ������� 2.5 
<br><br><br><br><br><br>
<br><br><br><br><br><br>
 Unit Test main() function |
---------- |
![img_unittest_main](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/unittest_main.png)|
������� 2.5. � ������� main() GoogleTest Framework|

����������� ������������� ����� �������� �� ���. 2.6.  
 Predestination structure |
---------- |
![img_predestination_of_classes](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/class_description.png)|
������� 2.6. � ����������� ������������� �����|
<br>
## 3. ��������� ������
��������� ������ �������� ���������� �� ������� 3.1.
 Output to the console |
---------- |
![img_result](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/result.png)|
������� 3.1. � ��������� ��������� ��������|

��������� ��������� ��� ��������� ����� ���������� �� ������� 3.2.
����� ������������ �� ������ ����������.

 Unit Tests Result |
---------- |
![img_unitTest_result](https://github.com/kit25a/se-cpp/tree/master/zeienko-vitalii/src/zeienko03/html/screenshot/unitTest.png)|
������� 3.1. � ��������� ����������|


## ��������
� ��� ��������� ����������� ������ ���� ������� ������ �������� ������� �������� ����� �� ������������� �������� ���������� �� �����������.
