/* FUN_007a6f28 - 0x007a6f28 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_007a6f28(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *extraout_ECX;
  int unaff_EBP;
  uint uVar4;
  int iVar5;
  int *piStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) != 0) || (*(int *)(unaff_EBP + 0xc) != 0)) {
    iStack_28 = 100;
    piStack_2c = (int *)0x7a6f55;
    iVar2 = (**(code **)(*extraout_ECX + 0x10))();
    piStack_2c = *(int **)(iVar2 + 4);
    puVar3 = (undefined4 *)(**(code **)(*extraout_ECX + 0x10))();
    FUN_006218a0(unaff_EBP + -0x24,*puVar3);
    iStack_28 = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(int ***)(unaff_EBP + -0x14) = &piStack_2c;
    FUN_00622280();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004f14e2();
    FUN_0062197e();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_28 = 0x7a6f9c;
    FUN_0062229d();
  }
  if ((extraout_ECX[0x14a] & 0xfffffffeU) == 0x12) {
    iStack_28 = unaff_EBP + -0x24;
    piStack_2c = (int *)0x7a6fbd;
    iVar2 = FUN_00455c59();
    iStack_28 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x65);
    piStack_2c = (int *)(*(int *)(iVar2 + 4) + 0x61);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    sVar1 = FUN_0045f084();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_28 = 0x7a6fe3;
    FUN_0045e4a2();
    if (sVar1 != 0) {
      if ((*(uint *)(unaff_EBP + 0x10) & 0xfffffffe) != 4) {
        iStack_28 = extraout_ECX[0x5ff];
        piStack_2c = (int *)extraout_ECX[0x5fe];
        uVar4 = -(uint)(extraout_ECX[0x35c] != 0) & extraout_ECX[0x35c] - 0xcU;
        iVar5 = uVar4 + 0xc;
        iVar2 = (**(code **)(*(int *)(uVar4 + 0xc) + 0x40))(iVar5);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,iVar5,&DAT_00963d08);
        }
        *(undefined4 *)((-(uint)(extraout_ECX[0x35c] != 0) & extraout_ECX[0x35c] - 0xcU) + 0x1c4) =
             1;
      }
      uVar4 = *(uint *)(unaff_EBP + 0x10) & 1 | 4;
      goto LAB_007a7109;
    }
  }
  iStack_28 = unaff_EBP + -0x1c;
  piStack_2c = (int *)0x7a7062;
  iVar2 = FUN_00455c59();
  iStack_28 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x65);
  piStack_2c = (int *)(*(int *)(iVar2 + 4) + 0x61);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  sVar1 = FUN_0045f084();
  *(bool *)(unaff_EBP + -0xd) = sVar1 == 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iStack_28 = 0;
    piStack_2c = (int *)0x7a7093;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (*(char *)(unaff_EBP + -0xd) != '\0') {
    uVar4 = *(uint *)(unaff_EBP + 0x10) & 1 | 0x12;
    goto LAB_007a7109;
  }
  iStack_28 = extraout_ECX[0x7bd];
  piStack_2c = extraout_ECX + 0x7bb;
  iVar2 = FUN_004cd670();
  if (iVar2 != 0) {
    uVar4 = *(uint *)(unaff_EBP + 0x10) & 1 | 0x14;
    goto LAB_007a7109;
  }
  iVar2 = *(int *)(unaff_EBP + 0x14);
  if (extraout_ECX[0x7b4] != 0) {
    if (*(int *)(iVar2 + 0x110) == 0) {
      iStack_28 = 0x7a70e3;
      iVar5 = FUN_006158e9();
      if (iVar5 == 0) {
        iStack_28 = 0x7a70ee;
        iVar5 = FUN_00615923();
        if (iVar5 == 0) goto LAB_007a70f8;
      }
    }
    extraout_ECX[0x7b4] = 0;
  }
LAB_007a70f8:
  piStack_2c = *(int **)(unaff_EBP + 0x10);
  iStack_28 = iVar2;
  uVar4 = FUN_0079373d(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
LAB_007a7109:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


