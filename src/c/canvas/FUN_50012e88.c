/* FUN_50012e88 - 0x50012e88 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_50012e88(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_50086458) {
      DAT_50086458 = DAT_50086458 + -1;
      goto LAB_50012e9e;
    }
LAB_50012ec6:
    uVar1 = 0;
  }
  else {
LAB_50012e9e:
    _DAT_50086504 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_50086510 = malloc(0x80);
      if (DAT_50086510 == (undefined4 *)0x0) goto LAB_50012ec6;
      *DAT_50086510 = 0;
      DAT_5008650c = DAT_50086510;
      initterm(&DAT_50018000,&DAT_50018078);
      DAT_50086458 = DAT_50086458 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_50086510, puVar2 = DAT_5008650c, DAT_50086510 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_50086510;
        }
      }
      free(_Memory);
      DAT_50086510 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


