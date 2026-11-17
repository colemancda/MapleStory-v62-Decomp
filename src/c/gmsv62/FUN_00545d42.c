/* FUN_00545d42 - 0x00545d42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00545d42(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x194);
  if (((*(int *)(param_1 + 0x690) == *(int *)(iVar1 + 0x68)) &&
      (*(int *)(param_1 + 0x694) == *(int *)(iVar1 + 0x6c))) &&
     (*(int *)(param_1 + 0x698) == *(int *)(iVar1 + 0x70))) {
    return 1;
  }
  return 0;
}


