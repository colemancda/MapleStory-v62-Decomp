/* FUN_005e02ab - 0x005e02ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005e02ab(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_005e0625();
  iVar5 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10) = *(undefined4 *)(iVar5 + 0x52b);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14) = *(undefined4 *)(iVar5 + 0x52f);
  iVar1 = *(int *)(unaff_EBP + -0x14);
  iVar2 = *(int *)(iVar1 + 0x14);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int *)(iVar1 + 0x18) = iVar2 + iVar3;
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uVar4 = FUN_005dee01(*(undefined4 *)(iVar1 + 0x18));
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar5 = *(int *)(iVar5 + 0x527);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar5 != 0) {
    uVar4 = FUN_005df3f8(unaff_EBP + -0x28,iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_005e04d7(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_005e064d(0);
    }
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1c) =
           *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 4);
      iVar5 = FUN_005d90ec(*(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1c));
      *(int *)(unaff_EBP + -0x24) = iVar5;
      if (iVar5 != 0) {
        InterlockedIncrement((LONG *)(iVar5 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_00414f8b(*(int *)(unaff_EBP + -0x24) + 0x30);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_005dd104(0);
      }
    }
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar1 + 4) = iVar5;
  if (iVar5 != 0) {
    InterlockedIncrement((LONG *)(iVar5 + 4));
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_005e064d(0);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_005e06ab(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


