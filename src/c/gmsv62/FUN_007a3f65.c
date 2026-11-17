/* FUN_007a3f65 - 0x007a3f65 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007a3f65(code *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004c6676(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((((param_1 == (code *)0x111ae9) || (param_1 == (code *)0x12a189)) ||
      (param_1 == (code *)0x142829)) ||
     ((param_1 == (code *)0x4dd5cc || (uVar2 = 2000, param_1 == ptr_004f5c6a)))) {
    uVar2 = 1000;
  }
  return uVar2;
}


