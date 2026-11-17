/* FUN_0048b92c - 0x0048b92c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0048b92c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004029b9(0xc);
  param_1[2] = uVar1;
  iVar2 = _rand();
  *param_1 = (undefined1 *)((int)param_1 + iVar2 + -0x3ff8);
  iVar2 = _rand();
  param_1[1] = (int)param_1 + iVar2 + -0x3ff8;
  *(undefined1 *)(param_1[2] + 5) = *(undefined1 *)param_1;
  *(undefined1 *)(param_1[2] + 6) = *(undefined1 *)(param_1 + 1);
  FUN_0045e3a0(param_2);
  return param_1;
}


