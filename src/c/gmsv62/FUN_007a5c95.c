/* FUN_007a5c95 - 0x007a5c95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_007a5c95(int param_1)

{
  int iVar1;
  
  if (*(int *)((-(uint)(*(int *)(param_1 + 0xd74) != 0) & *(int *)(param_1 + 0xd74) - 0xcU) + 0x110)
      != 0) {
    iVar1 = FUN_00793854();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


