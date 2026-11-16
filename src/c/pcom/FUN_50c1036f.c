/* FUN_50c1036f - 0x50c1036f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_50c1036f(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < _DAT_50c2143c) {
      _DAT_50c2143c = _DAT_50c2143c + -1;
      goto LAB_50c10385;
    }
LAB_50c103ad:
    uVar1 = 0;
  }
  else {
LAB_50c10385:
    _DAT_50c214f4 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_50c21500 = malloc(0x80);
      if (DAT_50c21500 == (undefined4 *)0x0) goto LAB_50c103ad;
      *DAT_50c21500 = 0;
      DAT_50c214fc = DAT_50c21500;
      initterm(&DAT_50c17000,&DAT_50c1707c);
      _DAT_50c2143c = _DAT_50c2143c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_50c21500, puVar2 = DAT_50c214fc, DAT_50c21500 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_50c21500;
        }
      }
      free(_Memory);
      DAT_50c21500 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


