/* FUN_00414edd - 0x00414edd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00414edd(char *param_1,size_t param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (param_1 == (char *)0x0) {
    FUN_00414f29();
  }
  else {
    if (param_2 == 0xffffffff) {
      param_2 = _strlen(param_1);
    }
    sVar2 = param_2;
    uVar1 = FUN_00415015(param_2,0);
    FUN_00879c20(uVar1,param_1,sVar2);
    FUN_004150c0(param_2);
  }
  return;
}


