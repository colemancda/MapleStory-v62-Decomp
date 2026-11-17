/* FUN_00544114 - 0x00544114 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00544114(void)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX[100] + 0x68) != 5) {
    iVar4 = 0;
    iVar5 = 0;
    *(int *)(unaff_EBP + -0x10) = extraout_ECX[100] + 0x54;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    do {
      if (iVar4 != 0) goto LAB_0054427c;
      if (iVar5 < extraout_ECX[99]) {
        FUN_00545b91(unaff_EBP + -0x24,iVar5);
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x24) + 5;
        *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x20) + 5;
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
        iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + 8),
                                *(undefined4 *)(unaff_EBP + 0xc));
        if (iVar1 != 0) {
          iVar1 = iVar5 * 8 + **(int **)(unaff_EBP + -0x10);
          FUN_00489d8c();
          uVar6 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x24);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          *(undefined4 *)(unaff_EBP + -0x4c) = uVar6;
          FUN_0052fe27(iVar5 * 8 + **(int **)(unaff_EBP + -0x10));
          iVar5 = extraout_ECX[100];
          iVar4 = 1;
          if (*(int *)(iVar5 + 0x68) == 1) {
            *(int *)(unaff_EBP + -0x4c) =
                 *(int *)(unaff_EBP + -0x4c) + *(int *)(*(int *)(iVar1 + 4) + 0xfc);
          }
          iVar3 = iVar4;
          if ((*(int *)(iVar5 + 0x68) == 4) && (*(int *)(iVar5 + 0x6c) == 3)) {
            iVar3 = 2;
          }
          iVar5 = *(int *)(iVar1 + 4);
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(iVar5 + 0x2c);
          *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar5 + 0x30);
          *(undefined4 *)(unaff_EBP + -0x54) = 1;
          *(int *)(unaff_EBP + -0x40) = *(int *)(iVar1 + 4) + 0x98;
          uVar6 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x18);
          uVar7 = 0;
          iVar5 = unaff_EBP + -0x60;
          iVar1 = (**(code **)(*extraout_ECX + 0x30))(uVar6,iVar5,0,iVar3);
          iVar1 = iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc);
          iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
          FUN_00759767(iVar2 + 0x14 + *(int *)(unaff_EBP + 8),iVar1,uVar6,iVar5,uVar7,iVar3);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00489db7();
          iVar5 = *(int *)(unaff_EBP + -0x14);
        }
      }
      iVar5 = iVar5 + 1;
      *(int *)(unaff_EBP + -0x14) = iVar5;
    } while (iVar5 < 0x10);
    if (iVar4 == 0) {
      FUN_0074d6fb();
    }
  }
LAB_0054427c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


