/* FUN_5080e2f5 - 0x5080e2f5 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5080e2f5(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_5081eb24) {
      DAT_5081eb24 = DAT_5081eb24 + -1;
      goto LAB_5080e30b;
    }
LAB_5080e333:
    uVar1 = 0;
  }
  else {
LAB_5080e30b:
    _DAT_5081ebd0 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5081ebdc = malloc(0x80);
      if (DAT_5081ebdc == (undefined4 *)0x0) goto LAB_5080e333;
      *DAT_5081ebdc = 0;
      DAT_5081ebd8 = DAT_5081ebdc;
      initterm(&DAT_5081d000,&DAT_5081d054);
      DAT_5081eb24 = DAT_5081eb24 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5081ebdc, puVar2 = DAT_5081ebd8, DAT_5081ebdc != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5081ebdc;
        }
      }
      free(_Memory);
      DAT_5081ebdc = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


