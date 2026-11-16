/* FUN_1000c402 - 0x1000c402 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000c402(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_10017008) {
      DAT_10017008 = DAT_10017008 + -1;
      goto LAB_1000c418;
    }
LAB_1000c440:
    uVar1 = 0;
  }
  else {
LAB_1000c418:
    _DAT_10017014 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_10017020 = malloc(0x80);
      if (DAT_10017020 == (undefined4 *)0x0) goto LAB_1000c440;
      *DAT_10017020 = 0;
      DAT_1001701c = DAT_10017020;
      initterm(&DAT_10010000,&DAT_10010028);
      DAT_10017008 = DAT_10017008 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_10017020, puVar2 = DAT_1001701c, DAT_10017020 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_10017020;
        }
      }
      free(_Memory);
      DAT_10017020 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


