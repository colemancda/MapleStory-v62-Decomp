/* FUN_004194b5 - 0x004194b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004194b5(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_2 + 4);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
    }
    return param_1;
  }
  return 0;
}


