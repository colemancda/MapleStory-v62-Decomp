/* FUN_00845cde - 0x00845cde in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00845cde(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  bool bVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar4 = DAT_0097926c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
  iVar2 = FUN_0062ae1a(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x24);
  if (iVar2 != 0) {
    iVar2 = FUN_00455c59(unaff_EBP + -0x34);
    uVar4 = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    FUN_0045e4a2();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar5 = 0;
    while ((iVar2 = *(int *)(unaff_EBP + -0x24), iVar2 != 0 && (uVar5 < *(uint *)(iVar2 + -4)))) {
      uVar1 = *(ushort *)(iVar2 + uVar5 * 2);
      uVar5 = (uint)uVar1;
      *(uint *)(unaff_EBP + -0x2c) = uVar5;
      iVar2 = FUN_005ee726(unaff_EBP + -0x2c);
      if (iVar2 != 0) {
        iVar2 = FUN_006fcb31(uVar5);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        FUN_0084f385(iVar2 + 0x50);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        while ((iVar2 = *(int *)(unaff_EBP + -0x14), iVar2 != 0 &&
               (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar2 + -4)))) {
          iVar6 = *(uint *)(unaff_EBP + -0x10) * 8;
          iVar2 = *(int *)(iVar6 + iVar2);
          *(int *)(unaff_EBP + -0x30) = iVar6;
          if (*(int *)(unaff_EBP + 8) == iVar2) {
            uVar3 = FUN_0084c94e(*(int *)(unaff_EBP + 8));
            *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
            iVar2 = FUN_006fcb31(uVar5);
            iVar6 = FUN_0062dfd9(uVar5,*(undefined4 *)(iVar2 + 0x18),uVar4);
            iVar2 = *(int *)(*(int *)(unaff_EBP + -0x30) + 4 + *(int *)(unaff_EBP + -0x14));
            if (((*(int *)(unaff_EBP + 0xc) < iVar2) && (iVar2 <= *(int *)(unaff_EBP + -0x2c))) &&
               (iVar6 == 0)) {
              bVar8 = DAT_0097bdc4 == 0;
              *(uint *)(unaff_EBP + -0x18) = uVar5;
              if (bVar8) goto LAB_00845e88;
              *(uint *)(unaff_EBP + -0x28) = (uint)uVar1;
              iVar2 = FUN_006defab(unaff_EBP + -0x28,0);
              if (iVar2 != 0) {
                FUN_007062dd(unaff_EBP + -0x28);
              }
              FUN_00705008(0);
            }
            if (DAT_0097bdc4 != 0) {
              for (uVar7 = 0;
                  (iVar2 = *(int *)(DAT_0097bdc4 + 0x578), iVar2 != 0 &&
                  (uVar7 < *(uint *)(iVar2 + -4))); uVar7 = uVar7 + 1) {
                if (*(uint *)(iVar2 + uVar7 * 4) == (uint)uVar1) {
                  FUN_00705008(uVar5);
                  goto LAB_00845e88;
                }
              }
              if ((*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + -0x2c)) &&
                 ((iVar6 != 0 || (*(ushort *)(unaff_EBP + -0x18) == uVar1)))) {
                FUN_00702efc(uVar5,1);
              }
            }
          }
LAB_00845e88:
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          uVar4 = *(undefined4 *)(unaff_EBP + -0x3c);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00627d48();
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      uVar5 = *(uint *)(unaff_EBP + -0x1c);
    }
    if (*(short *)(unaff_EBP + -0x18) != 0) {
      iVar2 = FUN_004029b9(0x110);
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_004defeb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004e1632(*(undefined4 *)(unaff_EBP + -0x18));
      FUN_008497ad(uVar4);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005ee767();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


