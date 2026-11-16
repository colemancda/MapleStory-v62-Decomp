/* FUN_51001d41 - 0x51001d41 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_51001d41(void)

{
  int *piVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_51005950();
  *(undefined **)(unaff_EBP + -0x10) = &DAT_51009888;
  uVar2 = extraout_ECX;
  FUN_510011e9();
  piVar1 = DAT_51009324;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  **(undefined4 **)(unaff_EBP + 8) = piVar1;
  if ((DAT_51009324 != (int *)0x0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
    (**(code **)(*DAT_51009324 + 4))(DAT_51009324,uVar2);
  }
  _DAT_5100988c = _DAT_5100988c + -1;
  if (_DAT_5100988c == 0) {
    _DAT_51009888 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


