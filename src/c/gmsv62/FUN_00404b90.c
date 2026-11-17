/* FUN_00404b90 - 0x00404b90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_00404b90(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00405565(0);
  *(uint *)(iVar1 + 8) = -(uint)(param_2 != 0) & param_2 - 0x10U;
  *(uint *)(iVar1 + 4) = -(uint)(param_3 != 0) & param_3 - 0x10U;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return -(uint)(iVar1 != 0) & iVar1 + 0x10U;
}


