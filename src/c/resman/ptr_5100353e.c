/* ptr_5100353e - 0x5100353e in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 ptr_5100353e(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = FUN_510057dd(param_2);
  }
  return uVar1;
}


