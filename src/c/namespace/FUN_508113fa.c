/* FUN_508113fa - 0x508113fa in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int * FUN_508113fa(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 **)(unaff_EBP + -0x18) = (undefined4 *)(extraout_ECX + 0x24);
  FUN_508012a1();
  piVar4 = (int *)(extraout_ECX + 0x54);
  iVar2 = *piVar4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    FUN_5080dfed(0x80004003);
  }
  piVar1 = (int *)*piVar4;
  iVar2 = (**(code **)(*piVar1 + 0x2c))();
  if (iVar2 < 0) {
    FUN_5080dffb(iVar2,piVar1,&DAT_5081e4e0);
  }
  *(undefined1 **)(unaff_EBP + 0x10) = &stack0xffffffc8;
  FUN_5080dbc8(&stack0xffffffc8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50811f3b(piVar4);
  FUN_5080dc76();
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar4 == (int *)0x0) {
    FUN_5080dfed(0x80004003);
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_5081ead8;
  *(undefined4 *)(unaff_EBP + -0x24) = DAT_5081eadc;
  iVar2 = *piVar4;
  *(undefined4 *)(unaff_EBP + -0x20) = DAT_5081eae0;
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_5081eae4;
  *(int **)(unaff_EBP + 0x10) = piVar4;
  iVar2 = (**(code **)(iVar2 + 0x28))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar2 < 0) {
    FUN_5080dffb(iVar2,*(int **)(unaff_EBP + 0x10),&DAT_5081e4f0);
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  piVar1 = *(int **)(unaff_EBP + 8);
  *piVar1 = (int)piVar4;
  piVar3 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
    piVar3 = *(int **)(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar4 = (int *)(extraout_ECX + 0x28);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    *(undefined4 *)(extraout_ECX + 0x24) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar1;
}


