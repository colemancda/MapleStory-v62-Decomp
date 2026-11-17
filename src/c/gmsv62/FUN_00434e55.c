/* FUN_00434e55 - 0x00434e55 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00434e55(uint *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((-(uint)(*param_1 != 0) & *param_1 - 0x10) + 4);
  *param_1 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  return;
}


