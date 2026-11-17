/* FUN_005d082e - 0x005d082e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d082e(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar8;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  iStack_3c = 0x5d084b;
  cVar2 = FUN_0042452b();
  iVar8 = (int)cVar2;
  *(int *)(unaff_EBP + -0x24) = iVar8;
  iStack_3c = 0x5d0858;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
  if (-2 < iVar8) {
    iStack_3c = 0x5d086b;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    iStack_3c = 0x5d0875;
    uVar4 = FUN_0042452b();
    iStack_3c = *(undefined4 *)(unaff_EBP + -0x14);
    *(uint *)(unaff_EBP + -0x20) = uVar4 & 0xff;
    iStack_40 = 0x5d0883;
    iVar5 = FUN_005d90ec();
    if ((iVar5 != 0) && (-1 < iVar8)) {
      iStack_40 = 0x5d089c;
      iStack_3c = iVar8;
      iVar8 = FUN_004e67c9();
      *(int *)(unaff_EBP + -0x1c) = iVar8;
      if (iVar8 != 0) {
        *(int **)(unaff_EBP + 8) = (int *)(iVar8 + 0x78);
        piVar1 = *(int **)(iVar8 + 0x78);
        if ((piVar1 == (int *)0x0) || (iVar8 = *piVar1, iVar8 == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(iVar8 + -4) >> 1;
        }
        if (uVar4 != 0) {
          iStack_3c = 1;
          iStack_40 = unaff_EBP + -0x38;
          iStack_44 = 0x5d08d8;
          FUN_005c5b12();
          uVar4 = *(int *)(unaff_EBP + -0x30) - *(int *)(unaff_EBP + -0x38);
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x38);
          if (uVar4 == 0) {
            iStack_3c = 0x5d0901;
            iVar8 = FUN_004133f0();
          }
          else {
            iStack_3c = 0x5d08f1;
            uVar6 = FUN_004133f0();
            iVar8 = uVar6 % uVar4 + *(int *)(unaff_EBP + -0x18);
          }
          uVar4 = *(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34);
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x34);
          if (uVar4 == 0) {
            iStack_3c = 0x5d0927;
            iVar5 = FUN_004133f0();
          }
          else {
            iStack_3c = 0x5d0917;
            uVar6 = FUN_004133f0();
            iVar5 = uVar6 % uVar4 + *(int *)(unaff_EBP + -0x18);
          }
          iStack_3c = 0xc00614a4;
          if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x84) == 0) {
            *(int **)(unaff_EBP + -0x1c) = &iStack_40;
            iStack_44 = 0;
            iStack_48 = 0x5d0977;
            FUN_00424e0a();
            *(undefined4 **)(unaff_EBP + -0x18) = &uStack_4c;
            *(undefined4 *)(unaff_EBP + -4) = 2;
            iStack_48 = iVar8;
            iStack_44 = iVar5;
            FUN_00424dd7(0);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar7 = *(int *)(unaff_EBP + -0x20);
          }
          else {
            *(int **)(unaff_EBP + -0x20) = &iStack_40;
            iStack_44 = 0;
            iStack_48 = 0x5d0947;
            FUN_00424e0a();
            iStack_44 = 0;
            iStack_48 = 0;
            *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_4c;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            FUN_005cb50c(&uStack_4c);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar7 = FUN_005c5474();
          }
          uVar4 = (uint)(iVar7 == 0);
          uVar3 = FUN_004091f9(uVar4);
          FUN_00424e82(uVar3);
          FUN_0042b613(uVar3,uVar4);
          iStack_44 = 0x5d09b5;
          iStack_40 = iVar8;
          iStack_3c = iVar5;
          iStack_44 = FUN_007d3c48();
          iStack_48 = *(int *)(unaff_EBP + -0x24) + 0xb;
          uStack_4c = *(undefined4 *)(unaff_EBP + -0x14);
          FUN_007d4267();
        }
      }
    }
  }
  iStack_3c = 0;
  iStack_40 = 0;
  iStack_44 = 0;
  iStack_48 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_4c = 0x5d09d8;
  FUN_005ca219();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


