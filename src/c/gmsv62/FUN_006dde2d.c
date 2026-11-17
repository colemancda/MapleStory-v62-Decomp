/* FUN_006dde2d - 0x006dde2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006dde2d(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  int *local_18;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + 8) + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar2 = *(int **)(unaff_EBP + 0xc);
  while (local_18 = piVar2, puVar1 != (undefined4 *)0x0) {
    iVar3 = *(int *)((-(uint)(puVar1 != (undefined4 *)0x0) & (uint)(puVar1 + -4)) + 4);
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = puVar1[1];
    *(int ***)(unaff_EBP + 8) = &local_18;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    FUN_006ddd26(unaff_EBP + -0x14);
    puVar1 = (undefined4 *)(-(uint)(iVar3 != 0) & iVar3 + 0x10U);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


