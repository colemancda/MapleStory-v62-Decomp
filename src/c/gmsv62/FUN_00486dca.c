/* FUN_00486dca - 0x00486dca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00486dca(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  bool bVar4;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0) {
LAB_00486eed:
    bVar4 = false;
  }
  else {
    iVar1 = *(int *)(unaff_EBP + 8) / 100000;
    if (iVar1 != 0x11) {
      bVar4 = iVar1 == 0xe;
      goto LAB_00486eef;
    }
    uStack_28 = *(undefined4 *)(unaff_EBP + 8);
    iStack_2c = unaff_EBP + 8;
    piStack_30 = (int *)0x486e15;
    FUN_00552e70();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      iVar1 = 0;
      do {
        piStack_30 = (int *)0x486e2b;
        FUN_0087a1b0();
        piStack_30 = (int *)0x0;
        uStack_34 = 0;
        puStack_38 = (undefined1 *)&iStack_2c;
        uVar2 = FUN_00412335(iVar1 + 0x1e);
        *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_38;
        FUN_004033a1(uVar2);
        iVar3 = unaff_EBP + -0x28;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0040263d(iVar3);
        FUN_004048a4(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puStack_38 = (undefined1 *)0x486e66;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x14) = iVar3;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar3 != 0) {
          piStack_30 = (int *)(unaff_EBP + -0x14);
          uStack_34 = 0x486e7c;
          piStack_30 = (int *)FUN_00404b30();
          if (((int)piStack_30 < 0) && (piStack_30 != (int *)0x80004002)) {
            uStack_34 = 0x486e8d;
            FUN_00878dfb();
          }
        }
        piStack_30 = (int *)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_34 = 0x486e9a;
        piStack_30 = (int *)FUN_00402bc3();
        if ((int)piStack_30 < 0) {
          uStack_34 = 0x486ea5;
          FUN_00878dfb();
        }
        piStack_30 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piStack_30 != (int *)0x0) {
          uStack_34 = 0x486ec1;
          (**(code **)(*piStack_30 + 8))();
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 10);
      if (iVar1 != 10) {
        piStack_30 = *(int **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piStack_30 != (int *)0x0) {
          uStack_34 = 0x486eed;
          (**(code **)(*piStack_30 + 8))();
        }
        goto LAB_00486eed;
      }
      piStack_30 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_30 != (int *)0x0) {
        uStack_34 = 0x486ed7;
        (**(code **)(*piStack_30 + 8))();
      }
    }
    bVar4 = true;
  }
LAB_00486eef:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar4;
}


