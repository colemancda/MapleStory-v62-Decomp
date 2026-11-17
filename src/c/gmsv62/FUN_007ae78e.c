/* FUN_007ae78e - 0x007ae78e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_007ae78e(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004becbc(500,0);
  if (iVar1 != 0) {
    iVar1 = FUN_00413367(param_1 + 0x2408,*(undefined4 *)(param_1 + 0x2410));
    if (iVar1 != 0) {
      iVar1 = FUN_007ae7e7();
      if ((19999 < iVar1) && (*(int *)(param_1 + 0x2428) == 0)) {
        *(undefined4 *)(param_1 + 0x2428) = 1;
        return 1;
      }
    }
  }
  return 0;
}


