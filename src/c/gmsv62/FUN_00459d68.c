/* FUN_00459d68 - 0x00459d68 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00459d68(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_00413367(param_1,*(undefined4 *)(param_1 + 8));
  if ((iVar2 / 100000 == 0x11) &&
     (bVar1 = FUN_00459da7(param_2), (*(uint *)(param_1 + 0x1a4) & 1 << (bVar1 & 0x1f)) != 0)) {
    return 1;
  }
  return 0;
}


