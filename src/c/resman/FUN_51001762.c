/* FUN_51001762 - 0x51001762 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LONG FUN_51001762(void)

{
  int *piVar1;
  LONG LVar2;
  int unaff_EBP;
  
  FUN_51005950();
  *(undefined **)(unaff_EBP + -0x10) = &DAT_51009888;
  FUN_510011e9();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  LVar2 = InterlockedDecrement(piVar1 + 1);
  if ((LVar2 == 0) && (DAT_51009324 = 0, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x2c))(1);
  }
  _DAT_5100988c = _DAT_5100988c + -1;
  if (_DAT_5100988c == 0) {
    _DAT_51009888 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return LVar2;
}


