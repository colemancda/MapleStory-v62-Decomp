/* FUN_006a7ae0 - 0x006a7ae0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a7ae0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  _memset((void *)(unaff_EBP + -0x40),0,0x14);
  _memset((void *)(unaff_EBP + -0x2c),0,0x14);
  iVar1 = *(int *)(extraout_ECX + 0x98);
  if (*(int *)(iVar1 + 0x44) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x44) + -4);
    *(int *)(unaff_EBP + -0x10) = iVar3;
    if (5 < iVar3) {
      *(undefined4 *)(unaff_EBP + -0x10) = 5;
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(unaff_EBP + -0x10)) {
    do {
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        if (*(int *)(unaff_EBP + -0x10) == 1) {
          *(undefined4 *)(unaff_EBP + -0x2c) = 0xffffffff;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(*(int *)(iVar1 + 0x44) + 4);
        }
      }
      else {
        iVar2 = *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x40 + iVar3 * 4) =
             *(undefined4 *)(*(int *)(iVar1 + 0x44) + iVar3 * 4);
        if (iVar3 == iVar2 + -1) {
          *(undefined4 *)(unaff_EBP + -0x2c + iVar3 * 4) = 0xffffffff;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x2c + iVar3 * 4) =
               *(undefined4 *)(*(int *)(iVar1 + 0x44) + 4 + iVar3 * 4);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_EBP + -0x10));
  }
  FUN_00605efb(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_0045ece0(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x2c));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  FUN_00605efb(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uVar4 = FUN_0045ece0(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x28));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414f8b(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  FUN_00605efb(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  uVar4 = FUN_0045ece0(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x24));
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414f8b(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  FUN_00605efb(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  uVar4 = FUN_0045ece0(unaff_EBP + 0x10,*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x20));
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414f8b(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


