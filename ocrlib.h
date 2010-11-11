#ifndef OCRLIB_H
#define OCRLIB_H


#include "config.h"

//_common interfaice
#include <assert.h>
#include <ctype.h>
#ifdef WIN32
#include <direct.h>
#include <io.h>
#include <tchar.h>
#include <windows.h>
#include <winreg.h>
#endif
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <wchar.h>
#include <wctype.h>
#include <sys/stat.h>

#include "OCRTypes/OCRTypes.h"
#include "pugixml/pugixml.hpp"
#include "GBitmap/GBitmap.h"
#include "GBitmapInt/GBitmapInt.h"
#include "GBitset/GBitset_.h"
#include "GBitsetMatrix/GBitsetMatrix.h"
#include "GBitsetContour/GBitsetContour.h"
#include "GBitsetOCR/GBitsetOCR.h"
#include "OCRString/php2stl.h"
#include "GImageEditor/GImageEditor.h"
#include "GLogicProcessor/GLogicProcessor.h"
#include "GSocket/GSocket.h"
#include "../libtiff/libtiff.h"


#endif





/**
37 > ��� ���p����� �p��� ���������� � 2 p��� � �����?

��p�����y��� "��������p�"
������ � ��������� � ������ http://bcbdev.com/articles/pch.htm ���y ��
py���� :) �������� ��������� ��� ����y����� ����y������ (�� �������� �
��������� - ���������� ���y� �p������� ���� :)

��� ���p������ �p����� ����������:
1) �������� ����� Project->Option->Compiler->Cache precompiled headers
2) �� ��p������ ����� y�������� � �.1 ��� ������ �p����� ����p���
y���������
   ��� �����  ��� �p������ �p���������p������� ����������.
   ���p���p : out\FrMerc1141.csm
3) � ������ ������� CPP ����� ������ �p���� �������� ��p���:
   #include <vcl.h>
   #include "Pch.H"
   #pragma hdrstop
   �py��� �������� � ������ "hdrstop" , ���� �� ������.
   ������p ���� ������ ������ ������ ����� ������ ��������� � ���� CPP.
4) � ���� "Pch.H" �������� ��� ������p��� ������������ �������������,
   ����p�� ���y� �������������� � �p�����, �� ����������� H ������ �
   ���������. ���� ������ ��� ������p��� BCB �������������, ��� �
   �������y���� ���� H ����� �p����� �p������������.
   �p���p ����� �p������ � �p�������� 1.
5) ��� ��� ��� �� �����: �� ���������� � ���� CPP ����� ������p����
��������������,
   � ������y��� �� �.4
6) �� ����������� � Pch.H ���� ����� (p��p��������� ����) H ������.

������:
�) ���� �p� ���������� ������ ����� ������� ��p�� y����� �� 50,000
   �� ��� ��� �p����� �p����� ����, ��� �� �� ������� �.3 ���� ����� �.
�) �� y������� #include ��p������ �����p�p������� �p���� �������������
   � H ������.
�) �������� *.#0? ������ (��� ? �� 1 � ����) - �p����� ����, ��� �� ��
������� �.3
   ���� ����� �.
�) �� ����������� � Pch.H �������������� � constant variables
   ���p���p: const AnsiString strError = "An Error Occurred!!!!!";
   #defin�  - ��� �� ��������.



�����:
��������� �p��� ��������� �� 13 ������ � ���������� ������ Cache
precompiled headers ��������� BUILD-���� 238 ���. � ��������������
������ ���������� - 116 ���.
�� ����� ������� �p����� (100 ������ � �����), ������������� p������ ��
�p����� ���������
5-10 p�� (�� ��p����������y).


�p�������� 1.

  //---------------------------------------------------------
  // PCH.H: Common header file
  #ifndef PCH_H
  #define PCH_H

  // include every VCL header that we use
  // could include vcl.h instead
  #include <Buttons.hpp>
  #include <Classes.hpp>
  #include <ComCtrls.hpp>
  #include <Controls.hpp>
  #include <ExtCtrls.hpp>
  #include <Forms.hpp>
  #include <Graphics.hpp>
  #include <ToolWin.hpp>

  // include the C RTL headers that we use
  #include <string.h>
  #include <iostream.h>
  #include <fstream.h>
  #include <stdio.h>
  #include <stdarg.h>
  #include <dir.h>

  // include headers for the 3rd party controls
  #ifdef ORA_PRESENT
  #include "Oracle.Hpp"
  #endif
  // Our custom controls

  // Object Repository header files

  // project include files
  // pre-compile these only if PRECOMPILE_ALL is defin
  #endif

 */
