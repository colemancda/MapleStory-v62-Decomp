/* FUN_5042a79a - 0x5042a79a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5042a79a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_50439050) {
      DAT_50439050 = DAT_50439050 + -1;
      goto LAB_5042a7b0;
    }
LAB_5042a7d8:
    uVar1 = 0;
  }
  else {
LAB_5042a7b0:
    _DAT_504390d4 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_504390e0 = malloc(0x80);
      if (DAT_504390e0 == (undefined4 *)0x0) goto LAB_5042a7d8;
      *DAT_504390e0 = 0;
      DAT_504390dc = DAT_504390e0;
      initterm(&DAT_50434000,&DAT_50434060);
      DAT_50439050 = DAT_50439050 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_504390e0, puVar2 = DAT_504390dc, DAT_504390e0 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_504390e0;
        }
      }
      free(_Memory);
      DAT_504390e0 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


