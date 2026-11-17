/* FUN_00492e66 - 0x00492e66 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00492e66(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x210);
  if ((((*(int *)(param_1 + 0x724) == *(int *)(iVar1 + 0x500)) &&
       (*(int *)(param_1 + 0x728) == *(int *)(iVar1 + 0x504))) &&
      (*(int *)(param_1 + 0x72c) == *(int *)(iVar1 + 0x508))) && (*(int *)(param_1 + 0x738) == 0)) {
    return 1;
  }
  return 0;
}


