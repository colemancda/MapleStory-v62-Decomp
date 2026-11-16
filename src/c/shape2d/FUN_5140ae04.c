/* FUN_5140ae04 - 0x5140ae04 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5140ae04(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_51411b18) {
      DAT_51411b18 = DAT_51411b18 + -1;
      goto LAB_5140ae1a;
    }
LAB_5140ae42:
    uVar1 = 0;
  }
  else {
LAB_5140ae1a:
    _DAT_51411b88 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_51411b94 = malloc(0x80);
      if (DAT_51411b94 == (undefined4 *)0x0) goto LAB_5140ae42;
      *DAT_51411b94 = 0;
      DAT_51411b90 = DAT_51411b94;
      initterm(&DAT_51410000,&DAT_5141003c);
      DAT_51411b18 = DAT_51411b18 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_51411b94, puVar2 = DAT_51411b90, DAT_51411b94 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_51411b94;
        }
      }
      free(_Memory);
      DAT_51411b94 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


