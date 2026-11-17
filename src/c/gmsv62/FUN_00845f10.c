/* FUN_00845f10 - 0x00845f10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00845f10(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  uint uVar7;
  bool bVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar4 = DAT_0097926c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
  iVar2 = FUN_0062ae6e(unaff_EBP + -0x18);
  if (iVar2 != 0) {
    iVar2 = FUN_00455c59(unaff_EBP + -0x38);
    iVar2 = *(int *)(iVar2 + 4);
    *(int *)(unaff_EBP + -0x24) = iVar2;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      FUN_0045e7c2(0);
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    while ((iVar3 = *(int *)(unaff_EBP + -0x18), iVar3 != 0 &&
           (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar3 + -4)))) {
      uVar1 = *(ushort *)(iVar3 + *(uint *)(unaff_EBP + -0x10) * 2);
      uVar7 = (uint)uVar1;
      *(uint *)(unaff_EBP + -0x1c) = uVar7;
      iVar3 = FUN_005ee726(unaff_EBP + -0x1c);
      if (iVar3 != 0) {
        iVar3 = FUN_006fcb31(uVar7);
        uVar4 = *(undefined4 *)(iVar2 + 0xad);
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar3 + 0x2c);
        uVar4 = FUN_00413367(iVar2 + 0xa5,uVar4);
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        iVar3 = iVar2;
        iVar5 = FUN_006fcb31(uVar7);
        iVar5 = FUN_0062dfd9(uVar7,*(undefined4 *)(iVar5 + 0x18),iVar3);
        iVar3 = DAT_0097bdc4;
        if (((*(int *)(unaff_EBP + -0x1c) - *(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x2c))
            && (*(int *)(unaff_EBP + -0x2c) <= *(int *)(unaff_EBP + -0x1c))) && (iVar5 == 0)) {
          bVar8 = DAT_0097bdc4 == 0;
          *(uint *)(unaff_EBP + -0x14) = uVar7;
          if (bVar8) goto LAB_00846096;
          *(int *)(unaff_EBP + -0x2c) = iVar3 + 0x600;
          *(uint *)(unaff_EBP + -0x20) = (uint)uVar1;
          iVar3 = FUN_006defab(unaff_EBP + -0x20,0);
          if (iVar3 != 0) {
            FUN_007062dd(unaff_EBP + -0x20);
          }
          FUN_00705008(0);
        }
        if (DAT_0097bdc4 != 0) {
          for (uVar6 = 0;
              (iVar3 = *(int *)(DAT_0097bdc4 + 0x578), iVar3 != 0 && (uVar6 < *(uint *)(iVar3 + -4))
              ); uVar6 = uVar6 + 1) {
            if (*(uint *)(iVar3 + uVar6 * 4) == (uint)uVar1) {
              FUN_00705008(uVar7);
              iVar2 = *(int *)(unaff_EBP + -0x24);
              goto LAB_00846096;
            }
            iVar2 = *(int *)(unaff_EBP + -0x24);
          }
          if ((0 < *(int *)(unaff_EBP + 8)) &&
             ((iVar5 != 0 || (*(ushort *)(unaff_EBP + -0x14) == uVar1)))) {
            FUN_00702efc(uVar7,1);
          }
        }
      }
LAB_00846096:
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    }
    if (*(short *)(unaff_EBP + -0x14) != 0) {
      iVar2 = FUN_004029b9(0x110);
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_004defeb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004e1632(*(undefined4 *)(unaff_EBP + -0x14));
      FUN_008497ad(uVar4);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005ee767();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


