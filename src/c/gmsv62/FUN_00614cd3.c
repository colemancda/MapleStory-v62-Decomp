/* FUN_00614cd3 - 0x00614cd3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00614cd3(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 400) != 0) {
    iVar1 = FUN_0045e2eb();
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}


