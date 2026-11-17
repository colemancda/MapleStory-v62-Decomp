/* FUN_004d490f - 0x004d490f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d490f(undefined4 param_1)

{
  int iVar1;
  int local_c;
  undefined4 local_8;
  
  local_8 = FUN_0042459a();
  iVar1 = FUN_004371d2(&local_8,&local_c);
  if ((iVar1 != 0) && (local_c != 0)) {
    FUN_004d1a40(param_1);
  }
  return;
}


