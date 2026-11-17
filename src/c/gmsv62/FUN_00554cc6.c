/* FUN_00554cc6 - 0x00554cc6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00554cc6(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uStack_2c;
  int *piStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 0) {
    piStack_24 = *(int **)(unaff_EBP + 8);
    piStack_28 = (int *)(unaff_EBP + 8);
    uStack_2c = 0x554ceb;
    FUN_004497f5();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_24 = (int *)0x0;
      piStack_28 = (int *)0x0;
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2c;
      FUN_00679e4e(&uStack_2c,0x8e8);
      iVar1 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0040263d(iVar1);
      FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_2c = 0x554d30;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x14) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar1 != 0) {
        piStack_24 = (int *)(unaff_EBP + -0x14);
        piStack_28 = (int *)0x554d46;
        piStack_24 = (int *)FUN_00404b30();
        if (((int)piStack_24 < 0) && (piStack_24 != (int *)0x80004002)) {
          piStack_28 = (int *)0x554d57;
          FUN_00878dfb();
        }
      }
      piStack_24 = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_28 = (int *)0x554d64;
      piStack_24 = (int *)FUN_00402bc3();
      if ((int)piStack_24 < 0) {
        piStack_28 = (int *)0x554d6f;
        FUN_00878dfb();
      }
      piStack_24 = *(int **)(unaff_EBP + -0x10);
      if (piStack_24 != (int *)0x0) {
        iVar1 = *piStack_24;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piStack_28 = (int *)0x554d7f;
        (**(code **)(iVar1 + 8))();
        piStack_28 = *(int **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piStack_28 != (int *)0x0) {
          uStack_2c = 0x554d90;
          (**(code **)(*piStack_28 + 8))();
        }
        uVar2 = 1;
        goto LAB_00554da8;
      }
      piStack_24 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_24 != (int *)0x0) {
        piStack_28 = (int *)0x554da6;
        (**(code **)(*piStack_24 + 8))();
      }
    }
  }
  uVar2 = 0;
LAB_00554da8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


