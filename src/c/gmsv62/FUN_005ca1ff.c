/* FUN_005ca1ff - 0x005ca1ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_005ca1ff(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00413367(*(int *)(param_1 + 0x15c) + 0x40,
                       *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x48));
  return iVar1 == 0;
}


