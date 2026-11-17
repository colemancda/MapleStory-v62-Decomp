/* FUN_004da91b - 0x004da91b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_004da91b(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    return *(undefined4 *)(param_1 + 0x738);
  }
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_00455c59(&local_c);
  iVar1 = *(int *)(iVar1 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  uVar2 = FUN_00413367(iVar1 + 0xa5,*(undefined4 *)(iVar1 + 0xad));
  return uVar2;
}


