/* FUN_0086ac30 - 0x0086ac30 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0086ac30(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = FUN_00875080(&DAT_0096d7b0,*(undefined4 *)(param_1 + 0x10));
    FUN_0086cff0(param_1 + 0x24,uVar1);
    return *(undefined4 *)(param_1 + 0x10);
  }
  uVar1 = FUN_00875080(&DAT_0096d794);
  FUN_0086cff0(param_1 + 0x24,uVar1);
  return *(undefined4 *)(param_1 + 0x10);
}


