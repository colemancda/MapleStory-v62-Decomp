/* FUN_004028ac - 0x004028ac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004028ac(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0040298a(0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_00403a72(0);
  *(undefined4 *)(iVar1 + 4) = 1;
  *(uint *)(param_1 + 4) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  return;
}


