/* FUN_00554bde - 0x00554bde in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00554bde(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  int iStack_30;
  int *piStack_2c;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 0) {
    piStack_2c = *(int **)(unaff_EBP + 8);
    iStack_30 = unaff_EBP + 8;
    FUN_004497f5();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_2c = (int *)0x0;
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        *(int **)(unaff_EBP + 0xc) = &iStack_30;
        FUN_00679e4e(&iStack_30,0x6d3);
        iVar2 = unaff_EBP + -0x2c;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0040263d(iVar2);
        iStack_30 = FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uVar1 = FUN_00412550();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar2 = unaff_EBP + -0x2c;
      }
      else {
        *(int **)(unaff_EBP + 0xc) = &iStack_30;
        FUN_00679e4e(&iStack_30,0x6d2);
        iVar2 = unaff_EBP + -0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0040263d(iVar2);
        iStack_30 = FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        uVar1 = FUN_00412550();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar2 = unaff_EBP + -0x1c;
      }
      piStack_2c = (int *)FUN_00402bc3(iVar2);
      if ((int)piStack_2c < 0) {
        iStack_30 = 0x554ca3;
        FUN_00878dfb();
      }
      piStack_2c = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_2c != (int *)0x0) {
        iStack_30 = 0x554cb4;
        (**(code **)(*piStack_2c + 8))();
      }
      goto LAB_00554cb6;
    }
  }
  uVar1 = 0;
LAB_00554cb6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


