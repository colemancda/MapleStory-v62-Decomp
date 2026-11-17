/* FUN_005ce810 - 0x005ce810 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_005ce810(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cd670(param_1 + 0x170,*(undefined4 *)(param_1 + 0x178));
  if (iVar1 == 0) {
    iVar1 = FUN_004cd670(param_1 + 0x17c,*(undefined4 *)(param_1 + 0x184));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


