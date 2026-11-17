/* FUN_004b6aa1 - 0x004b6aa1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b6aa1(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar1 = FUN_0042459a();
  *param_1 = uVar1;
  puVar2 = (undefined4 *)FUN_0045cdbc(&stack0x00000004);
  lstrcpyA((LPSTR)(param_1 + 1),(LPCSTR)*puVar2);
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_0045cdbc(&stack0x00000004);
  lstrcpyA((LPSTR)((int)param_1 + 0x11),(LPCSTR)*puVar2);
  FUN_00414ebb();
  FUN_004245d2((int)param_1 + 0xda,8);
  uVar3 = FUN_0042452b();
  *(uint *)((int)param_1 + 0xe2) = uVar3 & 0xff;
  return;
}


