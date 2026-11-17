/* FUN_004b8979 - 0x004b8979 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b8979(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_8;
  
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_0045cdbc(&local_8);
  lstrcpyA((LPSTR)(param_1 + 3),(LPCSTR)*puVar1);
  FUN_00414ebb();
  *(undefined1 *)(param_1 + 6) = 0;
  uVar2 = FUN_0042452b();
  *(uint *)((int)param_1 + 0x19) = uVar2 & 0xff;
  iVar4 = 3;
  do {
    uVar3 = FUN_0042459a();
    *param_1 = uVar3;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


