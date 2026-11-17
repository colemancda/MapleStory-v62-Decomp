/* FUN_00495ba8 - 0x00495ba8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00495ba8(int *param_1)

{
  undefined4 uVar1;
  
  if (((char *)*param_1 != (char *)0x0) && (*(char *)*param_1 != '\0')) {
    uVar1 = FUN_00415015(0,1);
    FUN_0087b9b8(uVar1);
    if (*param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*param_1 + -4);
    }
    FUN_004150c0(uVar1);
  }
  return;
}


