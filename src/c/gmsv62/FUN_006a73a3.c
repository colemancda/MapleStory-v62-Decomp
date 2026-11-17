/* FUN_006a73a3 - 0x006a73a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a73a3(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xb4) != 1) {
    uVar2 = FUN_0045b90e(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00414f8b(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
    }
  }
  _memset((void *)(unaff_EBP + -0x38),0,0x14);
  _memset((void *)(unaff_EBP + -0x24),0,0x14);
  iVar1 = *(int *)(extraout_ECX + 0xb0);
  if (*(int *)(iVar1 + 0x44) == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x44) + -4);
    *(int *)(unaff_EBP + 8) = iVar3;
    if (5 < iVar3) {
      *(undefined4 *)(unaff_EBP + 8) = 5;
    }
  }
  iVar3 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (0 < *(int *)(unaff_EBP + 8)) {
    do {
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        if (*(int *)(unaff_EBP + 8) == 1) {
          *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(*(int *)(iVar1 + 0x44) + 4);
        }
      }
      else if (iVar3 == *(int *)(unaff_EBP + 8) + -1) {
        iVar3 = iVar3 * 4;
        *(undefined4 *)(unaff_EBP + -0x38 + iVar3) = *(undefined4 *)(*(int *)(iVar1 + 0x44) + iVar3)
        ;
        *(undefined4 *)(unaff_EBP + -0x24 + iVar3) = 0xffffffff;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x38 + *(int *)(unaff_EBP + -0x10) * 4) =
             *(undefined4 *)(*(int *)(iVar1 + 0x44) + iVar3 * 4);
        *(undefined4 *)(unaff_EBP + -0x24 + *(int *)(unaff_EBP + -0x10) * 4) =
             *(undefined4 *)(*(int *)(iVar1 + 0x44) + 4 + *(int *)(unaff_EBP + -0x10) * 4);
      }
      iVar3 = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x10) = iVar3;
    } while (iVar3 < *(int *)(unaff_EBP + 8));
  }
  FUN_00605efb(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar2 = FUN_0045ece0(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x24));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414f8b(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  FUN_00605efb(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uVar2 = FUN_0045ece0(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x20));
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414f8b(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  FUN_00605efb(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 5;
  uVar2 = FUN_0045ece0(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x1c));
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414f8b(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  FUN_00605efb(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 7;
  uVar2 = FUN_0045ece0(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x18));
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00414f8b(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  FUN_00605efb(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 9;
  uVar2 = FUN_0045ece0(unaff_EBP + 0x10,*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x14));
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00414f8b(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


