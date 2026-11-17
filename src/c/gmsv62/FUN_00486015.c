/* FUN_00486015 - 0x00486015 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00486015(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)(param_1 + 0x23c);
  _memset(_Dst,0,0x188);
  _memset((void *)(param_1 + 0x3c4),0,8);
  puVar1 = (undefined4 *)(param_1 + 0xa5);
  iVar2 = 0x31;
  do {
    *_Dst = *puVar1;
    puVar1 = puVar1 + 1;
    _Dst = _Dst + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(*(int *)(param_1 + 0x414) + 0x4dc) = 0;
  iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x68) + 4) + 0x20))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x68) + 4) + 0x1c))(1);
  }
  FUN_00486150();
  FUN_0048640a();
  FUN_00486841(0,0);
  FUN_0043f184(param_1 + 0x8c);
  FUN_007c520a();
  return;
}


