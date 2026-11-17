/* FUN_00818c24 - 0x00818c24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_00818c24(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x978) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0042503d();
  return iVar1 == -1;
}


