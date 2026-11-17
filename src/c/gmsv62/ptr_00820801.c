/* ptr_00820801 - 0x00820801 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00820801(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_008202bb(param_1,param_2);
  iVar2 = FUN_00820560(param_1,param_2);
  if (iVar2 != 0 || iVar1 != 0) {
    FUN_008161f1(0);
  }
  return 0;
}


