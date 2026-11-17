/* FUN_004833ff - 0x004833ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_004833ff(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_00978678 + param_2 * 0x18);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  return param_1;
}


