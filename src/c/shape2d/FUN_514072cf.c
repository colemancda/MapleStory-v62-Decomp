/* FUN_514072cf - 0x514072cf in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_514072cf(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_5140ad20();
  piVar1 = *(int **)(unaff_EBP + 8);
  if (*piVar1 == 0) {
    *(undefined **)(unaff_EBP + 8) = &DAT_51411b00;
    FUN_5140126a();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*piVar1 == 0) {
      iVar2 = FUN_5140a18a();
      *(int *)(unaff_EBP + -0x10) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_51407340();
      }
      *piVar1 = (int)puVar3;
    }
    _DAT_51411b04 = _DAT_51411b04 + -1;
    if (_DAT_51411b04 == 0) {
      _DAT_51411b00 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *piVar1;
}


