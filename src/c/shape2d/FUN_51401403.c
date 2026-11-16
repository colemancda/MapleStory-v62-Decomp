/* FUN_51401403 - 0x51401403 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51401403(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EBP;
  int iVar3;
  
  FUN_5140ad20();
  iVar3 = -0x7ff8fff2;
  puVar1 = (undefined4 *)FUN_5140280f();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_51401a45(puVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    InterlockedIncrement(piVar2 + 0x10);
    InterlockedDecrement(piVar2 + 0x10);
    iVar3 = (**(code **)*piVar2)
                      (piVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar3 != 0) {
      (**(code **)(*piVar2 + 0x58))(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


