/* FUN_004c24cb - 0x004c24cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004c24cb(int param_1)

{
  int iVar1;
  LONG LVar2;
  
  iVar1 = FUN_0045e2eb();
  iVar1 = iVar1 / 1000000;
  if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
    iVar1 = FUN_0045e2eb();
    if (((iVar1 / 10000 != 0xcf) && (iVar1 / 10000 != 0xe9)) &&
       (LVar2 = CompareFileTime((FILETIME *)(param_1 + 0x20),(FILETIME *)&DAT_008ea2a0), -1 < LVar2)
       ) {
      return 0;
    }
  }
  return 1;
}


