/* ptr_00855f1b - 0x00855f1b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00855f1b(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar7;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0x855f22;
  iVar2 = FUN_0042459a();
  if (iVar2 == *(int *)(unaff_EBX + 0x2cac)) {
    iStack_4 = 0x855f35;
    iVar2 = FUN_0042459a();
    iStack_4 = 0x855f3e;
    bVar1 = FUN_0042452b();
    iVar6 = 0;
    while( true ) {
      iVar3 = 0;
      if (*(int *)(unaff_EBX + 0x2cb8) != 0) {
        iVar3 = *(int *)(*(int *)(unaff_EBX + 0x2cb8) + -4);
      }
      if (iVar3 <= iVar6) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
        goto LAB_00855f6c;
      }
      if (*(int *)(*(int *)(unaff_EBX + 0x2cb8) + iVar6 * 4) == iVar2) break;
      iVar6 = iVar6 + 1;
    }
    *(int *)(unaff_EBP + -0x18) = iVar6;
LAB_00855f6c:
    if (*(int *)(unaff_EBP + -0x18) != -1) {
      *(uint *)(*(int *)(unaff_EBP + -0x18) * 0x25 + 0x19 + *(int *)(unaff_EBX + 0x2cbc)) =
           (uint)bVar1;
      if (bVar1 != 0) {
        iStack_4 = 0x110;
        uStack_8 = 0x855fa3;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x24) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          iStack_4 = 0x855fb5;
          uVar4 = FUN_004defeb();
        }
        iStack_4 = 0;
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_8;
        uVar7 = 0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        *(undefined4 **)(unaff_EBP + -0x10) = &uStack_8;
        uVar5 = FUN_008588f1(*(undefined4 *)(unaff_EBP + -0x18));
        FUN_0045f0f3(uVar5,uVar7);
        FUN_004e1c6a();
        uStack_8 = 0x855ff0;
        iStack_4 = uVar4;
        FUN_008497ad();
      }
      if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 2)) {
        iStack_4 = 0x856297;
        FUN_0077e45e();
      }
      if (DAT_00978358 != 0) {
        iStack_4 = 0x8562ab;
        FUN_007b02be();
      }
      if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
        iStack_4 = 0x8562d0;
        FUN_0077e45e();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_4 = 0x8565cd;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_4 = 0x8565d9;
      FUN_00414ebb();
      goto LAB_008565d9;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iStack_4 = *(int *)(unaff_EBP + 8) + -0xc;
    uStack_8 = 0x85644c;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iStack_4 = *(int *)(unaff_EBP + -0x14) + -0xc;
    uStack_8 = 0x856465;
    FUN_00434e38();
  }
LAB_008565d9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


