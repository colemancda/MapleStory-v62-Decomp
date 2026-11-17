/* FUN_004752aa - 0x004752aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004752aa(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 8) != 0) && (*(int *)(extraout_ECX + 8) != -1)) {
    iVar4 = *(int *)(extraout_ECX + 0x58);
    while (iVar4 != 0) {
      iVar4 = *(int *)(*(int *)(extraout_ECX + 0x5c) + 4);
      *(int *)(unaff_EBP + -0x18) = iVar4;
      iVar3 = 0;
      if (iVar4 != 0) {
        InterlockedIncrement((LONG *)(iVar4 + 4));
        iVar3 = *(int *)(unaff_EBP + -0x18);
      }
      uVar6 = *(undefined4 *)(iVar3 + 0xc);
      uVar1 = *(undefined4 *)(iVar3 + 0x10);
      uVar2 = *(undefined4 *)(extraout_ECX + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar4 = (*DAT_0097b764)(uVar2,uVar1,uVar6,0);
      if (iVar4 == -1) {
        iVar4 = (*DAT_0097b738)();
        if (iVar4 != 0x2733) {
          FUN_0047509a(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_00475b89(0);
        }
        break;
      }
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0xc);
      if (iVar4 == iVar3) {
        FUN_00475c7d(*(undefined4 *)(extraout_ECX + 0x5c));
      }
      else {
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x18);
        iVar5 = FUN_004029b9(0x1c);
        *(int *)(unaff_EBP + -0x14) = iVar5;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00474e4b(iVar3 - iVar4,*(int *)(*(int *)(unaff_EBP + -0x10) + 0x10) + iVar4,
                               *(int *)(unaff_EBP + -0x10));
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0047598f(uVar6);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_00475b89(0);
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      iVar4 = *(int *)(extraout_ECX + 0x58);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


