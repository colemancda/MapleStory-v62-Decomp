/* FUN_006dc517 - 0x006dc517 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char __thiscall FUN_006dc517(short *param_1,short *param_2)

{
  void *_Buf1;
  void *_Buf2;
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  size_t sVar5;
  
  if (param_1 == param_2) {
LAB_006dc5f1:
    return '\x01';
  }
  if (*param_1 != *param_2) {
    return '\0';
  }
  switch(*param_1) {
  case 0:
  case 1:
    goto LAB_006dc5f1;
  case 2:
  case 0xb:
    cVar1 = -(param_1[4] != param_2[4]);
    goto LAB_006dc5e2;
  case 3:
  case 9:
  case 10:
  case 0xd:
    iVar3 = *(int *)(param_1 + 4) - *(int *)(param_2 + 4);
    goto LAB_006dc55d;
  case 4:
    bVar4 = *(float *)(param_2 + 4) == *(float *)(param_1 + 4);
    break;
  case 5:
  case 7:
    bVar4 = *(double *)(param_2 + 4) == *(double *)(param_1 + 4);
    break;
  case 6:
    param_2 = param_2 + 4;
    sVar5 = 8;
    param_1 = param_1 + 4;
    goto LAB_006dc5cd;
  case 8:
    _Buf1 = *(void **)(param_1 + 4);
    if (_Buf1 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)_Buf1 + -4);
    }
    _Buf2 = *(void **)(param_2 + 4);
    if (_Buf2 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)_Buf2 + -4);
    }
    if (iVar3 != iVar2) {
      return '\0';
    }
    if (_Buf1 == (void *)0x0) {
      sVar5 = 0;
    }
    else {
      sVar5 = *(size_t *)((int)_Buf1 + -4);
    }
    iVar3 = _memcmp(_Buf1,_Buf2,sVar5);
    bVar4 = iVar3 == 0;
    break;
  default:
    FUN_00878dfb(0x80070057);
    return '\0';
  case 0xe:
    sVar5 = 0x10;
LAB_006dc5cd:
    iVar3 = _memcmp(param_1,param_2,sVar5);
LAB_006dc55d:
    cVar1 = -(iVar3 != 0);
LAB_006dc5e2:
    return cVar1 + '\x01';
  case 0x11:
    cVar1 = -((char)param_1[4] != (char)param_2[4]);
    goto LAB_006dc5e2;
  }
  if (!bVar4) {
    return '\0';
  }
  return '\x01';
}


