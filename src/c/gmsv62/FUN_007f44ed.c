/* FUN_007f44ed - 0x007f44ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_007f44ed(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004029b9();
  param_1[2] = uVar1;
  iVar2 = _rand();
  *param_1 = (undefined1 *)((int)param_1 + iVar2 + -0x3ff8);
  iVar2 = _rand();
  param_1[1] = (int)param_1 + iVar2 + -0x3ff8;
  *(undefined1 *)(param_1[2] + 9) = *(undefined1 *)param_1;
  *(undefined1 *)(param_1[2] + 10) = *(undefined1 *)(param_1 + 1);
  FUN_005d0f1a(param_2);
  return param_1;
}


