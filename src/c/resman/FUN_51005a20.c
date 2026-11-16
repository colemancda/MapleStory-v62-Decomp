/* FUN_51005a20 - 0x51005a20 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_51005a20(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_51009868) {
      DAT_51009868 = DAT_51009868 + -1;
      goto LAB_51005a36;
    }
LAB_51005a5e:
    uVar1 = 0;
  }
  else {
LAB_51005a36:
    _DAT_51009890 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_5100989c = malloc(0x80);
      if (DAT_5100989c == (undefined4 *)0x0) goto LAB_51005a5e;
      *DAT_5100989c = 0;
      DAT_51009898 = DAT_5100989c;
      initterm(&DAT_51008000,&DAT_51008030);
      DAT_51009868 = DAT_51009868 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_5100989c, puVar2 = DAT_51009898, DAT_5100989c != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_5100989c;
        }
      }
      free(_Memory);
      DAT_5100989c = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


