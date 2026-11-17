/* FUN_0059f58a - 0x0059f58a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059f58a(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_00979458 = DAT_00979458 + 1;
  iVar4 = DAT_00979458 % 4;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar3 = extraout_ECX;
  if ((iVar4 == 0) && (piVar5 = *(int **)(extraout_ECX + 0x68), piVar5 != (int *)0x0)) {
    do {
      piVar1 = (int *)*piVar5;
      *(int **)(unaff_EBP + -0x18) = piVar5;
      iVar3 = *(int *)((-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + -4)) + 4);
      piVar5 = (int *)(-(uint)(iVar3 != 0) & iVar3 + 0x10U);
      *(int **)(unaff_EBP + -0x1c) = piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_004113e5(unaff_EBP + -0x14);
      iVar3 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar3 = FUN_00404a94();
      piVar2 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      if (iVar3 == 0) {
        FUN_0048bbbd(*(undefined4 *)(unaff_EBP + -0x18));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    } while (piVar5 != (int *)0x0);
    iVar3 = *(int *)(unaff_EBP + -0x10);
  }
  iVar4 = (*DAT_0097b704)();
  if ((*(int *)(iVar3 + 0x18) != 0) &&
     (iVar4 != *(int *)(iVar3 + 0x1c) && -1 < iVar4 - *(int *)(iVar3 + 0x1c))) {
    FUN_005a754f();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


