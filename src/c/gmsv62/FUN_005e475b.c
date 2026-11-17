/* FUN_005e475b - 0x005e475b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_005e475b(int param_1,uint param_2,int param_3,int param_4,short *param_5,undefined2 param_6,
            undefined2 param_7,int param_8,int param_9,byte param_10,int param_11)

{
  short sVar1;
  byte *_Dst;
  short sVar2;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_11;
  if (param_3 == 0) {
    if (param_5 == (short *)0x0) {
      sVar2 = 0;
    }
    else {
      sVar2 = -*param_5;
    }
  }
  else {
    sVar2 = (short)*(undefined4 *)(param_3 + 0x48);
  }
  if (param_4 == 0) {
    param_5._0_2_ = 0;
  }
  else {
    param_5._0_2_ = (short)*(undefined4 *)(param_4 + 0x48);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    _Dst = (byte *)0x0;
  }
  else {
    _Dst = *(byte **)(param_1 + 0x20);
  }
  if (((param_2 != 0) && (param_2 != 0x11)) && (param_2 != 0xf)) {
    if (((_Dst == (byte *)0x0) || (*(short *)(_Dst + 0x10) != 0)) || (*_Dst != 0)) {
      _Dst = (byte *)FUN_005e5129();
      _memset(_Dst,0,0x14);
    }
    goto LAB_005e4895;
  }
  if (_Dst == (byte *)0x0) {
LAB_005e4874:
    _Dst = (byte *)FUN_005e5129();
    _memset(_Dst,0,0x14);
  }
  else if ((((*_Dst == param_2) && (*(short *)(_Dst + 0xc) == sVar2)) &&
           (((*(short *)(_Dst + 0xe) == (short)param_5 && (_Dst[10] == param_10)) &&
            ((sVar1 = *(short *)(_Dst + 8), -1 < sVar1 || (param_9 < 1)))))) &&
          ((sVar1 < 1 || (-1 < param_9)))) {
    if (sVar1 != 0) {
      if (param_9 != 0) {
        if (sVar1 == 0) goto LAB_005e4839;
        goto LAB_005e483e;
      }
      goto LAB_005e486a;
    }
LAB_005e4839:
    if (param_9 != 0) goto LAB_005e486a;
LAB_005e483e:
    sVar1 = *(short *)(_Dst + 6);
    if (((sVar1 < 0) && (0 < param_8)) || ((0 < sVar1 && (param_8 < 0)))) goto LAB_005e486a;
    if (sVar1 == 0) {
LAB_005e4865:
      if (param_8 != 0) goto LAB_005e486a;
    }
    else {
      if (param_8 == 0) goto LAB_005e486a;
      if (sVar1 == 0) goto LAB_005e4865;
    }
  }
  else {
LAB_005e486a:
    if ((*(short *)(_Dst + 0x10) != 0) || (*_Dst != 0)) goto LAB_005e4874;
  }
  *(short *)(_Dst + 0x10) = *(short *)(_Dst + 0x10) + (short)param_11;
LAB_005e4895:
  *_Dst = (byte)param_2;
  *(short *)(_Dst + 0xe) = (short)param_5;
  *(undefined2 *)(_Dst + 2) = param_6;
  *(undefined2 *)(_Dst + 4) = param_7;
  *(undefined2 *)(_Dst + 6) = (undefined2)param_8;
  *(undefined2 *)(_Dst + 8) = (undefined2)param_9;
  *(short *)(_Dst + 0xc) = sVar2;
  _Dst[10] = param_10;
  return;
}


