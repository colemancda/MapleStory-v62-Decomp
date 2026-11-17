/* FUN_005d0bc9 - 0x005d0bc9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_005d0bc9(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_c;
  undefined4 *puStack_8;
  
  local_c = param_1;
  puStack_8 = param_1;
  uVar1 = FUN_004029b9();
  param_1[2] = uVar1;
  iVar2 = _rand();
  *param_1 = (undefined1 *)((int)param_1 + iVar2 + -0x3ff8);
  iVar2 = _rand();
  param_1[1] = (int)param_1 + iVar2 + -0x3ff8;
  *(undefined1 *)(param_1[2] + 9) = *(undefined1 *)param_1;
  *(undefined1 *)(param_1[2] + 10) = *(undefined1 *)(param_1 + 1);
  _memset(&local_c,0,8);
  FUN_005d0f1a(CONCAT44(puStack_8,local_c));
  return param_1;
}


