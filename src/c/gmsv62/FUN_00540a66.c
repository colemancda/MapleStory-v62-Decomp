/* FUN_00540a66 - 0x00540a66 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00540a66(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  FUN_0081622a(*(undefined4 *)(unaff_EBP + 8));
  FUN_00448dc6(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  iVar2 = (**(code **)(*piVar3 + 0x8c))
                    (piVar3,0,0,*(undefined4 *)(extraout_ECX + 0x1c),0x32,0xffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963cc8);
  }
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0x90) + 0x68);
  if (iVar2 == 4) {
    FUN_00403191(&DAT_00980690);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x78 + *(int *)(extraout_ECX + 0x8c) * 4);
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x10) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar3,0,0,uVar1,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00540cd7:
    iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  else {
    if (iVar2 == 5) {
      FUN_00403191(&DAT_00980690);
      piVar3 = *(int **)(unaff_EBP + 8);
      uVar1 = *(undefined4 *)(extraout_ECX + 0x88);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x80))
                        (piVar3,4,0,uVar1,*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x18));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_00540cd7;
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -0x10) =
         *(undefined4 *)(extraout_ECX + 100 + *(int *)(extraout_ECX + 0x8c) * 4);
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x14) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar3,0,0,*(undefined4 *)(unaff_EBP + -0x10),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (*(int *)(*(int *)(extraout_ECX + 0x90) + 0x68) != 4) {
      iVar2 = *(int *)(extraout_ECX + 0xd0);
      if (1 < iVar2) {
        if (iVar2 == 2) {
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
          if ((iVar2 != 4) && (iVar4 = 2, iVar2 != 5)) {
            FUN_004125e6();
            goto LAB_00540cf9;
          }
        }
        FUN_00403191(&DAT_00980690);
        uVar1 = *(undefined4 *)
                 (extraout_ECX + 0x9c +
                 ((-(uint)(*(int *)(extraout_ECX + 0xcc) != 0) & 2) + 1 + iVar4 * 4) * 4);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar3 = *(int **)(unaff_EBP + 8);
        iVar2 = (**(code **)(*piVar3 + 0x80))
                          (piVar3,*(undefined4 *)(&DAT_00965580 + *(int *)(extraout_ECX + 0xd0) * 4)
                           ,0x18,*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                           *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar3,&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_00540cd7;
      }
    }
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
LAB_00540cf9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


