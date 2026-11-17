/* FUN_0046a1fc - 0x0046a1fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0046a1fc(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_8;
  
  local_8 = param_1;
  uVar1 = FUN_004029b9(0xc);
  param_1[2] = uVar1;
  iVar2 = _rand();
  *param_1 = (undefined1 *)((int)param_1 + iVar2 + -0x3ff8);
  iVar2 = _rand();
  param_1[1] = (int)param_1 + iVar2 + -0x3ff8;
  *(undefined1 *)(param_1[2] + 5) = *(undefined1 *)param_1;
  *(undefined1 *)(param_1[2] + 6) = *(undefined1 *)(param_1 + 1);
  _memset(&local_8,0,4);
  FUN_0045e3a0(local_8);
  return param_1;
}


