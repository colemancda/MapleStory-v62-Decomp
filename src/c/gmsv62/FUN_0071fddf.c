/* FUN_0071fddf - 0x0071fddf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0071fddf(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  
  FUN_00879bb8();
  piStack_28 = (int *)(unaff_EBP + -0x20);
  *(int **)(unaff_EBP + -0x18) = extraout_ECX + -1;
  iStack_2c = 0x71fe00;
  piVar1 = (int *)FUN_004489f5();
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    piStack_28 = (int *)0x80004003;
    iStack_2c = 0x71fe15;
    FUN_00878dfb();
  }
  piStack_28 = (int *)(unaff_EBP + -0x1c);
  iStack_2c = 0x71fe20;
  piVar1 = (int *)FUN_004113e5();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    piStack_28 = (int *)0x80004003;
    iStack_2c = 0x71fe34;
    FUN_00878dfb();
  }
  piStack_28 = (int *)0x71fe3b;
  iVar2 = FUN_00404a94();
  piStack_28 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_28 != (int *)0x0) {
    iStack_2c = 0x71fe4d;
    (**(code **)(*piStack_28 + 8))();
  }
  piStack_28 = *(int **)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_28 != (int *)0x0) {
    iStack_2c = 0x71fe5e;
    (**(code **)(*piStack_28 + 8))();
  }
  if (iVar2 != 0) {
    iVar2 = *(int *)(unaff_EBP + 0xc);
    piStack_28 = (int *)(unaff_EBP + -0x14);
    iStack_2c = unaff_EBP + -0x10;
    iStack_30 = 1;
    uStack_38 = *(undefined4 *)(unaff_EBP + 8);
    uStack_3c = 0x71fe7f;
    iStack_34 = iVar2;
    iVar3 = FUN_0071f653();
    if (iVar3 != 0) {
      if (*(int *)(unaff_EBP + -0x14) == 3) {
        piStack_28 = *(int **)(unaff_EBP + -0x10);
        iStack_2c = 0x71fe97;
        iVar3 = (**(code **)(*extraout_ECX + 0x30))();
        iStack_2c = iVar3 + 0x14 + iVar2;
        iStack_30 = 0x71fea3;
        iStack_30 = (**(code **)(*extraout_ECX + 0x2c))();
        iStack_30 = iStack_30 + *(int *)(unaff_EBP + 8);
        iStack_34 = 0x71feb2;
        FUN_00755c88();
      }
      else {
        piStack_28 = *(int **)(unaff_EBP + -0x14);
        iStack_2c = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_30 = 0x71fec8;
        iStack_2c = FUN_00598e2f();
        if (iStack_2c == 0) {
          piStack_28 = (int *)0x0;
          iStack_2c = 1;
          iStack_30 = 0;
          iStack_34 = 0;
          uStack_38 = 0;
          uStack_3c = 0;
          *(undefined1 **)(unaff_EBP + 0xc) = auStack_40;
          uStack_44 = 0x10b4;
          FUN_00679d22(auStack_40);
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_44;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          FUN_0045f0f3(&DAT_00978474,0xffffffff);
          iVar3 = *extraout_ECX;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar3 = (**(code **)(iVar3 + 0x30))();
          iVar2 = iVar3 + 0x14 + iVar2;
          iVar3 = (**(code **)(*extraout_ECX + 0x2c))(iVar2);
          FUN_0074da18(iVar3 + *(int *)(unaff_EBP + 8),iVar2);
        }
        else {
          piStack_28 = (int *)0x1;
          iStack_30 = 0x71feda;
          iStack_2c = FUN_0064d61f();
          iStack_30 = 0x71fee2;
          iVar3 = (**(code **)(*extraout_ECX + 0x30))();
          iStack_30 = iVar3 + 0x14 + iVar2;
          iStack_34 = 0x71feee;
          iStack_34 = (**(code **)(*extraout_ECX + 0x2c))();
          iStack_34 = iStack_34 + *(int *)(unaff_EBP + 8);
          uStack_38 = 0x71fefd;
          FUN_00755feb();
        }
      }
      iVar2 = *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + -0x10) * 10;
      if (iVar2 != extraout_ECX[0x15a]) {
        extraout_ECX[0x15a] = iVar2;
        piStack_28 = (int *)0x0;
        iStack_2c = 0x71ff80;
        FUN_008161f1();
      }
      uVar4 = 1;
      goto LAB_0071ffa9;
    }
  }
  piStack_28 = (int *)0x71ff90;
  FUN_0074d6fb();
  if (extraout_ECX[0x15a] != -1) {
    extraout_ECX[0x15a] = -1;
    piStack_28 = (int *)0x0;
    iStack_2c = 0x71ffa7;
    FUN_008161f1();
  }
  uVar4 = 0;
LAB_0071ffa9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


