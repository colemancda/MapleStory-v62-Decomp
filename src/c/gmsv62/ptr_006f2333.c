/* ptr_006f2333 - 0x006f2333 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_006f2333(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_006f2474(param_1,param_2,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_006f237f(param_1,param_2,param_1 + -6,param_2 + -0x80);
    if (iVar1 == 0) {
      FUN_006f2797(param_1,param_2,param_1 + -6,param_2 + -0x80);
    }
  }
  return 1;
}


