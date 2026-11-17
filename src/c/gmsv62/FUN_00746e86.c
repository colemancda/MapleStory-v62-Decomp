/* FUN_00746e86 - 0x00746e86 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00746e86(int param_1)

{
  byte bVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar2 = FUN_00455c59(&local_c);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  bVar1 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
  *(uint *)(*(int *)(param_1 + 0xa48) + 0x80) = (uint)(bVar1 < 0xd);
  return;
}


