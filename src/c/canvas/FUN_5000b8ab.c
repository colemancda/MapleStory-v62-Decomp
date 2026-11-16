/* FUN_5000b8ab - 0x5000b8ab in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5000b8ab(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_50012d80();
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0x80004003;
  }
  else {
    *(undefined **)(unaff_EBP + 0xc) = &DAT_50082008;
    FUN_500024f7();
    piVar2 = DAT_50082004;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *puVar1 = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    _DAT_5008200c = _DAT_5008200c + -1;
    if (_DAT_5008200c == 0) {
      _DAT_50082008 = 0;
    }
    uVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


